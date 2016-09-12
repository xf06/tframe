#include "tOrdReqMsg.h"
#include <iostream>
using namespace MSM;

tOrdReqMsg::tOrdReqMsg()
{
	this->doc.Parse<0>("{}");
}

tOrdReqMsg::~tOrdReqMsg()
{
	
}

// oid
tOrdReqMsg& tOrdReqMsg::mOrderID(const mdIDT& id)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<mdIDT>("oid", id, aloc);
	return *this;
}
// mid
tOrdReqMsg& tOrdReqMsg::mMatchID(const mdIDT& id)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<mdIDT>("mid", id, aloc);
	return *this;
}
// stock code
tOrdReqMsg& tOrdReqMsg::mSockCode(const mdStockCodeType& sc)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<mdStockCodeType>("scode", sc, aloc);
	return *this;
}
// price
tOrdReqMsg& tOrdReqMsg::mPrice(const mdPriceT& price)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<mdPriceT>("price", price, aloc);
	return *this;
}
// volume
tOrdReqMsg& tOrdReqMsg::mVolum(const mdVolumT& volume)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<mdVolumT>("volum", volume, aloc);
	return *this;
}
// side
tOrdReqMsg& tOrdReqMsg::mSide(const tOrderType& ot)
{
	rapidjson::Document::AllocatorType& aloc = this->doc.GetAllocator();
	this->doc.AddMember<tOrderType>("side", ot, aloc);
	return *this;
}

std::string tOrdReqMsg::mGetDataStr()
{
	// optimise this later
	//rapidjson::StringBuffer buffer;
	rapidjson::Writer<rapidjson::StringBuffer> writer(this->buffer);
	this->doc.Accept(writer);
	return 	buffer.GetString();
}




