#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("ex7.txt"); //your file here
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    string line;
    size_t word_count=0;
    size_t sign_count=0;
    size_t line_count=0;
    while (getline(file, line))
    {
        line_count++;
        sign_count += line.length();
        size_t pos = 0;
        while(pos < line.length())
        {
            while (pos < line.length() && isspace(line[pos]))
                pos++;
            if (pos < line.length())
            {
                word_count++;
                while (pos < line.length() && !isspace(line[pos]))
                    pos++;
            }
        }
    }
    cout<<"Number of lines: "<<line_count<<endl; 
    cout<<"Number of characters: "<<sign_count<<endl;
    cout<<"Number of words: "<<word_count<<endl;
}