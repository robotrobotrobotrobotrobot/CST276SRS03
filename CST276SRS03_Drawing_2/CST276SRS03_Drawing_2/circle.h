// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include "shape.h"

class Circle : public Shape
{
private:
	std::vector<Shape*> children_;
	int centerX;
	int centerY;
	int radius;
	
	
public:
	void Operation() override;
	string ParamsToString()override;
	int getCenterX();
	int getCenterY();
	int getRadius();
	void setCenterX(int x);
	void setCenterY(int y);
	void setRadius(int r);
};


inline int Circle::getCenterX()
{
	return centerX;
}

inline int Circle::getCenterY()
{
	return centerY;
}

inline int Circle::getRadius()
{
	return  radius;
}

inline void Circle::setCenterX(int x)
{
	centerX = x;
}

inline void Circle::setCenterY(int y)
{
	centerY = y;
}

inline void Circle::setRadius(int r)
{
	radius = r;
}

void Circle::Operation()
{
}

inline string Circle::ParamsToString()
{
	string str = "";
	for (auto g : children_)
	{
		str += (g->ParamsToString());
	}
	str += centerX;
	str += centerY;
	str += radius;
	return  str;
}
