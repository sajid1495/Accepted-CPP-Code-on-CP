#include <bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    double pi = acos(-1.0);

	int t,cas = 1;
	cin >> t;
	while(t--){
		cout << "Case " << cas <<  ": ";
		cas++;
		double R;
		int n;
		cin >> R;
		cin >> n;
		double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));
		printf("%.10lf\n",r);
	}

	return 0;
}