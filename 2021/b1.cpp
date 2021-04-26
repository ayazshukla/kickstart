#include <bits/stdc++.h>
#define  FOR(a)  for(int i=0;i<a;++i)
#define  vadd(a) v.push_back(a);
#define  sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; in(t);
 FOR(t){
	 int n; in(n); int cnt=1; string s; in(s);
	 cout << "Case #" << i+1 << ": 1 ";
	 for(int j=0;j<n-1;++j){
		 if(s[j+1]>s[j]){
			 ++cnt; cout << cnt << " ";
		 }
		 else {
			 cnt=1; cout << cnt << " ";
		 }
	 }
	 cout << endl;
  }
}
