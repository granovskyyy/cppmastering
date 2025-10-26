#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

void sum(vector<float> v1, vector<float> v2)
{
    vector<float> result;
    if(v1.size() != v2.size())
    {
        cout << "You can't add vectors with different sizes" << endl;
        return;
    }

    for(size_t i = 0; i < v1.size(); i++)
    {
        result.push_back(v1[i] + v2[i]);
        cout << result[i] << endl;
    }
}

int main()
{
    srand(time(NULL));
    vector<float> v1, v2;
    int size = 10;

    for(int i = 0; i < size; i++)
    {
        v1.push_back(static_cast<float>(rand()) / RAND_MAX * 10.0f);
        v2.push_back(static_cast<float>(rand()) / RAND_MAX * 10.0f);
    }

    sum(v1, v2);
}