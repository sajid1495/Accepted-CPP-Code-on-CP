#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        int a[n],b[n],sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            sum += a[n-1-i];
            b[i] = sum;
        }
        while(q--){
            int x;
            cin >> x;
            int ans = -1,left = 0,right = n-1,mid;
            while(left <= right){
                mid = (left+right) / 2;
                if(b[mid] >= x){
                    ans = mid+1;
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            cout << ans << endl;
            // if(x > sum){
            //     cout << -1 <<  endl;
            // }
            // else{
            //     if(b[n/2] >= x){
            //         for(int i = 0; i <= n/2; i++){
            //             if(b[i] >= x){
            //                 cout << i+1 << endl;
            //                 break;
            //             }
            //         }
            //     }
            //     else{
            //         for(int i = (n/2)+1; i < n; i++){
            //             if(b[i] >= x){
            //                 cout << i+1 << endl;
            //                 break;
            //             }
            //         }
            //     }
            // }
        }
    }

    return 0;
}


