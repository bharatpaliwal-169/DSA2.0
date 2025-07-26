#include <bits/stdc++.h>
using namespace std;


int main(){

  int n;cin >> n;

  // //hack
  // if(n == 5){
  //   cout << 7 << endl;
  //   return 0;
  // }
  
  vector<string> arr;
  for(int i=0;i<n;i++){
    string s;cin >> s;
    arr.push_back(s);
  }

  set<string> st;
  for(int i=0;i<arr.size();i++){
    for(int j=1;j<arr.size();++j){
      st.insert(arr[i] + arr[j]);
    }
  }

  cout << st.size() << endl;
  
  return 0;
}