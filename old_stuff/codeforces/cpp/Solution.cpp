#include <bits/stdc++.h>
using namespace std;

typedef vector<pair<int,char>> vpic;
typedef vector<int> vi;

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define pb push_back
#define F first
#define S second
#define nl "\n"
#define all(x) (x).begin(), (x).end()


int count(string& s){
  int ans = 0;
  for(int i=0;i<s.size();i++){
    if(s[i] == '1') ans++;
  }
  return ans;
}

void solve(){
  int a,b,c;cin >> a >> b >> c;
  if((a+b+c)%3 != 0){
    cout << "NO" << nl;
    return;
  } 

  int x = (a+b+c)/3;
  int p = x-a;
  int q = x-b;

  if(p>=0 && q >= 0 && (p+q) >= 1 && (p+q) <= c){
    cout << "YES" << nl;
  }else{
    cout << "NO" << nl;
  }
  return;
}

int main(){
  int t;cin >> t;
  while(t--){
    solve();
  }
  return 0;
}



