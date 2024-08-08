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
        int n,s;
        cin >> n >> s;
        int ans = s,tmp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            ans += x;
        }
        int flag = 1;
        for(int i = 1; i < 100000; i++){
            tmp = (i*(i+1))/2;
            if(tmp < ans){
                continue;
            }
            else if(tmp == ans){
                flag = 1;
                break;
            }
            else if(tmp > ans){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << "Yes\n";
        }
        else if(flag == 0){
            cout << "No\n";
        }
    }
    
    return 0;
}


