#include <iostream>
using namespace std;

class TQuadEq
{
    double a;
    double b;
    double c;
    public:
    TQuadEq(double a, double b, double c):  a(a),b(b),c(c) {}
    TQuadEq(): a(1),b(5),c(6) {}
    void setA(double p1) 
    {
        a=p1;
    }
    void setB(double p2)
    {
        b=p2;
    }
    void setC(double p3)
    {
        c=p3;
    }
    double getA() const
    {
        return a;
    }
    double getB() const 
    {
        return b;
    }
    double getC() const 
    {
        return c;
    }
    double ComputeDelta() const
    {
        return b*b-4*a*c;
    }
    int GetNumRoots(const double delta)
    {
        if(delta<0)
        {
            return 0;
        }
        else if(delta==0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    double GetRoots(double& root1, double& root2) const
    {
        double delta=ComputeDelta();
        if(delta<0)
        {
            cout<<"No real roots"<<endl;
        }
        root1=(-b-sqrt(delta))/2*a;
        root2=(-b+sqrt(delta))/2*a;
    }
};

int main()
{
    double a;
    double b;
    double c;
    cout<<"Insert a,b,c index of polynomial"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    TQuadEq poly1(a,b,c);
    double root1;
    double root2;
    poly1.GetRoots(root1,root2);
    cout<<root1<<endl;
    cout<<root2<<endl;


}