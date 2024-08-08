#include <stdio.h>

int main(){

    int a[20][4];
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d",&a[i][j]);
        }
    }

    
    printf("Total marks obtained by each student : \n");
    int ans;
    for(int i = 0; i < 20; i++){
        ans = 0;
        for(int j = 1; j < 4; j++){
            ans += a[i][j];
        }
        printf("%d : %d\n",a[i][0],ans);
    }


    printf("The highest mark in each subject and the roll : \n");
    for(int i = 1; i < 4; i++){
        int max = a[0][i],roll = a[0][0];
        for(int j = 1; j < 20; j++){
            if(a[j][i] >= max){
                max = a[j][i];
                roll = a[j][0];
            }
        }
        printf("Highest marks of Sub%d : %d,Roll : %d\n",i,max,roll);
    }

    printf("The student who obtain the highest marks : \n");
    int max = 0,roll = a[0][0];
    for(int i = 0; i < 20; i++){
        ans = 0;
        for(int j = 1; j < 4; j++){
            ans += a[i][j];
        }
        if(ans > max){
            max = ans;
            roll = a[i][0];
        }
    }
    printf("Roll : %d\n",roll);

    printf("The student who obtain the 2nd highest marks : \n");
    int hm = max;
    max = 0,roll = a[0][0];
    for(int i = 0; i < 20; i++){
        ans = 0;
        for(int j = 1; j < 4; j++){
            ans += a[i][j];
        }
        
        if(ans == hm){
            continue;
        }
        else if(ans > max){
            max = ans;
            roll = a[i][0];
        }
    }
    
    printf("Roll : %d\n",roll);


    return 0;
}