public class FloatTest {
  public static void main(String[] args) {
    double v = Double.MAX_VALUE;

    while (v == Double.MAX_VALUE) {
      v = v + 0.1;
    }

    System.out.println("This never prints."); 
  }
}
