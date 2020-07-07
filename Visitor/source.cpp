// ConsoleApplication2.cpp : Defines the entry point for the console application.
//


#include"EO.h"
#include"TO.h"
#include"Businss.h"

int main()
{
	Businss *businss = new Businss;
	CEO *ceo = new CEO;
	CTO *cto = new CTO;

	businss->show(ceo);

	businss->show(cto);
    return 0;
}

