#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
       int l;
        cin >> l;
        string s;
        cin >> s;
        int ct0 = 0,ct1 = 0;
        for(int i = 0; i < l; i++){
            if(s[i] == '0'){
                ct0++;
            }
            else{
                ct1++;
            }
        }
        int ans;
        if(ct0 == ct1){
            ans = ct0;
        }
        else if(ct0 > ct1){
            ans = ct1;
        }
        else if(ct1 > ct0){
            ans = ct0 + 1;
        }
        cout << ans << endl;
    }
    
	return 0;
}
