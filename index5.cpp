//index class with overloaded prefix unary operators
#include<bits/stdc++.h>
using namespace std;

class Index{
    private:
        int value;
    public:
        Index(){
            value=0;
        }
        Index(int val){
            value=val;
        }

        int GetIndex(){
            return value;
        }

        Index operator++(){
            return Index(++value);
        }
        Index operator++(int ){
            return Index(value++);
        }
};

int main(){
    Index id1(2),id2(2),id3,id4;
    cout<<"\nIndex1 : "<<id1.GetIndex();
    cout<<"\nIndex2 : "<<id2.GetIndex();
    id3=id1++;
    id4=++id2;
    cout<<"\nIndex1 : "<<id1.GetIndex();
    cout<<"\nIndex3 : "<<id3.GetIndex();
    cout<<"\nIndex2 : "<<id2.GetIndex();
    cout<<"\nIndex4 : "<<id4.GetIndex();
    cout <<endl;
    return 0;
}