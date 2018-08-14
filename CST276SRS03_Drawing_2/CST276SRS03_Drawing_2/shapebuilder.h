//GoF Factory pattern
#pragma once
#include <stdexcept>
#include <iostream>
#include <memory>
#include "shape.h"
#include "line.h"
#include "circle.h"
#include "rectangle.h"
#include "polygon.h"
#include "compositeshape.h"
using std::unique_ptr;
using std::make_unique;
using std::cout;
class ShapeFactory {
public:
	enum ShapeType {
		line,
		circle,
		rectangle,
		polygon,
		compositeshape
	};

	static unique_ptr<Shape> createShape(ShapeType shapeType) {
		switch (shapeType) {
		case line: return make_unique<Line>();
		case circle:      return make_unique<Circle>();
		case rectangle:    return make_unique<Rectangle>();
		case polygon:    return make_unique<Polygon>();
		case compositeshape:    return make_unique<CompositeShape>();

		}
		throw 0;
	}
};

void ShapeBuilerFunc(ShapeFactory::ShapeType shapetype)
{
	unique_ptr<Shape> shape = ShapeFactory::createShape(shapetype);
	shape->ParamsToString();
}
