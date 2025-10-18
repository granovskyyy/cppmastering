#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string string_reverse(const string& in)
{
    string out="";
    for(int i=in.size()-1;i>=0;i--)
    {
        out+=in[i];
    }
    return out;
}
int main()
{
    string x="Kamil Slimak is my Polish friend";
    fstream file("/Users/tomekgranowski/cppmastering/lab3/test.txt"); //your file here
    if(file.is_open())
    {
        file<<"Word after reverse: "<<string_reverse(x);
        file.close();
    }
    return 0;
    
}