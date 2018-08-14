// GOF composite Pattern
#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Component
{
public:
	virtual void Operation() = 0;
	virtual ~Component() = 0;
};

inline Component::~Component() {}