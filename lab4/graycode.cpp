#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int main()
{
    vector<string> v1;
    int n;
    cout<<"Enter amount of bits"<<endl;
    cin>>n;
    v1.push_back("0");
    v1.push_back("1");
    int i,j;
    for(i=2;i< (1<<n);i=i<<1 )
    {
        for(j=i-1;j>=0;j--)
        {
            v1.push_back(v1[j]);
        }
        for(j=0;j<i;j++)
        {
            v1[j]="0"+v1[j];
        }
        for(j=i;j<2*i;j++)
        {
            v1[j]="1"+v1[j];
        }

    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
}