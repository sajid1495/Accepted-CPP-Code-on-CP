#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	int x;
	cin >> x;
	float area = acos(-1) * pow(x,2);
	string s = to_string(area);
	cout << s << endl;
	char sm = s[5];
	int m = sm - '0';
	cout << m << endl;

	return 0;
}