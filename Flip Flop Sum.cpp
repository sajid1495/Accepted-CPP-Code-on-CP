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


  
int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int a[n],sum = 0,ct = 0,batti = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] == -1 && a[i-1] == -1){
                ct = 1;
            }
            if(a[i] == -1){
                batti = 1;
            }
        }
        if(ct == 1){
            sum += 4;
        }
        else if(ct == 0 && batti == 0){
            sum -= 4;
        }
        cout << sum << endl;
    }

    return 0;
}
