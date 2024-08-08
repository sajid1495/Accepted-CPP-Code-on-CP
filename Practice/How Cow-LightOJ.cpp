#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t,cas = 1;
    cin >> t;
    while(t--){
        cout << "Case " << cas <<  ":\n";
        cas++;
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int n;
        cin >> n;
        while(n--){
            int a,b;
            cin >> a >> b;
            if((a >= x1 && a <= x2) && (b >= y1 && b <= y2)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        
    }
	return 0;
}