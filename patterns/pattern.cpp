#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

// *-*-*
// *-*-*
// *-*-*
void pattern1(int &n){
  for(int i=1;i<=n+2;i++){
    for(int j=0;j<n;j++){
      if( i%2!=0 && j != n-1){
        cout << "*" << "--";
      }
      else if(j == n-1){
        // if(i%2 !=0){
        //   cout << "*";
        // }else{
        //   cout << "|";
        // }
        (i%2 != 0) ? cout << "*" : cout << "|";
      }
      else if(i == n){
        cout << "*";
      }
      else{
        cout << "|" << "  ";
      }
    }
    cout << nl;
  }
}


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


// *****
//  ***
//   *
void pattern6(int &n){
  for(int i=n;i>0;i--){
    for(int j=0;j<(n-i);j++){
      cout << " ";
    }

    for(int j=0;j<(2*i) - 1;j++){
      cout << "*";
    }
    for(int j=0;j<(n-i);j++){
      cout << " ";
    }
    cout << nl;
  }
}

// 5 + 6
void pattern7(int &n){
  pattern5(n);
  pattern6(n);
}

void pattern8(int &n){
  for(int i=0;i<n;i++){
    for(int j=1;j<=i+1;j++){
      cout << "*";
    }
    cout << nl;
  }
  for(int i=(n-1);i>0;i--){
    for(int j=0;j<i;j++){
      cout << "*";
    }
    cout << nl;
  }
}


void pattern9(int &n){
  int start = 1;
  for(int i=0;i<n;i++){
    if(i%2 == 0) start = 1;
    else start = 0;
    for(int j=0;j<=i;j++){
      cout << start;
      start = 1-start;
    }
    cout << nl;
  }
}


// 1   1
// 12 21
// 123321
void pattern10(int &n){
  for(int i=0;i<n;i++){
    for(int j=1;j<=i+1;j++){
      cout << j;
    }
    for(int j=2*(n - (i+1));j>0;j--){
      cout << " ";
    }
    for(int j=i+1;j>=1;j--){
      cout << j;
    }
    cout << nl;
  }
}


// A
// AB
// ABC
// ABCD
void pattern11(int &n){
  char c = 'A';
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout << (char)(c+j);
    }
    cout << nl;
  }
}

void pattern12(int &n){
  char c = 'A' + (n-1);
  for(int i=1;i<=n;i++){
    char k = c;
    for(int j=i;j>=1;j--){
      cout << (char)(k-j+1);
    }
    cout << nl;
  }
}

void pattern13(int &n){
  char c = 'A';
  for(int i=0;i<n;i++){
    for(int j=(n-i-1);j>0;j--){
      cout << " ";
    }

    // cout << " ";
    
    for(int j=0;j<i;j++){
      cout << (char)(c+j);
    }

    // cout << " ";
    
    // for(int j=0;j<i;j++){
    //   cout << (char)(c+j);
    // }
    cout << (char)(c+i);

    // cout << " ";

    for(int j=0;j<=i-1;j++){
      cout << (char)(c+(i-j-1));
    }

    // cout << " ";

    for(int j=(n-i-1);j>0;j--){
      cout << " ";
    }
    cout << nl;
  }
}


void pattern14(int &n){
  for(int i=1;i<=n;i++){
    if(i == 1 || i == n){
      for(int j=1;j<=n;j++){
        cout << "*";
      }
    }

    else{
      for(int j=1;j<=n;j++){
        if(j==1 || j == n){
          cout << "*";
        }else{
          cout << " ";
        }
      }
    }


    cout << nl;
  }
}

// //thala pattern
// void thala(int &n){
//     for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//       if(i == 1 || i == n){
//         cout << "*";
//       }
//       else if(j == 1 || j == n){
//         cout << "*";
//       }else{
//         cout << " ";
//       }
//     }
//     cout << nl;
//   }
// }

void pattern15(int &n){
  
  int N = 2*n -1;
  int mat[N+1][N+1];
  int val = n;

  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      mat[i][j] = 0;
      if(i==n && j == n){
        mat[i][j] = 1;
      }
    }
  }

  int row = 1;
  int col = 1;
  while(row <= n && col <= n){
    
    int i=row,j=col;
    
    // cout << " row= " << row << " col= " << col << nl;

    while(j<= (N-col) ){
      mat[i][j] = val;
      j++;
    }
    // cout << " i: " << i << " j: " << j << nl;

    while(i<= (N-row) ){
      mat[i][j] = val;
      i++;
    }

    // cout << " i: " << i << " j: " << j << nl;

    while(j>= (1+col)){
      mat[i][j] = val;
      j--;
    }
    
    // cout << " i: " << i << " j: " << j << nl;

    while(i>=(1+row)){
      mat[i][j] = val;
      i--;
    }

    // cout << " i: " << i << " j: " << j << nl;

    row++;col++;
    if(val >1)val--;
  
    // cout << "---------------" << nl;
    // for(int i=1;i<=N;i++){
    //   for(int j=1;j<=N;j++){
    //     cout << mat[i][j];
    //   }
    //   cout << nl;
    // }

    // cout << "--------------" << nl;
  } 

  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      cout << mat[i][j];
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
  // pattern5(n);
  // pattern6(n);
  // pattern7(n);
  // pattern8(n);
  // pattern9(n);
  // pattern10(n);
  // pattern11(n);
  // pattern12(n);
  // pattern13(n);
  // pattern14(n);
  pattern15(n);
  return 0;
}