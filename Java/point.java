
class Point {
    private int x_axixs;
    private int y_axixs;
  
    // constructor taking two parameters
    public Point() {
      this.x_axixs = 5;
      this.y_axixs = 5;
    }
  
    public Point(int x_axixs, int y_axixs) {
        this.x_axixs = x_axixs;
        this.y_axixs = y_axixs;
      }
    // constructor taking the single parameter
    public Point(int parameter) {
      this.x_axixs = parameter;
      this.y_axixs = parameter;
    }
  
   
    public void display() {
      System.out.println("Current X-axixs =" + this.x_axixs + " Y-axixs=" + this.y_axixs);
    }
  
 
  
  }
  
  public class TestCartesianPoint {
  
    public static void main(String[] args) {
  
      Point obj1 = new Point(18, 7);
      Point obj2 = new Point(17);
      Point obj3 = new Point();

      obj1.display();

      obj2.display();
 
      obj3.display();
  
    }
  
  }
  