#include <space.h>
#include <point.h>
#include <iostream>
#include <vector>
//changer en vecteur pour corentin
space::space(point n1,point n2, point n3 ,point n4,point n5,point n6, point n7 ,point n8,string spacename)
{
    this->spacename=spacename;
    vector<point> list;
    list.push_back(n1);
    list.push_back(n2);
    list.push_back(n3);
    list.push_back(n4);
    list.push_back(n5);
    list.push_back(n6);
    list.push_back(n7);
    list.push_back(n8);
    this->listPointCoin=list;
}

vector<point> space::getPointCoin()
{
 return this->listPointCoin;
}

void space::subdivide()
{

    vector<point> listpoint;
    
    int distmin=2147483647;
    for(int i=1;i<=this->listPointCoin.size();i++)
    {    
       if( this->list[0].getDistance(this->listPointCoin[i])<distmin)
       {
        distmin=this->list[0].getDistance(this->listPointCoin[i]);
       }
    }
    
    for(auto ir = this->listPointCoin.rbegin(); ir != this->listPointCoin.rend(); ++ir)
    {
        for(int i=;i<this->listPointCoin.size();i++)
        { 
            if(ir.getDistance(this->listPointCoin[i])!=0)
            {
                for(auto it = listpoint.rbegin(); it != listpoint.rend(); ++it)
                {
                    if(ir.getMiddle(this->listPointCoin[i]).getDistance(it))
                    {
                        listpoint.pushback(ir.getMiddle(this->listPointCoin[i]));
                    }
                }

            }
        }
    }
    
    
} 