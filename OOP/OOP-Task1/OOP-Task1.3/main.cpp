#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.14;
class Point{
private:
    int x,y;
public:
    Point(){
    x=0;
    y=0;
    }
    Point(int x, int y){
    this->x=x;
    this->y=y;
    }
    void setX(int x){
    this->x=x;
    }
    void setY(int y){
    this->y=y;
    }
    int getX(){
    return x;
    }
    int getY(){
    return y;
    }
};

class Circle{
private:
    Point center;
    double radius;
public:
    //Default Constructor
    Circle(){
    radius=0.0;
    }
    //Parametrized Constructor
    Circle(Point center,double radius){
        this->center=center;
        this->radius=radius;
    }
    Circle(double radius, int x, int y):center(x,y){
        this->radius=radius;
    }
    //Copy Constructor
    Circle(Circle &circle){
    center=circle.getCenter();
    radius=circle.getRadius();
    }
    void setCenter(Point center){
    this->center=center;
    }
    void setRadius(double radius){
    this->radius=radius;
    }
    Point getCenter(){
    return center;
    }
    double getRadius(){
    return radius;
    }
    double calcArea(){
    double area=PI*pow(radius,2);
    return area;
    }
};
int main()
{
Circle circle1(10,3,4);
Circle circle2(circle1);
cout<<circle2.calcArea();
}
