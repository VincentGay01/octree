#include <space.h>
#include <iostream>
#include <list>

space::space(point n1,point n2, point n3 ,point n4)
{
    list<point> list;
    list.push_back(n1);
    list.push_back(n2);
    list.push_back(n3);
    list.push_back(n4);
    this->listPointCoin=list;
}

list<point> space::getPointCoin()
{
 return this->listPointCoin;
}

void space::subdivide()
{
    

} 