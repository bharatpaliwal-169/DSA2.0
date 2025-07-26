
Problem : https://codeforces.com/contest/2094/problem/D
Here, bf don't work, stack don't wwokr, 2 pointer don,'t work
Th Idea is to find the freq arr of both the string and then compare the order...

```
#include <bits/stdc++.h>
using namespace std;

typedef vector<pair<int,char>> vpic;

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define pb push_back
#define F first
#define S second
#define nl "\n"

vpic freqNumberArray(string& s){
  vpic res;

  int count = 1;
  char ch = s[0];
  for(int i=1;i<=s.size();i++){
    if(ch == s[i]) count++;
    else{
      res.pb({count,ch});
      count = 1;ch = s[i];
    }
  }

  return res;
}


void solve(){
  string p,s;
  cin >> p;
  cin >> s;

  int p_len = p.size();
  int s_len = s.size();

  vpic freq_p = freqNumberArray(p);
  vpic freq_s = freqNumberArray(s);


  if(freq_p.size() != freq_s.size() || freq_s.size() > 2*freq_p.size() || p[0] != s[0]){
    cout << "NO" << nl;return;
  }

  for(int i=0;i<freq_p.size();i++){
    if(freq_p[i].F > freq_s[i].F || freq_p[i].F * 2 < freq_s[i].F){
      cout << "NO" << nl;return;
    }
  }
  cout << "YES" << nl;
}

int main(){
  int t;cin >> t;
  while(t--){
    solve();
  }
  return 0;
}


```

#=================================================================================================================================











































