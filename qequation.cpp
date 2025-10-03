#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout<<"program to count zeros of quadratic equation"<<endl;
    cout<<"instert a index of equation: "<<endl;
    cin>>a;
    cout<<"instert b index of equation: "<<endl;
    cin>>b;
    cout<<"instert c index of equation: "<<endl;
    cin>>c;
    if(a==1)
    {
        cout<<"Equation: x^2+"<<b<<"*x+"<<c<<endl; 
    }
    else{
        cout<<"Equation: "<<a<<"*x^2+"<<b<<"*x+"<<c<<endl;
    }
    
    double delta=b*b-4*a*c;
    if(delta<0)
    {
        cout<<"Equation has no zero points: "<<endl;
    }
    else if(delta==0)
    {
        double x0=(-b-sqrt(delta))/(2*a);
        cout<<"Equation is equal zero for x= "<<x0<<endl;
    }
    else
    {
        double x1=(-b-sqrt(delta))/(2*a);
        double x2=(-b+sqrt(delta))/(2*a);
        cout<<"Equation is equal zero for x1= "<<x1<<" and x2= "<<x2<<endl;
    }

    return 0;



}