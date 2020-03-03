#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    while(cin >> str1 >> str2){
        if(str1 == "0" && str2 == "0") break;

        int carry = 0;
        int carryCount = 0;

        int len1 = str1.length();
        int len2 = str2.length();

        while(len1 != 0 || len2 != 0){
            int x = 0;
            int y = 0;

            if(len1 > 0){
                x = str1[len1 - 1] - '0';
                len1--;
            }
            if(len2 > 0){
                y = str2[len2 - 1] - '0';
                len2--;
            }

            int sum = x + y + carry;

            if(sum >= 10){
                carry = 1;
                carryCount++;
            }
            else carry = 0;
        }

        if(carryCount == 0) cout << "No carry operation." << endl;
        else if(carryCount == 1) cout << "1 carry operation." << endl;
        else cout << carryCount << " carry operations." << endl;
    }

    return 0;
}
