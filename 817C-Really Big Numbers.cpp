//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: MD. EUSHA HASAN ( DAFFODIL INTERNATIONAL UNIVERSITY, SWE'231'(40))
/** ========================================**/
#include <bits/stdc++.h>
using namespace std;
#define sakalakabumbum() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)
#define pi  3.14159
int main() {
 sakalakabumbum();
ll n,q,c,i,l,hi,mid,s=0,k=0,f;
cin>>n>>q;
l=1,hi=n;
while (l<=hi){
	c=0;
	mid = l+ ((hi-l)/2);
	i = mid;
	while (i!=0){
		k = i%10;
		c += k;
		i /=10;
	}
	f = mid-c;
	if (f>=q){
		s = mid;
		hi = mid-1;
	}
	else {
		l = mid+1;
	}
}
if (s==0){
	cout<<0<<endl;
}
else {
	cout<<(n-s)+1<<endl;
}

    return 0;
}
