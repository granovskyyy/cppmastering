#include <iostream>
#include <string>
using namespace std;
void dna_check(string s, string t)
{
    if(s.length()!=t.length())
    {
        cout<<"DNA codes are of different lengths"<<endl;
        return;
    }
    string x2=s+s;
    if(x2.find(t)!=string::npos)
    {
        cout<<"DNA codes are complementary"<<endl;
    }
    else
    {
        cout<<"DNA codes are not complementary"<<endl;
    }
    

}
 

int main()
{
    string s;
    cout<<"Enter DNA code "<<endl;
    getline(cin,s);
    string t;   
    cout<<"Enter DNA code to compare "<<endl;
    getline(cin,t);
    dna_check(s,t);

}