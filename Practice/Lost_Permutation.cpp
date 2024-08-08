#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,s,sum = 0;
        cin >> n >> s;
        int a[n],b[1000] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]] = 1;
        }
        sort(a,a+n);
        for(int i = 1; i <= 1000; i++){
            if(b[i] == 0){
                sum += i;
            }
            if(i >= a[n-1]){
                if(sum == s){
                    cout << "Yes\n";
                    break;
                }
                else if(sum > s){
                    cout << "No\n";
                    break;
                }
            }
        }
    }

    return 0;
}


