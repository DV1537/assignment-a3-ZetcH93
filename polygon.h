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



class Polygon : public Shape
{


	double *xCord = nullptr;
	double *yCord = nullptr;
	int nrOfPoints = 0;


public:

	double *getXcord() override;
	double *getYcord() override;
	int getPoints() override;

	Polygon(double *xCord, double *yCord, int nrOfPoints);
	string getType() override;
	double area() override;
	double circumference() override;
	ShapePosition position() override;
	bool isConvex() override;
	double distance(Shape &sObject) override;
	Polygon& operator=(const Polygon& polygon);
	

};