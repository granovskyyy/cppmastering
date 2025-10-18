#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mainstr=" Congratulations Mrs. <name>, you and Mr. <name> are the lucky recipients of a trip for two to XXXXXX. Your trip to XXX is already scheduled";
    string name="<name>";
    char xx='X';
    string lck="lucky";
    size_t n=mainstr.find(name);
    size_t s=mainstr.find(xx);
    size_t l=mainstr.find(lck);
    while(n!=string::npos)
    {
        mainstr.replace(n,name.length(),"Smith");
        n=mainstr.find(name,n+name.length());
    }
    if(l!=string::npos)
    {
        mainstr.insert(l-2,"un");
        l=mainstr.find(lck,l+lck.length());
    } 
    while(s!=string::npos)
    {
        size_t count=1;
        string rpl="Siberia";
        while(s+count<mainstr.size() && mainstr[s+count]==xx)
        {
            count++;
        }
        mainstr.replace(s,count,rpl);
        s=mainstr.find(xx,s+rpl.length());
    }
    
    
   

    mainstr.append(" in December ");
    cout<<mainstr<<endl;

}