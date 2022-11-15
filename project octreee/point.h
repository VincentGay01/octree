class point
{
private:
    /* data */
    float x ;
    float y ;
    float z ;

public:
    point(float x ,float y,float z);
  float getCoordX();
  float getCoordY();
  float getCoordZ();
  point getMidlle(point prem,point sec);
  float getDistance(point p2);
    ~point();
};

