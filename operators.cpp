#include "pch.h"
#include "operators.h"


Polygon operator+(Polygon& ls, Polygon& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Polygon& ls, Triangel& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Triangel& ls, Polygon& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}


Polygon operator+(Polygon& ls, Line& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Line& ls, Polygon& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Polygon& ls, Point& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Point& ls, Polygon& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Triangel &ls, Triangel& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Triangel& ls, Line& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Line& ls, Triangel& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Triangel& ls, Point& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Point& ls, Triangel& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}

Polygon operator+(Line& ls, Line& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Polygon newPolygon(newXCord, newYCord, newVerticesAmount);

	return newPolygon;
}


Triangel operator+(Point& ls, Line& rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Triangel newTriangel(newXCord, newYCord, newVerticesAmount);

	return newTriangel;
}


Triangel operator+(Line &ls, Point &rs)
{
	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Triangel newTriangel(newXCord, newYCord, newVerticesAmount);

	return newTriangel;
}


Line operator+(Point &ls, Point &rs)
{

	int i = 0;
	int newVerticesAmount = ls.getPoints() + rs.getPoints();

	double *newXCord = new double[newVerticesAmount];
	double *newYCord = new double[newVerticesAmount];

	for (int index = 0; index < ls.getPoints(); index++)
	{
		newXCord[index] = ls.getXcord()[index];
		newYCord[index] = ls.getYcord()[index];
	}

	for (int index = ls.getPoints(); index < newVerticesAmount; index++)
	{
		newXCord[index] = rs.getXcord()[i];
		newYCord[index] = rs.getYcord()[i];
		i++;
	}


	Line newLine(newXCord, newYCord, newVerticesAmount);

	return newLine;
}