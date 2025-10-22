#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cout<<"Insert a number n: "<<endl;
    cin>>n;
    if(n<2)
    {
        cout<<"Your number should be bigger than 2"<<endl;
    }
    else
    {
        int top=1;
        for(int i=1;i<n;i++)
        {
            k=n%i;
            if(k==0)
            {
                top=i;
            }
        }
        cout<<"Biggest num you can divide "<<n<<" is: "<<top<<endl;
    }
}