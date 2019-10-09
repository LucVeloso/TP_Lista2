#include "point2d.h"

using namespace std;

Point2d::Point2d(){}

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

float Point2d::distancia(Point2d f){
    
    float x1 = getM_x();
    float y1 = getM_y();

    float x2 = f.getM_x();
    float y2 = f.getM_y();

    return sqrtf((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}