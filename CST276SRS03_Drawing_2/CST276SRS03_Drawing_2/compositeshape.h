// GOF composite Pattern
// GOF Factory Pattern
#pragma once
#include "shape.h"

class CompositeShape : public Shape
{
private:
	std::vector<Shape*> children_;

public:
	void Add(Shape* component);// override;
	void Remove(Shape* component);// override;
	void GetChild(int child) const;// override;
	string ParamsToString()override;
	void Operation() override;
};

void CompositeShape::Operation()
{
	for (auto g : children_)
	{
		g->Operation();
	}
}

void CompositeShape::Add(Shape* component)
{
	children_.emplace_back(component);
}

void CompositeShape::Remove(Shape* component)
{
	children_.erase(std::remove(children_.begin(), children_.end(), component), children_.end());
}

void CompositeShape::GetChild(int child) const
{
	return children_.at(child)->Operation();
}

inline string CompositeShape::ParamsToString()
{
	string str = "";
	for (auto g : children_)
	{
		str += (g->ParamsToString());
	}
	return str;
}
