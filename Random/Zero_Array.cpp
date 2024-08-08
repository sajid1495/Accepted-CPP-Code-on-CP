#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unsigned long long int sum = 0,big = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long int x;
        cin >> x;
        sum += x;
        if(x >= big){
            big = x;
        }
    }
    if(sum % 2 == 0 && (sum - big) >= big){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}


