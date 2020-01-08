public class AbsTest {
  public static int abss(int x) {
    if (x < 0) {
      x = -x;
    }

    return x;
  }

  public static Integer abs(Integer x) {
    if (x < 0) {
      x = -x;
    }

    return x;
  }

  public static void main(String[] args) {
    System.out.println(
      String.format("|%d| = %d", Integer.MIN_VALUE, AbsTest.abs(Integer.MIN_VALUE))
    );
  }
}
