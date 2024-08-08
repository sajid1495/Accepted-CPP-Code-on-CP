#include <bits/stdc++.h>

using namespace std;

int main(){

	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t,cas = 1;
    cin >> t;
    while(t--){
        cout << "Case " << cas <<  ": ";
        cas++;
        long long int a,b;
        cin >> a >> b;
        int cnt = 0;
        for(long long int i = a; i <= b; i++){
            long long int tmp = i*(i+1)/2;
            if(tmp%3 == 0){
                cnt++;
            }
        }
        cout << cnt << endl;
        
    }

	

	return 0;
}
