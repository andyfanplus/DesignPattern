#include "Proxy.h"

#include"RealSubject.h"

Proxy::Proxy()
	:rs(nullptr)
{
}


Proxy::~Proxy()
{
}


void Proxy::request()
{
	if (!rs)
	{
		rs = new RealSubject;
		
	}
	rs->request();

}
