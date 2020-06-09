#include<iostream>

#include"Component.h"
#include"Composite.h"
#include"Leaf.h"
using namespace std;
int main()
{
	Component *root = new Composite;

	Component *child = new Composite;
	Component *leaf = new Leaf;

	root->add(child);
	root->add(leaf);
	return 0;
}