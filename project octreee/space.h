#include <point.h>
#include <point.cpp>
#include <iostream>
#include <vector>
using namespace std;
class space
{
     typedef struct {
                //coordonnées x, y et z du sommet
                GLfloat x;
                GLfloat y;
                GLfloat z;
                GLfloat r;
                GLfloat g;
                GLfloat b;
        } Sommet ;
private:
    string spacename;
    vector<point> listPointCoin;
     vector<space> listSubspace;
    vector<Sommet> listsommet;


public:
       
    space(vector<point> listpoint,string spacename);
    vector<point> getPointCoin();
    vector<space> getSubSpace();
    String getspacename();
    void setSubSpace(vector<space> listSubspace )
    void subdivide();
    ~space();
};
