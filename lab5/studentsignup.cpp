#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    string name;
    string course;
    void SaveStudent()
    {
            cout<<"Enter student name"<<endl;
            getline(cin,name);
            cout<<"Enter course name"<<endl;
            getline(cin,course);
    }
  
};


int main()
{
    map<string,vector<string>> courselist;
    string course;
    do
    {
        int op;
        Student student;
        string name;
        string course;
        cout<<"What do you want to do: "<<endl;
        cout<<"1. Save to course \n";
        cout<<"2. Remove from course \n";
        cout<<"3. Find mutual students \n";
        cout<<"4. View all students and their courses \n";
        cout<<"0. Finish\n";
        cin>>op;
        cin.ignore();
        if(op==0)
        {
            break;
        }
    
        switch(op)
        {
            case 0:
                break;
            case 1: 
            {
                student.SaveStudent();
                auto &list=courselist[student.course];
                if(find(list.begin(),list.end(),student.name)==list.end())
                {
                    list.push_back(student.name);
                    cout<<student.name<<" is saved for course "<<student.course<<endl;
                }
                else{
                    cout<<student.name<<" is already saved for this course"<<endl;
                }
                break;
            }
            case 2: 
            {
                student.SaveStudent();
                auto it=courselist.find(student.course);
                if(it!=courselist.end())
                {
                    auto &list=it->second;
                    auto pos=find(list.begin(),list.end(),student.name);
                    if(pos!=list.end())
                    {
                        list.erase(pos);
                        cout<<student.name<<"got removed from course : "<<student.course<<endl;
                    }
                    else
                    {
                        cout<<student.name<<"was not saved to course: "<<student.course<<endl;
                    }
                } 
                break;
            }
            case 3:
                {
                    string c1, c2;
                    cout<<"Enter the name of course 1 "<<endl;
                    getline(cin,c1);
                    cout<<"Enter the name of course 2 "<<endl;
                    getline(cin,c2);
                    if(courselist.find(c1)==courselist.end() || courselist.find(c2)==courselist.end())
                    {
                        cout<<"We dont have courses like this"<<endl;
                                continue;
                    }
                        vector <string> mutual;
                        auto &l1=courselist[c1];
                        auto &l2=courselist[c2];
                        sort(l1.begin(),l1.end());
                        sort(l2.begin(),l2.end());
                        set_intersection(l1.begin(),l1.end(),l2.begin(),l2.end(),back_inserter(mutual));
                        cout<<"Mutual students of course : "<<c1<<" and "<<c2<<" : ";
                        if(mutual.empty())
                        {
                            cout<<"No mutual students"<<endl;
                        }
                        else
                        {
                            for(auto &i:mutual)
                            {
                                cout<<" - "<<i<<endl;
                            }
                        }
                    cout<<endl;

                break;
            }
               
            case 4:
            {
                for(auto i:courselist) //viewing all courses 
                {
                    cout<<i.first<<" : ";
                    for(auto&k:i.second)
                    {
                        cout<<k<<" ";
                    }
                    cout<<endl;
                }
                break;
            }
             default:
                cout<<"Wrong option"<<endl;
                break;
              
        }
    }while(true);


}