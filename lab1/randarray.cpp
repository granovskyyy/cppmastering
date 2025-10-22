#include <iostream>
#include <random>
#include <cmath>

using namespace std;

tuple<float,float>obliczenia(float* arr, int size)
{
    float avg;
    float sum=0.0;
    float dev;
    float sumdev=0.0;

    for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    avg=sum/size;
    for(int i=0;i<size;i++)
    {
        sumdev+=pow(arr[i]-avg,2);
    }
    dev=sqrt((sumdev)/size);
    return make_tuple(avg,dev);

}
int main()
{
    int size=16;
    float arr[size];
    random_device rd;
    uniform_real_distribution<float> dist(-1.0,1.0);
    for(int i=0;i<16;i++)
    {
        float rng=dist(rd);
        arr[i]=rng;
        cout<<arr[i]<<endl;
    }
    auto[avg,dev]=obliczenia(arr,size);
    cout<<"Avg: "<<avg<<" Deviation: "<<dev<<endl;
}