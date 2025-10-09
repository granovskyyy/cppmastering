#include <iostream>
#include <random>
#include <chrono>
using namespace std;

mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
uniform_real_distribution<double> dis(-1.0, 1.0);

class Point2D
{
    double x;
    double y;

public:
    Point2D(): x(0), y(0){};
    Point2D(double p1, double p2) : x(p1), y(p2){ }
    Point2D(const Point2D& p) : x(p.x), y(p.y) {}


    double getX() const 
    {
        return x;
    };
    double getY() const 
    {
        return y;
    };

    void setX(double p1) 
    {
        x = p1; 
    };
    void setY(double p2) 
    {
        y = p2; 
    };

};

class Circle
{
public: 
    Point2D c; //center
    double r; //radius

    Circle(Point2D c = Point2D(0,0), double r = 3.0) : c(c), r(r)
    { }


    bool is_inside(const Point2D& p)
    {
        double px = p.getX();
        double py = p.getY();
        double cx = c.getX();
        double cy = c.getY();

        double distance = (px - cx)*(px - cx) + (py - cy)*(py - cy);

        if (distance <= r*r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Point2D point1(5.3,4.5);
    Point2D point2;
    point2.setX(5.85);
    point2.setY(6.93);
    point2.getX();
    point2.getY();
    Circle c1(point1,5.0);
    c1.is_inside(point2);
    //monte carlo 

    double N= 1000000;
    double inside=0;

    Circle c2(Point2D(0,0),1.0);

    for(int i=0;i<N;i++)
    {
        Point2D p(dis(gen),dis(gen));
        if(c2.is_inside(p))
        {
            inside++;
        }
    }

    double mypi=4*inside/N;
    cout<<"My pi is equal to: "<<mypi<<endl;

}