#include<iostream>
using namespace std;
const int ARRAY_SIZE =10;
class vector{
    private:
        int *array ; //array is dynamically allocatable data member
    public:
        //overloading of new operator
        void * operator new(size_t size){
            vector * my_vector;
            my_vector=::new vector;//it refers to global new ,otherwise leads to recursive call of vector :: new
            my_vector->array=new int [ARRAY_SIZE];//calls :: new
            return my_vector;
        }
        //overloading of delete operator
        void operator delete (void* vec){
            vector *my_vect;
            my_vect=(vector *) vec;
            delete (int * ) my_vect->array;//calls :: delete
            :: delete vec;
            //it refers to global delete,otherwise leads to recursive call of vector :: delete
        }
        void read();
        int sum();
};

void vector :: read(){
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout<<"vector ["<<i<<"] = ?";
        cin>>array[i];
    }    
}

int vector :: sum(){
    int sum1=0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum1+=array[i];
    }
    return sum1;
}

int main(){
    vector *my_vector=new vector;
    cout<<"Enter vector data...\n";
    my_vector->read();
    cout<<"sum of vector = "<<my_vector->sum()<<endl;
    delete my_vector;
    return 0;
}