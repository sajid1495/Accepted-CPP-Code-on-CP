#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    string a,b;
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b.size() == 1 && b == "a"){
            cout << 1 << endl;
        }
        else if(b.size() == 1 && b != "a"){
            cout << a.size() + 1 << endl;
        }
        else{
            cout << -1 << endl;
        }

    }


	return 0;
}