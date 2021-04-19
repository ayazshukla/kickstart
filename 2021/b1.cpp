#include <bits/stdc++.h>
#define  FOR(a)  for(int i=0;i<a;++i)
#define  vadd(a) v.push_back(a);
#define  sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
void solve(string k){
    int cnt=1;
  for(int i=k.size()-2;i>=0;--i){
    if(k[i+1]>k[i])
        ++cnt;
        else
            break;
  }
  if(cnt==0)
    cout << 1 << " ";
  else
    cout << cnt << " ";
}
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; in(t);
 FOR(t){
     string s; int n; in(n);in(s); string sub;
     cout << "Case #" << i+1 << ":" << " ";
     for(int j=1;j<=n;++j){
        sub=s.substr(0,j);
        solve(sub);
     }
     cout << endl;
 }
}
