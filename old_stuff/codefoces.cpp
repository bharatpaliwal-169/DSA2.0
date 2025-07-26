#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;cin >> t;
  while(t--){
    int n;cin >> n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    int fsum = arr[0];
    if(n == 1){
      cout << arr[0] << endl;
    }else{
      sort(arr.begin(),arr.end());
      for(int i=1;i<n;i+=2){
        fsum = (fsum + arr[i]) - 1;
      }
      cout << fsum << endl;
    }
  }
  return 0;
}
