/******************Bismillahir Rahmanir Rahim********************
 Name : SAJEDUL ISLAM
 CF_Handle : SaJiD_96
 Institution : Rajshahi University Of Engineering & Technology
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

string binary(int i,int x){
    string s = "",tmp = "";
    while(i > 0){
        (i%2 == 0)? s = '0' + s : s = '1' + s;
        i /= 2;
    }
    int len = x - s.size();
    for(int i = 0; i < len; i++){
            tmp += '0';
    }
    return tmp+s;
}

int numOfDiv(int num){
    int cnt = 0;
    for(int i=1;i*i<=num;i++) {
        if(num%i == 0) {
            if(num/i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    scanf("%d",&t);
    while(t--){
        int a,b,ct;
        scanf("%d %d", &a, &b);
        int gcd = __gcd(a,b);
        ct = numOfDiv(gcd);
        printf("%d\n", ct);
    }

    return 0;
}
