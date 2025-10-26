#include <iostream>
#include <queue> 
#include <string>
#include <algorithm>
using namespace std;

void viewqueue(queue <string> q)
{
    queue <string> temp= q;
    while(!temp.empty())
    {
        cout<<temp.front()<<endl;
        temp.pop();
    }
}
int main()
{
    queue <string> tasks;
    string task;
    do
    { 
        cout<<"Enter task"<<endl;
        getline(cin,task);
        if(task!="end")
        {
            tasks.push(task); //tasks adding
        }
        

    } while (task!="end");
    tasks.pop();
    cout<<"Current tasks"<<endl;
    viewqueue(tasks);
    do 
    {
        cout<<"Doing task"<<endl;
        cout<<tasks.front()<<endl;
        tasks.pop();
    }while(!tasks.empty()); 
}