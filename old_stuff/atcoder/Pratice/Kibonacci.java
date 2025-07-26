package atcoder.Pratice;

import java.util.Scanner;

public class Kibonacci {
  public static final int MOD = 1_000_000_000;
  public static void Log(Object obj){
    System.out.println(obj);
  }

  


  public static int solve(int n,int k){
    int[] dp = new int[n+1];
    int[] prefixSum = new int[n+2];
    
    for(int i=0;i<k&&i<=n;i++){
      dp[i] = 1;
      prefixSum[i+1] = prefixSum[i] + dp[i]; 
    }
    for(int i=k;i<=n;i++){
      dp[i] = (prefixSum[i] - prefixSum[i-k])%MOD;
      if(dp[i] < 0) dp[i] += MOD;
      prefixSum[i+1] = (prefixSum[i] + dp[i])%MOD; 
    }

    return dp[n];
  }



  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();

    Log(solve(n,k));

    sc.close();
  }
}


// https://atcoder.jp/contests/abc401/tasks/abc401_c