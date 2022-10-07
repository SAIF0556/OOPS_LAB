//conversion from meter to centimeter and vice versa
#include<iostream>
using namespace std;

class Meter{
    private:
        float length;
    public:
        Meter(){
            length=0.0;
        }
    //conversion from basic data item to user defined type
    //InitLength is in centimetere unit
    Meter (float InitLength){
        length=InitLength/100;//centimeter to meter
    }
    //conversion from user defined to basic data item(meter to centimeter)
    operator float(){
        float lengthCms;
        lengthCms=length*100;
        return (lengthCms);
    }
    void readLength(){
        cout<<"\nEnter the length in meter ";
        cin>>length;
    }

    void showLength(){
        cout<<"Length (int meter) "<<length<<endl;
    }
};

int main(){
    //basic to user defined data conversion
    Meter meter1;
    float length1;
    cout<<"Enter the length in cm ";
    cin>>length1;
    meter1=length1;//converts basic to user defined --uses constructor 1
    meter1.showLength();

    //user defined to basic conversion
    Meter meter2;
    float length2;
    meter2.readLength();
    length2=meter2;
    cout<<"Length (in cms) "<<length2;

    return 0;

}