#include <iostream>
#include <string>
using namespace std;

void reverseword(string word)
{
    if(word.length()==0)
    {
        return;
    }
    else
    {
        cout<<word[word.length()-1];
        reverseword(word.substr(0,word.length()-1));
    }

}

int main()
{
    string word;
    cout<<"Enter word to reverse"<<endl;
    getline(cin,word);
    cout<<"After reverse: ";
    reverseword(word);

}