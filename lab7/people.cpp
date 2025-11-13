#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
    string name;
    string surname;
    string pesel;
    public:
    Person(string n="John",string s="Pork",string p="0423692817"): name(n),surname(s),pesel(p) {};
    void setName(string n)
    {
        n=name;
    }
    void setSurname(string s)
    {
        s=surname;
    }
    void setPesel(string p){p=pesel;}
    string getName() const 
    {
        return name;
    }
    string getSurname() const 
    {
        return surname;
    }
    string getPesel() const
    {
        return pesel;
    }
    virtual string to_string()
    {
        return "Name: "+name+" Surname: "+surname+" ID: "+pesel;
    }

};
class Student : public Person
{
    string index;
    string year;
    public:
    Student(string i="234567", string y="3"): index(i),year(y){};
    void setIndex(string i)
    {
        i=index;
    }
    void setYear(string y)
    {
        y=year;
    }
    string getIndex() const 
    {
        return index;
    }
    string getYear() const 
    {
        return year;
    }
    string to_string()
    {
        return "Name "+getName()+"Surname "+getSurname()+" Pesel: "+getPesel()+" Year: "+year+" Index "+index;
    }


};
ostream& operator<<(ostream& out, const Student& s1)
{
    out<<"Name: "<<s1.getName()<<endl;
    out<<"Surname: "<<s1.getSurname()<<endl;;
    out<<"ID: "<<s1.getPesel()<<endl;
    out<<"Index: "<<s1.getIndex()<<endl;
    out<<"Year: "<<s1.getYear()<<endl;
    return out;
};

int main()
{
    Person person; 
    cout<<person.to_string()<<endl; //3
    Student student;
    cout<<student.to_string()<<endl;
    cout<<"Student data: "<<endl;
    cout<<student<<endl;
    vector <Person> ppl;
    ppl.push_back(student);
    for(auto i:ppl)
    {
        cout<<i.to_string();
    }
    vector <Person*> ppl2;
    ppl2.push_back(&student);
    for(auto i:ppl2)
    {
        cout<<i->to_string();
    }



}