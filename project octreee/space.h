#include <point.h>
#include <point.cpp>
#include <iostream>
#include <vector>
using namespace std;
class space
{
private:
    string spacename;
    vector<point> listPointCoin;
     vector<space> listSubspace;
public:
    space(vector<point> listpoint,string spacename);
    vector<point> getPointCoin();
    String getspacename();
    void subdivide();
    ~space();
};
