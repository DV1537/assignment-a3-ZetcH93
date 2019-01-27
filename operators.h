#pragma once
#include "pch.h"
#include "shape.h"
#include "line.h"
#include "polygon.h"
#include "point.h"
#include "Triangel.h"


Polygon operator+(Polygon& ls, Polygon& rs);
Polygon operator+(Triangel& ls, Line& rs);
Polygon operator+(Line& ls, Triangel& rs);
Polygon operator+(Triangel& ls, Point& rs);
Polygon operator+(Point& ls, Triangel& rs);
Polygon operator+(Polygon& ls, Line& rs);
Polygon operator+(Line& ls, Polygon& rs);
Polygon operator+(Polygon& ls, Point& rs);
Polygon operator+(Point& ls, Polygon& rs);
Polygon operator+(Line& ls, Line& rs);
Triangel operator+(Line& ls, Point& rs);
Triangel operator+(Point& ls, Line& rs);
Line operator+(Point& ls, Point& rs);
Polygon operator+(Polygon& ls, Triangel& rs);
Polygon operator+(Triangel& ls, Polygon& rs);
Polygon operator+(Triangel& ls, Triangel& rs);