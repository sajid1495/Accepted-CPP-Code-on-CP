/******************Bismillahir Rahmanir Rahim********************
 Name : SAJEDUL ISLAM
 CF_Handle : SaJiD_96
 Institution : Rajshahi University Of Engineering & Techoonology
 E-Mail : m.sajid1495@gmail.com
 ***************************************************************/


#include <bits/stdc++.h>

using namespace std;

#define REP(a,b,c)              for(int i = a; i < b; i += c)
#define all(cont)               cont.begin(), cont.end()
#define rall(cont)              cont.end(), cont.begin()
#define FOREACH(it, l)          for(auto it = l.begin(); it != l.end(); it++)
#define MP                      make_pair
#define PB                      push_back
#define INF                     (int)1e9
#define EPS                     1e-9
#define PI                      3.1415926535897932384626433832795
#define MOD                     1000000007
#define read(type)              readInt<type>()
#define YES                     cout << "YES" << endl
#define NO                      cout << "NO" << endl

const double pi=acos(-1.0);

typedef pair<int, int>          PII;
typedef vector<int>             VI;
typedef vector<string>          VS;
typedef vector<PII>             VII;
typedef vector<VI>              VVI;
typedef map<int,int>            MPII;
typedef set<int>                SETI;
typedef multiset<int>           MSETI;
typedef long int                int32;
typedef unsigned long int       uint32;
typedef long long int           int64;
typedef unsigned long long int  uint64;

int64 sum(int64 x){
    string s = to_string(x);
    int ans;
    while(x > 0){
        ans += x%10;
        x /= 10;
    }
    return ans;
}
  
int main(){

    int t;
    cin >> t;
    while(t--){
        int64 n,q;
        cin >> n >> q;
        int64 a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        while(q--){
            int64 m;
            cin >> m;
            if(m == 1){
                int64 b,c;
                cin >> b >> c;
                for(int64 i = b-1; i <= c-1; i++){
                    a[i] = sum(a[i]);
                }
            }
            else{
                int64 b;
                cin >> b;
                cout << a[b-1] << endl;
            }
        }
    }

    return 0;
}