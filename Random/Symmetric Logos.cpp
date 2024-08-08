#include <bits/stdc++.h> 

using namespace std;

int palindrome(string s){
    int len = s.size();
    int tmp = len/2;
    for(int i = 0; i < tmp; i++){
        if(s[i] != s[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i = 0; i < n; i++){
		    cin >> a[i];
		}
		int tmp = n/2,ct1 = 1,ct2 = 1;
		for(int i = 0; i <  tmp; i++){
		    if(a[i] != a[n-1-i]){
		        ct1 = 0;
		        break;
		    }
		}
		for(int i = 0; i < n; i++){
		    ct2 = palindrome(a[i]);
		    if(ct2 == 0){
		        break;
		    }
		}
		if(ct1 == 1 && ct2 == 1){
			cout << "YES\n";
		}
		else{ 
			cout << "NO\n";
		}
	}
	return 0;
}