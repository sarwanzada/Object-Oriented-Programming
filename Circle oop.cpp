#include<iostream>
using namespace std;
class circle
{
    private:
    double radius;
    public:
    double getradius() const;
    double getarea() const;
    double getperimeter() const;
    void setradius(double value);
};
// member functions
double circle::getradius()const
{
    return radius;
}
double circle::getarea() const
{
    const double PI = 3.14;
    return(PI*radius*radius);
}
double circle::getperimeter() const
{
    const double PI = 3.14;
    return (2*PI*radius);
}
void circle::setradius(double value)
{
    radius=value;
}
int main()
{
    cout<<"Circle 1 : " <<endl;
    circle circle1;
    cout<<"Radius : "<<circle1.getradius()<<endl;
    cout<<"Area : "<<circle1.getarea()<<endl;
    cout<<"Perimeter : "<<circle1.getperimeter()<<endl<<endl;
}