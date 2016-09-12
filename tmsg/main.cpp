#include <iostream>
#include "tOrdReqMsg.h"

int main()
{
	MSM::tOrdReqMsg ord;
	ord.mOrderID(123).mSide(MSM::tBuy).mSockCode(333).mPrice(4444).mVolum(5555);
	std::cout<<ord.mGetDataStr()<<std::endl;
	
	return 0;
}

