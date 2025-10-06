#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cout<<"Insert two integer numbers: "<<endl;
    cin>>n;
    cin>>m;
    if(m>n)
    {
        int comp=m/n;
        cout<<"Multipies of: "<< n <<"smaller than "<<m<<endl;
        for(int i=1;i<=comp;i++)
        {
            cout<<n*i<<endl;
        }
    }
    else
    {
        int comp=n/m;
        cout<<"Multipies of: "<<m<<" smaller than "<<n<<endl;
        for (int i=1;i<=comp;i++)
        {
            cout<<m*i<<endl;
        }
    }
}