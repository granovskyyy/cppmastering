#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,string> ContactList;
    string contact;
    string number;
    do 
    {
        cout<<"Enter contact"<<endl;
        getline(cin,contact);
        if(contact=="exit")
        {
            break;
        }
        
        if(ContactList.count(contact)==0)
        {
            cout<<"Enter phone number"<<endl;
            getline(cin,number);
            ContactList[contact]=number;
            cout<<number<<endl;
        }
        else
        {
            cout<<number<<endl;
        }
     

    }
    while(true);

}