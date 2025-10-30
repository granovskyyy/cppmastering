#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack <string> mystack;
    string element;
    do
    {
        cout<<"Enter some stuff"<<endl;
        getline(cin,element);
        mystack.push(element);
       
    }
    while(element!="end");
    while(!mystack.empty())
    {
        cout<<mystack.top()<<endl;
        mystack.pop();
    }
    cout<<endl;
   
}