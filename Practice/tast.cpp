#include<bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& matrix){
        for(int i=0 ; i < matrix.size()-1; i++)
            for(int j = 0; j < matrix[i].size()-1; j++)
                if(matrix[i][j] != matrix[i+1] [j+1])
                    return false;
        
        return true;
}
int main(){
    vector<vector<int>> mat{{1,2},{3,4}};
    cout << isToeplitzMatrix(mat);
}
