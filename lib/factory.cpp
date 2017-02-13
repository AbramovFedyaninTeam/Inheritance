#include <iostream>
#include "factory.h"

using namespace std;

Factory::Factory (int countElements)
{
    count_elements = countElements;
    id = rand();
    for (int i = 0; i < countElements; i++) 
    {
        cout << "Enter x" << i + 1 << endl;    cin >> points[i].x;
        cout << "Enter y" << i + 1 << endl;    cin >> points[i].y;
    }
    area = getArea(points);
}


float Factory::getArea(Point* points)
{
    float sum = 0;
    for (int i = 0; i < count_elements; i++) {
        sum = sum + points[i % count_elements].x * points[(i + 1) % count_elements].y - 
                    points[i % count_elements].y * points[(i + 1) % count_elements].x;
    }

    return sum / 2;
}

void Factory::printPoints(Point* points)
{
    for (int i = 0; i < count_elements; i++) 
    {
        cout << "x[" << i + 1 << "] = " << points[i].x << ";\t";
        cout << "y[" << i + 1 << "] = " << points[i].y << endl;
    }
}

void Factory::move(Point* points, Point vectorSdviga)
{
    for (int i = 0; i < count_elements; i++) 
    {
        points[i].x = points[i].x + vectorSdviga.x;
        points[i].y = points[i].y + vectorSdviga.y;
    }            
}