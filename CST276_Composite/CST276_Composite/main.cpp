// GOF composite Pattern
#include <iostream>
#include "leaf.h"
#include "composite.h"

int main()
{
	Composite c1;
	Composite c2;

	Leaf* l1 = new Leaf;
	Leaf* l2 = new Leaf;
	Leaf* l3 = new Leaf;

	c1.Add(l1);
	c1.Add(l2);
	c1.Add(l3);

	c2.Add(l1);
	c2.Add(l2);
	c2.Add(l3);

	c1.Add(&c2);

	//c1.Operation();
	c1.Remove(&c2);
	c1.Operation();

	//c1.Remove(l1);
	//c1.GetChild(3);
}