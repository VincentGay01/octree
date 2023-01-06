#include <point.h>
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
    space(point n1,point n2, point n3 ,point n4,point n5,point n6, point n7 ,point n8,string spacename);
    vector<point> getPointCoin();
    void subdivide();
    ~space();
};
