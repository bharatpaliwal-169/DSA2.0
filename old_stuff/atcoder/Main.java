package atcoder;

import java.util.*;
import java.util.stream.Collectors;


public class Main {
  public static final int MOD = 1_000_000_000;
  public static void Log(Object obj){
    System.out.println(obj);
  }
  public static void printArray(String[] obj){
    Log(Arrays.stream(obj).map(String::toUpperCase).filter(e -> e.startsWith("J")).collect(Collectors.joining(",")));
  }


  public static int[] preSum(int[] arr){
    int[] pre = new int[arr.length + 1];
    for(int i=0;i<pre.length;i++){
      if(i==0){
        pre[i] = arr[i];
      }
      pre[i] += arr[i-1];
    }
    return pre;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n-1];
    for(int i=0;i<n-1;i++){
      int x = sc.nextInt();
      arr[i] = x;
    }
    sc.nextLine();

    for(int i=0;i<arr.length;i++){
      int[] pre = preSum(arr);
      Log(Arrays.toString(pre));
    }
    sc.close();
  }
}