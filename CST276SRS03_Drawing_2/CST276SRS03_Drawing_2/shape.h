// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using std::string;

class Shape
{
public:
	virtual void Operation() = 0;
	virtual string ParamsToString() = 0;
	virtual ~Shape() = 0;
};

inline Shape::~Shape() {}