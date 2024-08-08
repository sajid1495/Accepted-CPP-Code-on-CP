#include <bits/stdc++.h>

using namespace std;

#define REP(a,b,c) for(int i = a; i < b; i += c)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


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
        int n,tmp = 0,flag = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                if(flag != 0){
                    tmp++;
                    flag = 1;
                }
                continue;
            }
            else if(a[i] > a[i-1]){
                if(i == 1){
                    flag = 1;
                }
                if(flag != 1){
                    tmp++;
                    flag = 0;
                }
            }
        }
        if(flag <= 2){
            YES;
        }
        else{
            NO;
        }
    }
    return 0;
}


