#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "function/common/ui/shcodeselectiondialog.h"
#include "function/common/ui/qperiodselectiondlg.h"
#include "util/xingutil.h"
#include "util/log.h"
#include <QtCore/QFile>

MainWindow::MainWindow(LoginMngr *loginMngr, QWidget *parent) :
    QMainWindow(parent),
	ui(new Ui::MainWindow), mStockChartMngr(&mQueryMngr), mStockInfoUpdater(&mQueryMngr), mThemeUpdater(&mQueryMngr), mMovementUpdater(&mQueryMngr), mUpjongCodeUpdater(&mQueryMngr), mLoginMngr(loginMngr)
{
    ui->setupUi(this);
    initAction();
    initMenu();
    mQueryMngr.start();
	mMovementUpdater.moveToThread(&mBackgroundWorker);
	mStockInfoUpdater.moveToThread(&mBackgroundWorker);
	mUpjongCodeUpdater.moveToThread(&mBackgroundWorker);
	mThemeUpdater.moveToThread(&mBackgroundWorker);
	mBackgroundWorker.start();
    connect(mLoginMngr, SIGNAL(notifyLogin(QString,QString)), this, SLOT(onLogin()));
    connect(mLoginMngr, SIGNAL(notifyLogout()), this, SLOT(onLogout()));
    connect(mLoginMngr, SIGNAL(notifyDisconnect()), this, SLOT(onDisconnectServer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onUpjongCodeUpdated()
{
    QMessageBox::information(this, qkor("업종코드 업데이트"), qkor("업데이트 완료"));
}

void MainWindow::onDisconnectServer()
{
    qCDebug(mainWindow)<<qkor("서버와의 연결이 종료되었습니다.");
}

void MainWindow::onLogin()
{
    QMessageBox::information(this, qkor("로그인"), qkor("성공"));
}

void MainWindow::onLogout()
{
    qCDebug(mainWindow)<<qkor("로그아웃 되었습니다.");
}

void MainWindow::ReportEventLog(const QString &log)
{
    qCDebug(mainWindow)<<qkor("Xing 모듈로부터의 이벤트 - ")<<log;
}

void MainWindow::onShowChart()
{
	connect(&mStockChartMngr, &StockChartDataManager::responseStockData, [&](StockPriceHistory* history)
	{
		QString filename = "./Data.txt";
		QFile file(filename);
		if (file.open(QIODevice::ReadWrite))
		{
			QTextStream stream(&file);
			StockPriceHistory::const_iterator it;
			for (it = history->cbegin(); it != history->cend(); ++it)
			{
				stream << ((*it)->date).toString("yyyyMMdd") << "\t" << (*it)->open << "\t" << (*it)->high << "\t" << (*it)->low <<"\t"<< (*it)->close << endl;
			}
			file.close();
			QMetaObject::invokeMethod(this, "showMessage", Qt::QueuedConnection, Q_ARG(QString, tr("Price data save")), Q_ARG(QString, tr("Success")));
		}

	});
	mStockChartMngr.requestStockData("005930", StockChartDataManager::DAILY, QDate(2004, 1, 3), QDate(2015, 9, 30), true);
}

void MainWindow::onShowChart(const QString& shcode)
{
}

void MainWindow::showMessage(const QString& title, const QString& body)
{
	QMessageBox::information(this, title, body);
}

void MainWindow::requestMovementUpdateByUpcode()
{
    ShcodeSelectionDialog dialog(&mQueryMngr);
	if (dialog.exec() == QDialog::Accepted) {
		QString upcode = dialog.getSelectedUpcode();
		mMovementUpdater.updateByUpcode(upcode);
	}
}

void MainWindow::requestMovementUpdateByShcode()
{
	ShcodeSelectionDialog dialog(&mQueryMngr);
	if (dialog.exec() == QDialog::Accepted) {
		QString shcode = dialog.getSelectedShcode();
		mMovementUpdater.updateByShcode(shcode);
	}
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    qCDebug(mainWindow)<<"closeEvent";
}

void MainWindow::initAction()
{
    //StockInfo Update Action [START]
    mStockInfoUpdateAction = new QAction(qkor("StockInfo 업데이트"), this);
    connect(mStockInfoUpdateAction, &QAction::triggered, &mStockInfoUpdater,&StockInfoUpdater::updateStockInfo);
	connect(&mStockInfoUpdater, &StockInfoUpdater::updateStockInfoDone,this, [this](){
		QMessageBox::information(this, qkor("StockInfo 업데이트"), qkor("업데이트 성공")); 
	});
    //StockInfo Update Action [END]

    //Movement Update Action by Upcode [START]
    mMovementUpdateByUpcodeAction = new QAction(qkor("수급정보 업데이트(업종)"), this);
    connect(mMovementUpdateByUpcodeAction, &QAction::triggered, this, &MainWindow::requestMovementUpdateByUpcode);
	connect(&mMovementUpdater, &MovementUpdater::updateDone,this, [this](){
		QMessageBox::information(this, qkor("수급정보 업데이트"), qkor("업데이트 성공"));
	});
    //Movement Update Action by Upcode [END]

    //Movement Update Action by Shcode [START]
    mMovementUpdateByShcodeAction = new QAction(qkor("수급정보 업데이트(종목)"), this);
    connect(mMovementUpdateByShcodeAction, &QAction::triggered, this, &MainWindow::requestMovementUpdateByShcode);
    //Movement Update Action by Shcode [START]

    //UpjongCode Update Action [START]
    mUpjongCodeUpdateAction = new QAction(qkor("업종코드 업데이트"), this);
    connect(mUpjongCodeUpdateAction, &QAction::triggered,&mUpjongCodeUpdater, &UpjongCodeUpdater::updateUpjongCode);
	connect(&mUpjongCodeUpdater, &UpjongCodeUpdater::updateUpjongCodeDone,this, [this](){
		QMessageBox::information(this, qkor("업종코드 업데이트"), qkor("업데이트 성공"));
	});
    //UpjongCode Update Action [END]

	//Theme Update Action [START]
	mThemeUpdateAction = new QAction(qkor("테마 업데이트"), this);
	connect(mThemeUpdateAction, &QAction::triggered, &mThemeUpdater, &ThemeUpjongUpdater::updateThemeUpjong);
	connect(&mThemeUpdater, &ThemeUpjongUpdater::updateThemeUpjongDone, this, [this]() {
		QMessageBox::information(this, qkor("테마 업데이트"), qkor("업데이트 성공"));
	});
	//Theme Update Action [END]

	//Show Chart Action [START]
	mShowChartAction = new QAction(qkor("차트"), this);
	connect(mShowChartAction, SIGNAL(triggered()), this, SLOT(onShowChart()));
	//Show Chart Action [END]

	//거래 기록 Action [START]
	mTradingLogAction = new QAction(qkor("거래기록"), this);
	connect(mTradingLogAction, &QAction::triggered, this, [&]()
	{
		QPeriodSelectionDlg dlg(qkor("거래 조회 기간"), this);
		if (dlg.exec()==QDialog::Accepted)
		{
			
		}
	});
}

void MainWindow::initMenu()
{
    m_pUpdateMenu = menuBar()->addMenu(tr("Update"));
    m_pUpdateMenu->addAction(mStockInfoUpdateAction);
    m_pUpdateMenu->addAction(mUpjongCodeUpdateAction);
	m_pUpdateMenu->addAction(mThemeUpdateAction);
    m_pUpdateMenu->addAction(mMovementUpdateByUpcodeAction);
	m_pUpdateMenu->addAction(mMovementUpdateByShcodeAction);

	m_pTestMenu = menuBar()->addMenu(tr("Test"));
	m_pTestMenu->addAction(mShowChartAction);

	m_pTradingManageMenu = menuBar()->addMenu(qkor("거래관리"));
	m_pTradingManageMenu->addAction(mTradingLogAction);
}
