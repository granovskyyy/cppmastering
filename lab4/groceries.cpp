#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector <string> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
};

int main()
{
    vector <string> groceries = {"wino","buraki","banany","cukier","czekolada","marchew"};
    string last=groceries[groceries.size()-1];
    cout<<"last one: "<<last<<endl;
    groceries.erase(groceries.begin()+groceries.size()-1);
    groceries.insert(groceries.begin()+2,"kawa");

    for(int i=0;i<groceries.size();i++)
    {
        if(groceries[i]=="cukier")
        {
            groceries[i]="cukierki";
        }
        if(groceries[i]=="czekolada")
        {
            groceries.erase(groceries.begin()+i);
        }
    }
    
    
    sort(groceries.begin(),groceries.end());
    print(groceries);
}   