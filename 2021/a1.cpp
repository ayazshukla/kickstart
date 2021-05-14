#include <bits/stdc++.h>
using namespace std; typedef  long  long  ll; typedef vector<int> vi; typedef set<int> si;
#define  FOR(a)  for(int i=0;i<a;++i)
#define  vadd(a) v.push_back(a);
#define  sort(v) sort(v.begin(),v.end());
#define print(i,s) cout << "Case #" << i+1 << ": " << s << "\n";
#define in(t) cin>>t;
int main(){
 ios::sync_with_stdio(0);cin.tie(0); int t; cin >> t;
 FOR(t){
	 int n,k; cin >> n >> k;
	 string s; cin >> s; int cnt=0;
	 for(int i=0;i<(int)((n/2));++i){
		 if(s[i]!=s[n-i-1])
			 ++cnt;
	 }
	 print(i,(int)abs(k-cnt));
 }
}
