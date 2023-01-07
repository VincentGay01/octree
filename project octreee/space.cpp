#include <space.h>

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
                if(listpoint.size()!=0)
                {
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
    for(auto it = listpointCoin.rbegin(); it != listpointCoin.rend(); ++it)
    {
        vector<point> list4space;
         string name;
        list4space.push_back(it);

        for(auto it2 = listpointCoin.rbegin(); it2 != listpointCoin.rend(); ++it2)
        {
            if(it.getDistance(it2)==distmin/2||it.getDistance(it2)==2*(distmin*distmin))
            {
                list4space.push_back(it2);
                name+="/"+it2.getname();
            }
        }
            listspace.push_back(space(list4space,name));
    }
    this->listSubspace=listspace;
}


vector<space> getSubSpace()
{
    return this->listSubspace;
}
void setSubSpace(vector<space> listSubspace )
{
    this->listSubspace= listSubspace;
}

