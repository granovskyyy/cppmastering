#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map <string,vector<int>> Lines;
    vector<int> linenums;
    int linenum=1;
    string word;
    do
    {
        cout<<"Enter word"<<endl;
        getline(cin,word);
        if(word=="end"){
            break;
        }
        Lines[word].push_back(linenum);
        linenum++;
        

    } while (true);
    for(auto i:Lines)
    {
        cout<<i.first<<" : ";
        for(int k:i.second)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        
    }
    

}