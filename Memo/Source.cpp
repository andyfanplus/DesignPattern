#include<iostream>
#include"Actor.h"
#include"Memo.h"
using namespace std;
int main()
{
	Actor *actor = new Actor;
	actor->setname("andy");
	actor->setage(25);

	Memo *memo = new Memo(actor);

	actor->setname("jack");
	actor->setage(30);

	actor->setmemo(memo);
	return 0;
}