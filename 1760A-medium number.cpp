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
	int a[3];
	for (int i=0; i<3; i++){
		cin>>a[i];
	}
	sort(a,a+3);
	cout<<a[1]<<endl;
}
return 0;
}
