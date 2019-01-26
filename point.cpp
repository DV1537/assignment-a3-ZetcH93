#include "pch.h"
#include "point.h"
#include <iostream>
#include <string>
#include <cmath>

Point::Point(double *xCord, double *yCord, int nrOfPoints)
{
	this->xCord = new double[nrOfPoints];
	this->yCord = new double[nrOfPoints];
	this->nrOfPoints = nrOfPoints;

	for (int i = 0; i < nrOfPoints; i++)
	{
		this->xCord[i] = xCord[i];
		this->yCord[i] = yCord[i];
	}

}

string Point::getType()
{
	string returnType = "point";
	return returnType;
}

ShapePosition Point::position()
{
	ShapePosition pointPos(*xCord, *yCord);
	return pointPos;
}

double Point::distance(Shape &sObject)
{
	double xDistance = position().x - sObject.position().x;
	double yDistance = position().y - sObject.position().y;

	double distance = sqrt(pow(xDistance, 2.0) + pow(yDistance, 2.0));
	return distance;
}