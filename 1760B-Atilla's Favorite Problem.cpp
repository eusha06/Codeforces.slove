//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: MD. EUSHA HASAN ( DAFFODIL INTERNATIONAL UNIVERSITY, SWE'231'(40))
/** ========================================**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define MOD 1000000007
#define w(t) int t; cin>>t; while (t--)

int main() {
w(t){
int i,p,m=0,n;
cin>>n;
string a;
cin>>a;
for (i=0; i<a.size(); i++)
{
	p = a[i]-96;
	m = max(m,p);
}
cout<<m<<endl;
}
return 0;
}
