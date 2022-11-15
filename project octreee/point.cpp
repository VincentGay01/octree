#include <point.h>
#include <cmath>

 point::point(float x,float y,float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

float point::getCoordX()
{
    return this->x;
}

float point::getCoordY()
{
    return this->y;
}

float point::getCoordZ()
{
    return this->z;
}

point point::getMidlle(point prem,point sec)
{
    float middleX = (prem.getCoordX()+sec.getCoordX())/2;
    float middleY=(prem.getCoordY()+sec.getCoordY())/2;
    float middleZ=(prem.getCoordZ()+sec.getCoordZ())/2;
    return point(middleX,middleY,middleZ);
}

float point::getDistance(point p2)
{
    return sqrt((this->x+p2.getCoordX()));
}