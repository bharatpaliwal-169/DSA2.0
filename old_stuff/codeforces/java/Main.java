package java;
import java.util.Scanner;

public class Main {
  
  public static void log(Object obj){
    System.out.println(obj);
  }

  private static boolean solve(char[] p,char[] s){
    int i=0,j=0;
    while(i<p.length){
      if(j >= s.length || s[j] != p[i]) return false;

      int count = 0;
      while(j< s.length && s[j] == p[i] && count < 2){
        count++;j++;
      }
      i++;
    }

    return (j == s.length);
  }


  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    int t = sc.nextInt();
    sc.nextLine();
    while(t-- >0){
      String p = sc.nextLine().trim();
      String s = sc.nextLine().trim();
      char[] pp = p.toCharArray();
      char[] ss = s.toCharArray();

      if(solve(pp, ss)){
        log("YES");
      }else{
        log("NO");
      }
    }

    sc.close();
  }
}
