// GOF Composite Pattern
#pragma once
#include "component.h"
class Leaf : public Component
{
public:
	void Operation() override;
};

void Leaf::Operation()
{
	std::cout << "Leaf Operation" << std::endl;
}
