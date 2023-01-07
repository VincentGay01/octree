#include <cmath>
#include <iostream>
class point
{
private:
    /* data */
    string np;
    float x ;
    float y ;
    float z ;

public:
    point(float x ,float y,float z);
  float getCoordX();
  float getCoordY();
  float getCoordZ();
  string getname();
  point getMidlle(point prem);
  float getDistance(point p2);
    ~point();
};

