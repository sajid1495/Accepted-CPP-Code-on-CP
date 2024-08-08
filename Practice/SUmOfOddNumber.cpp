#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        int n,q;
        cin >> n >> q;
        unsigned long long int a[n],b[n],sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            b[i] = sum;
        }
        while(q--){
            int x,y;
            cin >> x >> y;
            cout << b[y-1] - b[x-2] << endl;
        }
    }


    return 0;
}