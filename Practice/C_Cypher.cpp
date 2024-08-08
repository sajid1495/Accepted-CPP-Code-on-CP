#include <bits/stdc++.h>

#define FOR(n,i) for(int i = 0; i < n; i++)

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        FOR(n,i){
            int x;
            cin >> x;
            string s;
            cin >> s;
            FOR(x,j){
                if(s[j] == 'U'){
                    a[i]--;
                    if(a[i] == -1){
                        a[i] = 9;
                    }
                }
                else if(s[j] == 'D'){
                    a[i]++;
                    if(a[i] == 10){
                        a[i] = 0;
                    }
                }
            }
        }
        FOR(n,i){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}