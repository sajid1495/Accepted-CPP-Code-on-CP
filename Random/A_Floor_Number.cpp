#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n < 3){
            cout << 1 << endl;
        }
        else if((n-2)%x == 0){
            cout << (n-2)/x + 1 << endl;
        }
        else{
            cout << (n-2)/x + 2 << endl;
        }
    }
    
    return 0;
}