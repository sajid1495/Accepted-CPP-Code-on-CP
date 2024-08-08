#include <bits/stdc++.h>

using namespace std;

int main(){

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        string s;
        cin >> s;
        map <char,int> m;
        int ans = 0;
        for(int i = 0; i < t; i++){
            char tmp = s[i];
            m[tmp]++;
            if(m[tmp] == 1){
                ans += 2;
            }
            else{
                ans += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}