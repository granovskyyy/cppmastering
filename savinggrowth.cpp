#include <iostream>
using namespace std;

int main()
{
    double cash;
    double rate;
    double period;
    cout<<"insert amount of cash you want to save: "<<endl;
    cin>>cash;
    cout<<"insert rate of your saving: "<<endl;
    cin>>rate;
    cout<<"insert number of periods you want to save in: "<<endl;
    cin>>period;
    for(int i=0;i<period;i++)
    {
        cash=cash*(1.0+rate/100.0);
    };
    cout<<"your cash after saving: "<<cash<<endl;
}