public class Main {
    public static void main(String[] args) {
        MovablePoint m=new MovablePoint(5, 5, 2, 3);
        m.moveUp(); // x = 5, y = 8
        m.moveLeft(); // x = 3, y = 8
        m.display_info();

    }
}