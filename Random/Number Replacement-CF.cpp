#include <bits/stdc++.h>

using namespace std;

void printVector(vector <pair<int,char>> &v){
    sort(v.begin(),v.end());
    cout << "Size : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

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
    	int n;
    	cin >> n;
    	int a[n];
    	string s;
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    	}
    	cin >> s;
    	vector <pair<int,char>> v;
    	for(int i = 0; i < n; i++){
    		v.push_back({a[i],s[i]});
    	}
        printVector(v);
        sort(v.begin(),v.end());
    	int ct = 0, ct2 = 0;
    	for(int i = 1; i < n; i++){
    	    if(v[i].first == v[i-1].first){
    	        if(v[i].second != v[i-1].second){
    	            cout << "NO\n";
    	            ct = 1;
    	            break;
    	        }
    	    }
    	}
    	if(ct == 0){
    	    cout << "YES\n";
    	}
    }
    return 0;   
}  