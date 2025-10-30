#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set <char> word;
    string w;
    cout<<"Enter word"<<endl;
    getline(cin,w);
    for(int i=0;i<w.size();i++)
    {
        word.insert(w[i]);
    }
    for(auto i:word)
    {
        cout<<i<<endl;
    }

}