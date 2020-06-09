#include "Prototype.h"



Prototype::Prototype()
	:data(new int[100])
{

}


Prototype::~Prototype()
{
}
int * Prototype::get()
{
	return data;
}