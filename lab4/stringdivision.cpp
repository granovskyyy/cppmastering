#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tokenizer(const string& str, const string& sep)
{
    vector<string> out;
    size_t start = 0;
    size_t pos;

    while ((pos = str.find(sep, start)) != string::npos)
    {
        out.push_back(str.substr(start, pos - start));
        start = pos + sep.length();
    }
    out.push_back(str.substr(start));

    return out;
}


int main()
{
    string str;
    string sep;
    cout<<"Enter one line of text"<<endl;
    getline(cin,str);
    cout<<"Enter separator"<<endl;
    cin>>sep;
    vector<string> tokens = tokenizer(str, sep);
    for (const auto &t : tokens)
        cout << t << endl;
}


