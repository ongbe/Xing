#ifndef CHART_COMMON_H
#define CHART_COMMON_H

typedef enum { CANDLE_STICK, CLOSING_PRICE, MEDIAN_PRICE, OHLC, TYPICAL_PRICE, WEIGHTED_CLOSE } MAIN_CHART_TYPE;
typedef enum { NONE, BOLLINGER_BAND, DONCHAIN_CHANNEL, ENVELOP } CHANNEL_TYPE;
typedef enum
{
	ACCUM_DISTRIBUTION = 0
	, AROON_OSCILLATOR
	, AROON
	, AVG_DIRECTIONAL_INDEX
	, AVG_TRUE_RANGE
	, BOLLINGER_BAND_WIDTH
	, CHAIKIN_MONEY_FLOW
	, CHAIKIN_OSCILLATOR
	, CHAIKIN_VOLATILITY
	, CLOSE_LOCATION_VALUE
	, COMMONDITY_CHANNEL_INDEX
	, DETRENDED_PRICE_OSC
	, DONCHIAN_CHANNEL_WIDTH
	, EASE_OF_MOVEMENT
	, FAST_STOCHASTIC
	, MACD
	, MASS_INDEX
	, MOMENTUM
	, MONEY_FLOW_INDEX
	, NEG_VOLUME_INDEX
	, ON_BALANCE_VOLUME
	, PERFORMANCE
	, PERCENTAGE_PRICE_OSCILLATOR
	, PERCENTAGE_VOLUME_OSCILLATOR
	, POS_VOLUME_INDEX
	, PRICE_VOLUME_TREND
	, RATE_OF_CHANGE
	, RSI
	, SLOW_STOCHASTIC
	, STOCH_RSI
	, TRIX
	, ULTIMATE_OSCILLATOR
	, VOLUME
	, WILLIAMS_R
	, PARABOLIC_SAR
	, NUM_OF_INDICATOR
} INDICATOR_TYPE;

typedef enum {
	MARKET_BREADTH_INDICATOR,
	TREND_INDICATOR,
	VOLATILITY_INDICATOR,
	MOMENTUM_INDICATOR,
	ETC
} INDICATOR_CATEGORY_TYPE;

#endif