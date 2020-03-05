#include <iostream>
using namespace std;

int getUglyNum(int n){
    int uglyNum[1500];
    int i2 = 0;
    int i3 = 0;
    int i5 = 0;

    int next2mul = 2, next3mul = 3, next5mul = 5;
    int next = 1;

    uglyNum[0] = 1;

    for(int i = 1; i < n; i++){
        next = min(next2mul, min(next3mul, next5mul));
        uglyNum[i] = next;

        if(next == next2mul){
            i2++;
            next2mul = uglyNum[i2]*2;
        }
        if(next == next3mul){
            i3++;
            next3mul = uglyNum[i3]*3;
        }
        if(next == next5mul){
            i5++;
            next5mul = uglyNum[i5]*5;
        }
    }
    return next;
}

int main(){

    int result = getUglyNum(1500);

    cout << "The 1500'th ugly number is " << result << "." << endl;
    return 0;
}
