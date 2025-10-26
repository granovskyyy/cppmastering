#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//sort elements 
bool isOdd(int i){return ((i%2)==1);} //function to check if element is odd 
int main()
{
    int num;

    vector <int> v1;
    do
    {
        cout<<"Enter number"<<endl;
        cin>>num;
        v1.push_back(num);
    } while (num!=(-1));

    vector <int>::iterator it;
    it=unique(v1.begin(),v1.end());
    v1.resize(distance(v1.begin(),it)); //removing duplicates
    int k=count_if(v1.begin(),v1.end(),isOdd); //count odd numbers
    vector <int> v2;
    v2.resize(v1.size());
    transform(v1.begin(),v1.end(),v2.begin(), [](int x)->int {return -x;}); //change sign to different 
    cout<<"My vector contains "<<k<<" odd numbers"<<endl;
    sort(v1.begin(),v1.end(), [](int x, int y)-> bool { return x>y;});
    cout<<"Vector 1"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
        
    }
    cout<<"Vector 2"<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
  
}