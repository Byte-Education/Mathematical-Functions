public class Factors {
  public static int factors(int n, int[] nums) {
    int count = 0;
    nums[count++] = n;
    for (int i = 2; i < (n + 1 / 2); i++) {
      if (n % i == 0) {
        nums[count++] = i;
      }
    }
    return count;
  }

  public static int generate_factors(int n, int low, int high, int[] nums, int[][] factor_list) {
    int generated = Gen.gen(n, low, high, nums);
    for (int i = 0; i < n; i++) {
      factors(nums[i], factor_list[i]);
    }
    return generated;
  }

  public static void main(String[] args){
    int n = 10, low = 0, high=10, nums[];
  }
  
}
