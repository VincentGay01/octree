#include <point.h>
#include <iostream>
#include <list>
using namespace std;
class space
{
private:
    list<point> listPointCoin;
     list<space> listSubspace;
public:
    space(point n1,point n2, point n3 ,point n4);
    list<point> getPointCoin();
    void subdivide();
    ~space();
};
