/******************Bismillahir Rahmanir Rahim********************
 Name : SAJEDUL ISLAM
 CF_Handle : SaJiD_96
 Institution : Rajshahi University Of Engineering & Techoonology
 E-Mail : m.sajid1495@gmail.com
 ***************************************************************/


#include <bits/stdc++.h>
#include <math.h>
#include <cmath>

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

unsigned long long sum(int n){
    if(n%2 == 0){
        return (1LL*((n/2) * (n+1)));
    }
    else{
        return (1LL*(n*((n+1)/2)));
    }
}

double power(double a,int b){
    double ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }
    return ans;
}

int ispal(int n){
    string s = to_string(n);
    string s1 = s;
    int l = s.size();
    for(int i = 0; i < l/2; i++){
        swap(s[i],s[l-i-1]);
    }
    if(s == s1){
        return 1;
    }
    else{
        return 0;
    }
}

int lcm(int num1, int num2){
    int max = (num1 > num2)? num1 : num2,lcm;

    for(int i = max ; i <= num1*num2 ; i++){
        if(i % num1 == 0 && i % num2 == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        long long int n,k,q,x;
        cin >> n >> k >> q;
        long long int a[k],b[k],c[k];
        double d[k];
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        for(int i = 0; i < k; i++){
            cin >> b[i];
        }
        c[0] = a[0];
        d[0] = (a[0]*1.0) / b[0];
        for(int i = 1; i < k; i++){
            c[i] = a[i] - a[i-1];
            d[i] = (c[i]*1.0) / (b[i] - b[i-1]);
        }
        while(q--){
            double ans = 0;
            cin >> x;
            for(int i = 0; i < k; i++){
                if(x >= c[i]){
                    ans += c[i]*1.0/d[i];
                    x -= c[i];
                }
                else{
                    ans += (x*1.0)/d[i];
                    break;
                }
            }
            cout << (int)(ans) << " ";
        }
        cout << endl;
    }
    return 0;
}