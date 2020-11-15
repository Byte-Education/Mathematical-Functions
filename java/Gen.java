public class Gen {
  public static int gen(int n, int low, int high, int[] nums) {
    for (int i = 0; i < n; i++) {
      nums[i] = (int) (Math.random() * high + low);
    }
    return n;
  }

  public static void main(String[] argv) {
    int n = 10, low = -10, high = 10, nums[];
    switch (argv.length) {
      case 1:
        n = 10;
        low = -10;
        high = 10;
        System.out.printf("Missing all parameters, defaulting to %d %d %d\n", n, low, high);
        break;
      case 2:
        n = Integer.parseInt(argv[1]);
        low = -10;
        high = 10;
        System.out.printf("Missing min and max, defaulting to %d %d\n", low, high);
        break;
      case 3:
        n = Integer.parseInt(argv[1]);
        low = Integer.parseInt(argv[2]);
        high = 10;
        System.out.printf("Missing max, defaulting to %d\n", high);
        break;
      case 4:
        n = Integer.parseInt(argv[1]);
        low = Integer.parseInt(argv[2]);
        high = Integer.parseInt(argv[3]);
        break;
    }
    n = Math.abs(n);

    nums = new int[n];
    gen(n, low, high, nums);
    for (int i = 0; i < n; i++) {
      System.out.printf("%d ", nums[i]);
    }
    System.out.println();

  }

}
