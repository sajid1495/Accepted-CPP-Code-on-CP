#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);              
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
    	int n,q;
    	cin >> n >> q;
    	int a[n];
    	long long int evenct = 0,oddct = 0,sum = 0;
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    		sum += a[i];
    		if(a[i] % 2 == 0){
    			evenct++;
    		}
    		else{
    			oddct++;
    		}
    	}   
    	for(int i = 0; i < q; i++){
    		int x,y;
    		cin >> x >> y;
    		if(x == 0){
                sum += y*evenct;
    			if(y % 2 ==0){
                    evenct = evenct;
                }
                else{
                    oddct += evenct;
                    evenct = 0;
                }
    		}
    		else{
    			sum += y*oddct;
                if(y%2 == 0){
                    oddct = oddct;
                }
                else{
                    evenct += oddct;
                    oddct = 0;
                }
    		}
    		cout << sum << endl;
    	}
    }

	return 0;
}