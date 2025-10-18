#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cout << "Enter a one line of the text:" << endl;
    getline(cin, text); // wczytuje całe zdanie!

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        string number = to_string(i);
        size_t found = text.find(number);

        while (found != string::npos)
        {
            cout << "The number " << number << " is found on position " << found << endl;
            sum++;
            found = text.find(number, found + 1);
        }
    }

    if (sum == 0)
        cout << "There are no numbers in the text" << endl;

    cout << "Sum of found numbers: " << sum << endl;
    return 0;
}
    