#include <iostream>
#include <vector>
using namespace std;

vector <double> equation(double a, double b,double c)
{
    vector <double> solutions;
    double delta=b*b-4*a*c;
    try
    {
        {
            if(delta<0) throw "Equation has no solutions";
        }
    }
    catch(const char* ex)
    {
        cerr<<ex<<endl;
    }
    catch(int ex) {}
    double x1=(-b-sqrt(delta))/(2*a);
    double x2=(-b+sqrt(delta))/(2*a);
    solutions.push_back(x1);
    solutions.push_back(x2);
    return solutions;


}
int main()
{
    vector<double> s1=equation(1,5,6);
    for(int i=0;i<s1.size();i++)
    {
        cout<<s1[i]<<endl;
    }
    vector <double> s2=equation(1,4,6);
    for(int i=0;i<s2.size();i++)
    {
        cout<<s2[i]<<endl;
    }


}