#pragma once
#include <iostream>
#include <string>

#define BUY_CODE		1
#define SELL_CODE		2
#define UNKNOWN_CODE	0

//#define I20
#ifdef I20
typedef	unsigned long long	mdStockCodeType;
typedef	std::string			mdIDT;
typedef	double				mdBalanT;
typedef	double				mdPriceT;
typedef	unsigned int		mdVolumT;
#else
#ifdef I30_WIN
typedef	unsigned long long	mdStockCodeType;
typedef	unsigned long long	mdIDT;
typedef	unsigned long long	mdBalanT;
typedef	unsigned int		mdPriceT;
typedef	unsigned int		mdVolumT;
#else
typedef	uint64_t			mdStockCodeType;
typedef	uint64_t			mdIDT;
typedef	uint64_t			mdBalanT;
typedef	unsigned int		mdPriceT;
typedef	unsigned int		mdVolumT;
#endif
#endif

#define WEI_BAO				0
#define DAI_BAO				1
#define YI_BAO				2
#define YI_BAO_DAI_CHE		3
#define BU_FEN_DAI_CHE		4
#define BU_FEN_CE_DAN		5
#define QUAN_CE				6
#define BU_CHENG			7
#define QUAN_CHENG			8
#define FEI_DAN				9


namespace MSM
{
	enum tOrderType{ tBuy = BUY_CODE, tSell = SELL_CODE, tUnknown = UNKNOWN_CODE };
	enum tTableType{tAsk, tBid};
	enum tOrderMatchedStatus 
	{ 
		InQueue = WEI_BAO, 
		Delivering = DAI_BAO, 
		Delivered = YI_BAO, 
		Cancelling = YI_BAO_DAI_CHE, 
		SubMatchedCancelling = BU_FEN_DAI_CHE, 
		SubMatchedCancelled = BU_FEN_CE_DAN, 
		Cancelled = QUAN_CE, 
		SubMatched = BU_CHENG, 
		Matched = QUAN_CHENG, 
		InValid = FEI_DAN
	};
}

