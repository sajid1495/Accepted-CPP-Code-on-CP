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

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(n == 1){
            cout << k << endl;
        }
        else if(n == k){
            cout << 1 << endl;
        }
        else if(n > k){
            if(n%k == 0){
                cout << 1 << endl;
            }
            else{
               int tmp = ((n/k) + 1) * k;
                if(tmp == n){
                    cout << 1 << endl;
                }
                else{
                    cout << (tmp/n) + 1 << endl;    
                } 
            }
        }
        else{
            if(k%n == 0){
                cout << k/n << endl;
            }
            else{
                cout << (k/n) + 1 << endl;
            }
        }
    }

    
    return 0;
}


