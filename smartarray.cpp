#include <iostream>
#include <random>
#include <assert.h>
using namespace std;

class SmartArray
{
    int *arr;
    size_t s;
    public:
    size_t size;
    SmartArray(size_t size): size(size){ //constructor
        arr=new int[size];
        for(size_t i=0;i<size;i++)
        {
            arr[i]=rand()%100;
        }
        cout<<"Constructor"<<endl;

    }
    SmartArray(const SmartArray &ss) : size(ss.size) //copying constructor
    {
        arr=new int[size];
        for(size_t i=0;i<size;i++)
        {
            arr[i]=ss.arr[i];
        }
        cout<<"Copying constructor"<<endl;
    }
    ~SmartArray() //destructor
    {
        delete[] arr;
        cout<<"Array removed"<<endl;
    }
    int& at(size_t ind) //checking what is on the index 
    {
        assert(ind<size);
        return arr[ind];
    }
    void setIndex(size_t ind, int val) //setting element of an index
    {
        assert(ind<size);
        arr[ind]=val;
    }
    int MaxVal() //maximum value 
    {
        int max=arr[0];
        for(size_t i=0;i<size;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            
        }
        return max;
        
    }
    void print() const //printing
    {
        for(size_t i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    SmartArray arr1(16);
    arr1.setIndex(6,16);
    arr1.print();

    int max=arr1.MaxVal();
    cout<<"Max: "<<max<<endl;
     //int at=arr1.at(17); //assert error test 
    //cout<<at<<endl;
    SmartArray arr2=arr1;
    arr2.print();

}