#include "drawing.h"

void Drawing::AddShape(Shape* shape)
{
}

void Drawing::removeShape(Shape* shape)
{
}

string Drawing::ToString()
{
	string str = "";
	for (auto s : shapes_)
	{
		str += s->ParamsToString();
		str += ",";
	}
	return str;
}
