#include <bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t,cnt = 1;
    cin >> t;
    while(t--){
        cout << "Case " << cnt << ": ";
        int a,b;
        cin >> a >> b;
        if(a <= b) cout << 19 + (4*b) << endl;
        else{
            int tmp = (a - b) + a;
            cout << 19 + (tmp*4) << endl;
        }
        cnt++;
    }


	return 0;
}