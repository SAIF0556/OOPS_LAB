#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Swap{
    private:
    public:
        void swap(T &a,T&b){
            T temp=a;
            a=b;
            b=temp;
        }
};

int main(){
    system("cls");
    Swap<int> swapInt;
    int a=2;
    int b=3;
    cout<<"Ints before swap : "<<a<<" "<<b<<endl;
    swapInt.swap(a,b);
    cout<<"Ints after swap : "<<a<<" "<<b<<endl;

    Swap<float> swapFloats;
    float c=0.5;
    float d=1.5;
    cout<<"Floats before swap is : "<<c<< " "<<d<<endl;
    swapFloats.swap(c,d);
    cout<<"Floats after swap is : "<<c<<" "<<d<<endl;

    return 0;
}