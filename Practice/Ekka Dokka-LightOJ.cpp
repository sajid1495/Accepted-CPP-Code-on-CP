#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t,cas = 1,cnt = 1;
    cin >> t;
    while(t--){
        cout << "Case " << cas <<  ": ";
        cas++;
        long long int w;
        cin >> w;
        if(w%2 != 0){
            cout << "Impossible\n";
        }
        else{
            long long int n,m;
            n = w/2;
            m = 2;
            while(n%2 == 0){
                n /= 2;
                m *= 2;
            }
            cout << n << " " << m << endl;
        }
        
    }

	

	return 0;
}