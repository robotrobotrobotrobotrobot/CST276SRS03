// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include "shape.h"

class Polygon : public Shape
{// regular polygon
private:
	std::vector<Shape*> children_;
	int centerX;
	int centerY;
	int vetrexX;
	int VertexY;
	int numSides; // interior angle total = (1-n/2)*180 degrees
public:
	string ParamsToString()override;
	void Operation() override;

};

void Polygon::Operation()
{
}

inline string Polygon::ParamsToString()
{
	string str = "";
	for (auto g : children_)
	{
		str += (g->ParamsToString());
	}
	str += centerX;
	str += centerY;
	str += vetrexX;
	str += VertexY;
	return  str;
}
