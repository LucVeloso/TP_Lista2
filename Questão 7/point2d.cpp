#include "point2d.h"
#define START 0

using namespace std;

Point2d::Point2d(){

    setM_x(START);
    setM_y(START);
}

Point2d::Point2d(float x, float y){

    setM_x(x);
    setM_y(y);
}

void Point2d::print(){

    cout << "Point2d (" << getM_x() << ", " << getM_y() << ");" << endl;
}

void Point2d::setM_x(int x){

    m_x = x;
}

void Point2d::setM_y(int y){

    m_y = y;
}

float Point2d::getM_x(){

    return m_x;
}
float Point2d::getM_y(){

    return m_y;
}