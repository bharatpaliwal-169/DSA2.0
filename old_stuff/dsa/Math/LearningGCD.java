package dsa.Math;
// The Greatest Common Divisor (GCD) also known as the Highest Common Factor (HCF) is the greatest number that divides a set of numbers without leaving a remainder. 
// For example: GCD of 12 and 18 is 6 as it divides both numbers and is the largest of all their factors.

public class LearningGCD {

  private static void Log(Object obj){
    System.out.println(obj);
  }

  // O(min(a,b))
  private static int basicgcd(int a,int b){
    int hcf = Math.min(a, b);
    while(hcf > 0){
      if(a % hcf == 0 && b % hcf == 0) break;
      hcf--;
    }
    return hcf;
  }
  
  // O(min(a,b))
  private static int recGCD(int a,int b){
    if(a == b) return a;
    if(a > b) return recGCD(a - b, b);
    else return recGCD(a, b - a);
  }


  //O(log(min(a,b)))
  private static int optGCD(int a, int b){
    if(b == 0) return a;
    return optGCD(b, a % b);
  }

  //O(log(max(a,b)))
  private static boolean isCoPrime(int a,int b){
    if(optGCD(a, b) == 1) return true;
    return false;
  }

  //O(log(min(a,b)))
  private static int LCM(int a,int b){
    return (a / optGCD(a, b)) * b;
  }

  public static void main(String[] args) {
    int a = 18,b = 12;
    Log(basicgcd(a, b));
    Log(recGCD(a, b));
    Log(optGCD(a, b));
    Log(isCoPrime(a, b));
    Log(LCM(a, b));
  }
}


// https://www.geeksforgeeks.org/find-the-minimum-possible-health-of-the-winning-player/

// https://www.geeksforgeeks.org/minimum-possible-final-health-of-the-last-monster-in-a-game/

// https://www.geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers/

// HARD
// https://www.geeksforgeeks.org/calculate-the-sum-of-gcd-over-all-subarrays/
// https://www.geeksforgeeks.org/gcd-greatest-common-divisor-practice-problems-for-competitive-programming/




