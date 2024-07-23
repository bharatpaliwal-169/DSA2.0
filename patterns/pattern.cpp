#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

// *-*-*
// *-*-*
// *-*-*
// void pattern1(int &n){
//   for(int i=1;i<=n+2;i++){
//     for(int j=0;j<n;j++){
//       if( i%2!=0 && j != n-1){
//         cout << "*" << "--";
//       }
//       else if(j == n-1){
//         // if(i%2 !=0){
//         //   cout << "*";
//         // }else{
//         //   cout << "|";
//         // }
//         (i%2 != 0) ? cout << "*" : cout << "|";
//       }
//       else if(i == n){
//         cout << "*";
//       }
//       else{
//         cout << "|" << "  ";
//       }
//     }
//     cout << nl;
//   }
// }


// *
// **
// ***
// 1
// 23
// 456
// 78910
void pattern2(int &n){
  int k=1;
  for(int i=1;i<=n;i++){
    int j=1;
    while(j<=i){
      cout << k << " ";
      j++;k++;
    }
    cout << nl;
  }
}

// ****
// ***
// **
// *
void pattern3(int &n){
  for(int i=n-1;i>=0;i--){
    int j=i;
    while(j>=0){
      cout << "*";
      j--;
    }
    cout << nl;
  }
}

// 12345
// 1234
// 123
// 12
// 1
void pattern4(int &n){
  for(int i=n-1;i>=0;i--){
    int j=i,k=1;
    while(j>=0){
      cout << k << " ";
      k++;j--;
    }
    cout << nl;
  }
}

//   *
//  ***
// *****

// TIP : look for the max number of stars in nth row, make col according to 1st n last start and find the pattern.
void pattern5(int &n){
  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<(n-i-1);j++){
      cout << " ";
    }
    //star
    for(int j=0;j<(2*i)+1;j++){
      cout << "*";
    }
    //space
    for(int j=0;j<n-i-1;j++){
      cout << " ";
    }
    cout << nl;
  }
}



int main(){
  int n; cin >> n;

  // pattern1(n);
  // pattern2(n);
  // pattern3(n);
  // pattern4(n);
  pattern5(n);


  return 0;
}