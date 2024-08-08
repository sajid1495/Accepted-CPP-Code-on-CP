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

    string word[25] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eightteen","nineteen","twenty"};
    string word2[11] = {"twenty","thirty","fourte","fifty","sixty","seventy","eighty","ninety"};

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = to_string(n);
        int l = s.size();
        if(l == 4){
            cout << word[(n/1000) - 1] << " thousand ";
            if(s[1] != '0'){
                int cmp = n%1000;
                cout << word[(cmp/100) - 1] << " hundred ";
            }
            int tmp = (n%100);
            if(tmp != 0 && (tmp >= 1 && tmp <= 20)){
                cout << word[tmp - 1];
            }
            else if(tmp != 0 && tmp > 20){
                cout << word2[(tmp/10) - 2] << " " << word[(tmp%10) - 1];
            }
        }
        else if(l == 3){
            cout << word[n/100 - 1] << " hundred ";
            int tmp = n%100;
            if(tmp != 0 && (tmp >= 1 && tmp <= 20)){
                cout << word[tmp - 1];
            }
            else if(tmp != 0 && tmp > 20){
                cout << word2[tmp/10 - 2] << " " << word[tmp%10 - 1];
            }
            cout << endl;
        }
        cout << endl;
    }    

    return 0;
}

