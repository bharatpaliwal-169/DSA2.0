#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin >> n;
  vector<int>d(n-1,0);
  for(int i=0;i<n-1;i++){
    int x;cin >> x;
    d[i] = x;
  }

  // cout << "d" << ": ";
  // for(auto i : d) cout << i << " ";
  // cout << endl;

  int p = 0;

  while(p<d.size()){
    
    int sum = 0;
    for(int i=p;i<d.size();i++){
      sum+= d[i];
      cout << sum << " ";
    }
    cout << endl;
    p++;
  }

  return 0;
}