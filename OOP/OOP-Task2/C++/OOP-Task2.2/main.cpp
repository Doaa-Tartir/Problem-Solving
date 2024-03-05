#include <iostream>

using namespace std;
class Movable{
virtual void moveUp()=0;
virtual void moveDown()=0;
virtual void moveLeft()=0;
virtual void moveRight()=0;
};

class MovablePoint:public Movable{
int x, y, xSpeed, ySpeed;
public:
    MovablePoint(){
    x=0;
    y=0;
    xSpeed=0;
    ySpeed=0;
    }

    MovablePoint(int x, int y, int xSpeed, int ySpeed){
    this->x=x;
    this->y=y;
    this->xSpeed=xSpeed;
    this->ySpeed=ySpeed;
    }

    void setX(int x){
    this->x=x;
    }

    void setY(int y){
    this->y=y;
    }

    void setXSpeed(int xSpeed){
    this->xSpeed=xSpeed;
    }

    void setYSpeed(int ySpeed){
    this->ySpeed=ySpeed;
    }

    int getX(){
    return x;
    }

    int getY(){
    return y;
    }

    int getXSpeed(){
    return xSpeed;
    }

    int getYSpeed(){
    return ySpeed;
    }
    void moveUp(){
    y+=ySpeed;
    }

    void moveDown(){
    y-=ySpeed;
    }

    void moveRight(){
    x+=xSpeed;
    }

    void moveLeft(){
    x-=xSpeed;
    }

    void display_info(){
    cout<<"x= "<<x<<"\ny= "<<y<<"\nxSpeed= "<<xSpeed<<"\nySpeed= "<<ySpeed<<endl;
    }
};
int main()
{
    MovablePoint m(5, 5, 2, 3);
    m.moveUp(); // x = 5, y = 8
    m.moveLeft(); // x = 3, y = 8
    m.display_info();
}
