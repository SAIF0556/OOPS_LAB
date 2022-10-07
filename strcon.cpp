//conversion between basic string (char*) and class string
#include<iostream>
#include<string.h>
using namespace std;
const int BUFF_SIZE=50;

class String{
    private:
        char str[BUFF_SIZE];
    public:
        String(){
            strcpy(str," ");
        }
        String(char* my_str){
            strcpy(str,my_str);
        }
        void echo()//display string
        {
            cout<<str;
        }
        //conversion function to convert string object item to char* item
        operator char* (){//invoked if destination data-item is char* type
            return str;
        }
};

int main(){
    //conversion from string of type char* to string object
    char msg[20]="OOPs the great\n";
    String str1; // uses contructor 1
    str1=msg;//uses the function 'string (char *my_str)'
    cout<<"str1 = ";
    str1.echo();

    //conversion from object to char* type
    char *receive;
    String str2="It is nice to learn\n";
    receive=str2;//uses the function 'operator char *()'
    cout<<"str2 = \n";
    cout<<receive;
    return 0;

}