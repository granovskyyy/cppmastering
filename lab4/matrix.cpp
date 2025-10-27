#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<vector<int>> sum(vector<vector<int>> v1, vector<vector<int>> v2)
{
    vector<vector<int>> out(v1.size(),vector<int>(v1[0].size()));
    for(int i=0;i<out.size();i++)
    {
        for(int j=0;j<out[i].size();j++)
        {
            out[i][j]=v1[i][j]+v2[i][j];
        }
    }
    return out;
}

vector<vector<int>> mul(vector<vector<int>> v1,  vector<vector<int>> v2)
{
    vector<vector<int>> out(v1.size(),vector<int>(v2[0].size()));
    for(int i=0;i<out.size();i++)
    {
        for(int j=0;j<out[i].size();j++)
        {
            for(int k=0;k<v1[0].size();k++)
            {
                out[i][j]+=v1[i][k]*v2[k][j];
            }
        }
    }
    return out;
}
void print(vector<vector<int>> v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    srand(time(NULL));
    vector<vector<int>> v1(4); 
    vector<vector<int>> v2(4);
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            v1[i].push_back(rand()%10); 
            v2[i].push_back(rand()%10);
        }
    }
    cout<<"Vector 1"<<endl;
    print(v1); //vector one
    cout<<"Vector 2"<<endl; 
    print(v2);  //vector 2//
    cout<<"Sum of vectors"<<endl;
    print(sum(v1,v2)); //sum 
    cout<<"Multiplication of the vectors"<<endl;
    print(mul(v1,v2)); //multiplication 
    
}


