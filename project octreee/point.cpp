#include <point.h>

 point::point(float x,float y,float z,string np)
{
    this->np=np;
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

string point::getname()
{
    return this->np;
}

point point::getMidlle(point prem)
{
    float middleX = (prem.getCoordX()+this->getCoordX())/2;
    float middleY=(prem.getCoordY()+this->getCoordY())/2;
    float middleZ=(prem.getCoordZ()+this->getCoordZ())/2;
    return point(middleX,middleY,middleZ,prem.getname+","+this->getname());
}

float point::getDistance(point p2)
{
    return sqrt((pow(this->x-p2.getCoordX(),2))+(pow(this->y-p2.getCoordY(),2))+(pow(this->z-p2.getCoordZ(),2)));
}