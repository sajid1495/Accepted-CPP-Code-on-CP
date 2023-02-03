#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int sum = (a+b+c) - 3;
        if(sum == 1 || sum == 2 || sum <= 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
	return 0;
}
