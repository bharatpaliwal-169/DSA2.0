package java;
import java.util.Scanner;

public class Bkp {
  
  public static void log(Object obj){
    System.out.println(obj);
  }

  
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    int t = sc.nextInt();
    sc.nextLine();
    while(t-- >0){
      int n = sc.nextInt();
      int m = sc.nextInt();
      int l = sc.nextInt();
      int r = sc.nextInt();

      int[] arr = new int[2*n +1];

      for(int i=0;i <arr.length;i++){
        if(i < n) arr[i] = i - n;
        if(i==n) arr[i] = 0;
        if(i > n) arr[i] = arr[i-1] + 1; 
      }

      // for(int i:arr) log(i);

      int p = l,q = r,s=n-m;
      boolean flag = false;
      while (s-- > 0) {
        if((Math.abs(l - 0) >= Math.abs(0 - r)) && !flag  ){
          p++;flag = !flag;
        }else{
          q--;
        }
      }
      log(p + " " + q);
    }

    sc.close();
  }
}
