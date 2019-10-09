#include <iostream>
#include <math.h>
#ifndef POINT2D_H
#define POINT2D_H

using namespace std;

class Point2d{

    private:

    float m_x;
    float m_y;

    public:

    Point2d();
    Point2d(float x, float y);

    void setM_x(int x);
    void setM_y(int y);

    float getM_x();
    float getM_y();
    
    void print();
};

#endif