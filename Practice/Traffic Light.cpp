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

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t;
    cin >> t;
    while(t--){
        int n,fpc,lpc,fpg,lpg,tmp,max1 = -1,max2 = -1,ans = 0;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] != 'g'){
                ans++;
            }
        }
        s += s;
        for(int i = 0; i < n; i++){
            if(s[i] == c){
                for(int j = i+1; j < 2*n; j++){
                    if(s[j] == 'g'){
                        tmp = j - i;
                        if(max1 < tmp){
                            max1  = tmp;
                        }
                        break;
                    }

                }
            }
        }
        if(ans == 0 || c == 'g'){
            cout << 0 << endl;
        }
        else{
            cout << max1 << endl;
        }
        
    }
    return 0;
}


