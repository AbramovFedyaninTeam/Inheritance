// One-dimensional array.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <ctime>

#include "lib/point.h"
#include "lib/factory.cpp"
#include "lib/Triangle.h"
#include "lib/Tetragon.h"

using namespace std;

int main()
{
    //Ввод координат
    Triangle* treugolnik = new Triangle();
    Tetragon* chetyrehgolnik = new Tetragon();
    Point vectorSdviga;

    treugolnik->printPoints(treugolnik->points);
    cout << "Tr->area = " << treugolnik->area << endl;
    chetyrehgolnik->printPoints(chetyrehgolnik->points);
    cout << "Ch->area = " << chetyrehgolnik->area << endl;

    //Сдвиг
    cout << "Enter xSdvig" << endl;    cin >> vectorSdviga.x;
    cout << "Enter ySdvig" << endl;    cin >> vectorSdviga.y;
    treugolnik->move(treugolnik->points, vectorSdviga);
    chetyrehgolnik->move(chetyrehgolnik->points, vectorSdviga);
    treugolnik->printPoints(treugolnik->points);
    cout << "Tr->area = " << treugolnik->area << endl;
    chetyrehgolnik->printPoints(chetyrehgolnik->points);
    cout << "Ch->area = " << chetyrehgolnik->area << endl;
    
    return 0;
}
