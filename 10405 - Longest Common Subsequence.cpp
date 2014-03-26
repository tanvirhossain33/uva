#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int ary[1001][1001];
int main(){
    int len1,len2;
    string str1,str2;
    while(getline(cin, str1)){
        getline(cin, str2);
        len1 = str1.size();
        len2 = str2.size();
        for(int i = len1; i >= 0; i--){
            for(int j = len2; j >= 0; j--){
                if(i == len1 || j == len2){
                    ary[i][j] = 0;
                    continue;
                }
                if(str1[i] == str2[j]) 
					ary[i][j] = 1 + ary[i+1][j+1];
                else 
					ary[i][j] = max(ary[i+1][j], ary[i][j+1]);
            }
        }   
        printf("%d\n", ary[0][0]);
    }
    return 0;
}
