#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int tmp = a[0],ct = 0;
        for(int i = 0; i < n; i++){
            if(tmp >=  a[i]){
                tmp = a[i];
                ct++;
            }
        }
        cout << ct << endl;
    }
    
    
	return 0;
}
