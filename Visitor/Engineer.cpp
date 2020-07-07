#include "Engineer.h"

#include"Visitor.h"

Engineer::Engineer()
{
}


Engineer::~Engineer()
{
}
void Engineer::accept(Visitor* visitor)
{
	visitor->visit(this);
}