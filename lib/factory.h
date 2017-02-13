#pragma once
#ifndef FACTORY_H
#define FACTORY_H

class Factory
{ 
    public:
        int id;
        Point points[10];//Координаты вершин
        float area;
        int count_elements;

        float getArea(Point* points);
        void printPoints(Point* points);
        void move(Point* points, Point vectorSdviga);

    protected:
        Factory (int countElements);
};
#endif