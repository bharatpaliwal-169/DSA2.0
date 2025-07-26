public class EqualPairInArray {
  private static void Log(Object obj){
    System.out.println(obj);
  }

  //brute force
  private static void solve(int[] nums,int k){
    int pairs = 0;
    for(int i=0;i<nums.length-1;i++){
        for(int j=i+1;j<nums.length;j++){
            if(nums[i] == nums[j] && (i*j) % k == 0){
                pairs++;
            }
        }
    }
    Log(pairs);
  }

  public static void main(String[] args) {
    int[] nums = {3,1,2,2,2,1,3};
    int k = 2;

    solve(nums,k);
  }
}



// https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array
// try to solve it in optimised time complexity
