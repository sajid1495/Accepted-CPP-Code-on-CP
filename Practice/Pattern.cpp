#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


   int n, num;
   scanf("%d",&n);
   num=1;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ", num++);
    }
    printf("\n");
   }
   
}


