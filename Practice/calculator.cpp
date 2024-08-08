#include <bits/stdc++.h> 

using namespace std;


int main(){

	ios_base::sync_with_stdio(false);              
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    double ep = 8.854e-12,d = 2e-6,A;
    double C = 200e-6;
    double ans = (C*d) / ep; 
    cout << ans << endl;
    return 0;   
}  