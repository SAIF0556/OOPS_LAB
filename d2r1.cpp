//Degree to radian ,conversion Routine in source class 
#include<iostream>
const float PI=3.1415;
using namespace std;

class Radian{
    private:
        float rad;
    public:
        Radian(){
            rad=0.0;
        }
        Radian(float InitRad){
            rad=InitRad;
        }

        float GetRad(){
            return rad;
        }

        void Output(){
            cout<<"Radian : "<<GetRad();
        }
};

class Degree{
    private:
        float deg;
    public:
        Degree(){
            deg=0.0;
        }

        //radian =degree ; conversion routine at the source
        //This function will be called if we try to assign 
        //object degree to object of type radian

        operator Radian(){
            return (deg* PI/180.0);
        }

        void Input(){
            cout<<"Enter Degree\n";
            cin>>deg;
        }
};

int main(){
    Degree d1;
    Radian r1;
    d1.Input();
    r1=d1;
    r1.Output();
    return 0;
}