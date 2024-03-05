public class MovablePoint extends Movable{
    int x, y, xSpeed, ySpeed;
    MovablePoint(){
        x=0;
        y=0;
        xSpeed=0;
        ySpeed=0;
    }

    MovablePoint(int x, int y, int xSpeed, int ySpeed){
        this.x=x;
        this.y=y;
        this.xSpeed=xSpeed;
        this.ySpeed=ySpeed;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public int getxSpeed() {
        return xSpeed;
    }

    public void setxSpeed(int xSpeed) {
        this.xSpeed = xSpeed;
    }

    public int getySpeed() {
        return ySpeed;
    }

    public void setySpeed(int ySpeed) {
        this.ySpeed = ySpeed;
    }

    @Override
    void moveUp(){
     y+=ySpeed;
    }

    @Override
    void moveDown() {
     y-=ySpeed;
    }

    @Override
    void moveRight() {
    x+=xSpeed;
    }

    @Override
    void moveLeft() {
    x-=xSpeed;
    }

    public void display_info(){
       System.out.println("x= "+x+"\ny= "+y+"\nxSpeed= "+xSpeed+"\nySpeed= "+ySpeed);
    }
}
