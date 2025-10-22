#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string bin = " ";
    int num;
    cout<<"Enter a number you want to convert to binary "<<endl;

    cin>>num;
    if(num==0)
    {
        cout<<0;
    }
    while(num>0)
    {
        int bit=num &1;
        bin.push_back('0'+bit);
        num>>=1;
    }
    reverse(bin.begin(),bin.end());
    cout<<"Your num after binary conversion is equal "<<bin<<endl;

}