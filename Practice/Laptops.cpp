#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    } 
    sort(v.begin(),v.end());    
    int flag = 1;
    for(int i = 0; i < n-1; i++){
        if(v[i].second > v[i+1].second){
            cout << "Happy Alex" << endl;
        }
    }
    cout << "Poor Alex" << endl;

    return 0;
}


