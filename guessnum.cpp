#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a=rand()%100;
    int b;
    int n=0;
    cout<<"Guess a number"<<endl;
    do
    {
       
        cout<<"Enter a number: "<<endl;
        cin>>b;
        if(b<a)
        {
            cout<<"Your number is smaller than secret number"<<endl;
            n++;
        }
        else if(b>a)
        {
            cout<<"Your number is bigger than secret number"<<endl;
            n++;
        }
        else
        {
            cout<<"YOUR NUM IS CORRECT"<<endl;
            break;
        }

    }   while (n<5);
    cout<<"Better luck next time"<<endl;
    cout<<"The secret number was: "<<a<<endl;
    
    
    
} 
    
