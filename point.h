#pragma once
#include "pch.h"
#include "shape.h"
#include <iostream>
#include <string>
#include <cmath>
#include "line.h"
#include "polygon.h"
#include "point.h"
#include "Triangel.h"

class Point : public Shape
{


	double *xCord = nullptr;
	double *yCord = nullptr;
	int nrOfPoints = 0;


public:
	double *getXcord() override;
	double *getYcord() override;
	int getPoints() override;


	Point(double *xCord, double *yCord, int nrOfPoints);
	string getType() override;
	
	ShapePosition position() override;
	double distance(Shape &sObject) override;
	Point& operator=(const Point& point);

};