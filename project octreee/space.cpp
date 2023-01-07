#include <space.h>
#include <point.h>
#include <iostream>
#include <vector>
//changer en vecteur pour corentin
space::space(vector<point> listpoint,string spacename)
{
    this->spacename=spacename;
    this->listPointCoin=listpoint;
}

vector<point> space::getPointCoin()
{
 return this->listPointCoin;
}

String space::getspacename()
{
    return this->spacename;
}

void space::subdivide()
{

    vector<point> listpoint;
   
    vector<point> listspace;
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
                if(listpoint.size()!=0){
                    for(auto it = listpoint.rbegin(); it != listpoint.rend(); ++it)
                    {
                        if(ir.getMiddle(this->listPointCoin[i]).getDistance(it))
                        {
                            listpoint.pushback(ir.getMiddle(this->listPointCoin[i]));
                        }
                    }
                }
                else
                {
                    listpoint.pushback(ir.getMiddle(this->listPointCoin[i]));
                }
            }
        }
    }

     vector<point> list4space;
     string name;
    for(auto it = listpoint.rbegin(); it != listpoint.rend(); ++it)
    {
        list4space.push_back(it);
        for(int i=;i<listpoint.size();i++)
        {
            if(it.getDistance(listpoint[i])==distmin/2||it.getDistance(listpoint[i])==2*(distmin*distmin))
            {
                list4space.push_back(i);
            }
        }
        if(listspace.size()==0)
        {   

            listspace.push_back(space(list4space,))
        }
    }
    
} 