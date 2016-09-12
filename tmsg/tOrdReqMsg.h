#pragma once
#include <string>
#include <iostream>
#include "rapidjson/document.h"     // rapidjson's DOM-style API
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"
#include "rapidjson/prettywriter.h" // for stringify JSON
#include "tMSM_def.hpp"

/* market simulation matching */

namespace MSM
{
	// the json string 
	class tOrdReqMsg
	{
	public:
		tOrdReqMsg();
		~tOrdReqMsg();

		tOrdReqMsg& mOrderID(const mdIDT& id);
		tOrdReqMsg& mMatchID(const mdIDT& id);
		tOrdReqMsg& mSockCode(const mdStockCodeType& sc);
		tOrdReqMsg& mPrice(const mdPriceT& price);
		tOrdReqMsg& mVolum(const mdVolumT& volume);
		tOrdReqMsg& mSide(const tOrderType& ot);

		std::string mGetDataStr();	
		//int mGetDataLength(void);		 
	
	private:
		rapidjson::Document doc;
		rapidjson::StringBuffer buffer;

	};
}

