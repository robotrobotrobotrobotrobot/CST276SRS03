// GOF composite Pattern
#pragma once
#include "component.h"

class Composite : public Component
{
private:
	std::vector<Component*> children_;

public:
	void Operation() override;
	void Add(Component* component);// override;
	void Remove(Component* component);// override;
	void GetChild(int child) const;// override;
};

void Composite::Operation()
{
	for (auto g : children_)
	{
		g->Operation();
	}
}

void Composite::Add(Component* component)
{
	children_.emplace_back(component);
}

void Composite::Remove(Component* component)
{
	children_.erase(std::remove(children_.begin(), children_.end(), component), children_.end());
}

void Composite::GetChild(int child) const
{
	return children_.at(child)->Operation();
}