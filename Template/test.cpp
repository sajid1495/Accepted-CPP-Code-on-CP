#include<bits/stdc++.h>
using namespace std;
double timeToDouble(string& s) {
    string hour,min;
    for(int i=0;i<s.size();i++){
        if(s[i]!=':' && s[i]!='.') hour.push_back(s[i]);
        else {
            for(int j=i+1;j<s.size();j++) min.push_back(s[j]);
            break;
        }
    }
    if(min.size()==1) min.push_back('0');
    double time= stoi(hour);
    double c=stoi(min);
    c/=100.000;
    time+=c;
    return time;

}
int main()
{   int t ;cin>>t;
    cin.ignore();
    multimap<pair<string,double>,string>mp;
    while(t--){
        string s; getline(cin,s);
        bool tim=false,apm=false, sub=false;
        string time , day, subj;
        for(int i=0;i<s.size();i++){
            if(((s[i]>='0' && s[i]<='9')||s[i]==':' || s[i]=='.') && !tim){
                time.push_back(s[i]);
            }
            else {
                tim=true;
                for(int j=i;j<s.size();j++){
                    if(s[j]==' ') i++;
                    else break;
                } 
                if(!apm){
                    day.push_back(toupper(s[i])),i++;
                    day.push_back(toupper(s[i])),i++;
                }
                apm=true;
                subj.push_back(s[i]);
            }
        }
        double ti =timeToDouble(time);
        if(ti>=12) ti=-ti;
        mp.insert({{day,ti}, subj});
    }
    for(auto it:mp){
        cout<<abs(it.first.second)<<' '<<it.first.first<<' '<<it.second<<endl;
    }

    
    return 0;
}