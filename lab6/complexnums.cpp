#include <iostream>
using namespace std;

class Complex
{
    double re;
    double im;
    public:
    Complex(double re=4.0, double im=3.0): re(re),im(im) {};
    void setRe(double a) {re=a;};
    void setIm(double b)  {im=b;};
    double getRe() const {return re;};
    double getIm() const {return im;};
    Complex& operator++ ()
    {
        ++re;
        ++im;
        return *this;
    }
    Complex operator++ (int)
    {
        Complex temp=*this;
        ++*this;
        return temp;
    } 

};
Complex operator+(const Complex& c1, const Complex& c2)
{
    return Complex(c1.getRe()+c2.getRe(),c1.getIm()+c2.getIm());
}
istream& operator>>(istream& in, Complex& c1)
{
    double re;
    double im;
    in>>re>>im;
    c1.setIm(im);
    c1.setRe(re);
    return in;
}
ostream& operator<<(ostream& out, const Complex& c1)
{
    out<<c1.getRe();
    if(c1.getIm()<=0)
    {
        out<<"-"<<c1.getIm()<<"i";
    }
    else
    {
        out<<"+"<<c1.getIm()<<"i";
    }
    return out;
}
bool operator== (const Complex& p1, const Complex& p2)
{
    return p1.getIm()==p2.getIm() && p1.getRe()==p2.getRe();
}

int main()
{
    Complex p1,p2,p3;
    cout<<"Enter complex numbers"<<endl;
    cin>>p1>>p2;
    p3=p1+p2;
    cout<<"add 2 complex nums ="<<p3<<endl;
    p3++;
    cout<<"after increment ="<<p3<<endl;
    
    

    
}