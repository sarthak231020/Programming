#include<iostream>
using namespace std; 

class shape
{
    public:
        int No_of_sides;
        int sides[No_of_sides];
        int angles[No_of_sides];
    
    shape(int No_of_sides)
    {
        for(int i=0;i<No_of_sides;i++)
        {
            cin>>side[i];
        }
        for(int i=0;i<No_of_sides;i++){
            cin>>angles[i];
        }
        
    }
    
}

int main()
{
    shape Obj(3);
    
}