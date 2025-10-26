#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;


int main() 
{
    srand(time(NULL)); 
    vector <double> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(rand()%101);
    }
    vector<double> inch(v1.size());
    transform(v1.begin(),v1.end(),inch.begin(), [](double x){return x/2.54;});

    for(int i=0;i<v1.size();i++)
    {
        cout<< v1[i]<< "cm ="<<inch[i]<<" inch"<<endl;
    }
}