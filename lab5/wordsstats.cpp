#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string word;
    map<char,int> count;
    cout<<"Enter word"<<endl;
    getline(cin,word);
    for(char c:word)
    {
        if(word.find(c)!=string::npos)
        {
            count[c]++;
        }
    }
    for(auto i:count)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}