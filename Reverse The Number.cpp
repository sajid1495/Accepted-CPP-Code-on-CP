#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int len = n.size(),tmp;
        char s[len];
        for(int i = 0; i < len; i++){
            char c  = n[len - i - 1];
            s[i] = c;
            //cout << n[len - i - 1];
        }
        for(int i = 0; i < len; i++){
            if(s[i] != '0'){
                tmp = i;
                break;
            }
        }
        for(int i = tmp; i < len; i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
