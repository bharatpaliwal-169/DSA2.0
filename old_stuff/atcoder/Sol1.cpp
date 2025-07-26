#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;cin >> n;

  queue<pair<int, int64>> A;
  while(n--){
    int type;cin >> type;
    
    if(type == 1){
      int64 c, x;cin >> c >> x;
      A.emplace(x, c);
    }
    if(type == 2){
      int64 k;cin >> k;
      // cout << "val of k" << k << endl;
      int64 sum = 0;
      while (k > 0) {
        auto &[val, cnt] = A.front();
        if (cnt <= k) {
            sum += val * cnt;
            k -= cnt;
            A.pop();
        } else {
            sum += val * k;
            cnt -= k;
            k = 0;
        }
      }
      // cout << "val of i: " << i << endl;
      cout << sum << endl;
    }
  }
  return 0;
}