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

int isPrime(int n){
    if(n == 1){
        return 0;
    }
    int ans = 1;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            ans = 0;
            break;
        }
    }
    return ans;
}

string decimalToHexadecimal(int decimalNum) {
    string hexadecimalNum = "";
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        hexadecimalNum = hexDigits[remainder] + hexadecimalNum;
        decimalNum /= 16;
    }

    return hexadecimalNum;
}


double power(double a,int b){
    double ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        string a;
        cin >> a;
        int ct = 0,l = a.size();
        map <char,int> m;
        for(int i = 0; i < l; i++){
            m[a[i]]++;
        }
        for(auto val : m){
            if(val.second % 2 != 0){
                ct++;
            }
        }
        if(l%2 == 0 && ct > 0){
            cout << "NO SOLUTION\n";
        }
        else if(l%2 == 0 && ct == 0){
            string s = "";
            for(auto val : m){
                for(int i = 0; i < val.second / 2; i++){
                    s += val.first;
                }
            }
            cout << s;
            for(int i = s.size() - 1; i >= 0; i--){
                cout << s[i];
            }
            cout << endl;
        }
        else if(l%2 != 0 && ct > 1){
            cout << "NO SOLUTION\n";
        }
        else if(l%2 != 0 && ct == 1){
            string s = "";
            for(auto val : m){
                if(val.second%2 == 0){
                    for(int i = 0; i < val.second / 2; i++){
                        s += val.first;
                    }
                }
            }
            int tmp;
            for(auto val : m){
                if(val.second%2 != 0){
                    tmp = val.second;
                    for(int i = 0; i < val.second; i++){
                        s += val.first;
                    }
                }
            }
            cout << s;
            for(int i = s.size() - 1 - tmp; i >= 0; i--){
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}
