class CartesianPoint {
  private int x_axixs;
  private int y_axixs;

  // constructor taking two parameters
  public CartesianPoint(int x_axixs, int y_axixs) {
    this.x_axixs = x_axixs;
    this.y_axixs = y_axixs;
  }

  // constructor taking the single parameter
  public CartesianPoint(int parameter) {
    this.x_axixs = parameter;
    this.y_axixs = parameter;
  }

  // Getter and Setter
  public void setX_axixs(int x_axixs) {
    this.x_axixs = x_axixs;
  }

  public int getX_axixs() {
    return this.x_axixs;
  }

  public void setY_axixs(int y_axixs) {
    this.y_axixs = y_axixs;
  }

  public int getY_axixs() {
    return this.y_axixs;
  }

  public void display() {
    System.out.println("Current X-axixs =" + this.x_axixs + " Y-axixs=" + this.y_axixs);
  }

  // Move methods
  public void move(int x, int y) {
    this.x_axixs = x;
    this.y_axixs = y;
  }

  public void move(int parameter) {
    this.x_axixs = parameter;
    this.y_axixs = parameter;
  }

}

public class TestCartesianPoint {

  public static void main(String[] args) {

    CartesianPoint obj1 = new CartesianPoint(18, 7);
    CartesianPoint obj2 = new CartesianPoint(17);

    obj1.display();
    System.out.println("Moving the co-ordinates");
    obj1.move(10, 16);
    obj1.display();

    obj2.display();
    System.out.println("Moving the co-ordinates");
    obj2.move(5);
    obj2.display();

  }

}
