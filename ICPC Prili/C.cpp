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

bool canDivideIntoThreeSets(std::vector<int>& nums, int n, int index, int sum, int targetSum, std::vector<bool>& used) {
    if (sum == targetSum) {
        if (index == 2) {
            // All elements have been divided into three sets equally.
            return true;
        } else {
            // Move on to the next set.
            return canDivideIntoThreeSets(nums, n, 0, 0, targetSum, used);
        }
    }

    for (int i = 0; i < n; i++) {
        if (!used[i] && sum + nums[i] <= targetSum) {
            used[i] = true;
            if (canDivideIntoThreeSets(nums, n, index, sum + nums[i], targetSum, used)) {
                return true;
            }
            used[i] = false;
        }
    }

    return false;
}

bool canDivideArray(std::vector<int>& nums) {
    int n = nums.size();
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    if (totalSum % 3 != 0) {
        return false; // Total sum cannot be divided by 3.
    }

    int targetSum = totalSum / 3;
    std::vector<bool> used(n, false);

    return canDivideIntoThreeSets(nums, n, 0, 0, targetSum, used);
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1,cs = 1;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n;
        int b[n];
        vector<int> a;
        cin >> x;
        a.push_back(x);
        b[0] = a[0];
        for(int i = 1; i < n; i++){
            cin >> x;
            a.push_back(x);
            b[i] = a[i] + b[i-1];
        }
        cout << "Case " << cs << ":" << endl;
        for(int i = 0; i < n; i++){
            if(b[i] == 0){
                cout << 1 << endl;
            }
            else if(b[i] % 3 != 0){
                cout << 0 << endl;
            }
            else if(b[i] % 3 == 0 && i < 3){
                cout << 0 << endl;
            }
            else if(b[i] % 3 == 0 && i >= 3){
                sort(a.begin(),a.begin()+i);
                vector<int>v(a.begin(),a.begin()+i);
                if(canDivideArray(v)){
                    cout << 1 << endl;
                }
                else{
                    cout << 0 << endl;
                }
            }
        }
    }
    return 0;
}