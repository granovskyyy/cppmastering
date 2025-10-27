#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    vector <string> result;
    queue <string> q;
    q.push("1");
    string front=" ";
    int n;
    cout<<"Enter a number you would like to convert to binary"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        front=q.front();
        q.pop();
        result.push_back(front);
        q.push(front+"0");
        q.push(front+"1");
        cout<<result[i]<<endl; //writes n integer numbers in binary 
    }


}