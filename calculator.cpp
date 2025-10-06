#include <iostream>
using namespace std;

int main()
{
    char x;
    double l1;
    double l2;
    double result;
 
    do 
    {
        cout<<"enter operation sign (q is for quit): "<<endl;
        cin>>x;
        if(x=='q')
        {
            cout<<"Shutting down..."<<endl;
            break;
        }
        cout<<"enter two numbers: "<<endl;
        cin>>l1;
        cin>>l2;
        switch(x)
        {
            case '+':
                result=l1+l2;
                break;
            case '-':
                result=l1-l2;
                break;
            case '*':
                result=l1*l2;
                break;
            case '/':
                if(l2==0)
                {
                    cout<<"ERROR(DIVISION BY 0)"<<endl;
                    continue;
                }
                else
                {
                    result=l1/l2;
                    break;
                }
                default:
                    cout<<"wrong sign "<<endl;
                    continue;
        }
        cout<<"result: "<<result<<endl;
    }
    while(x!='q');

}