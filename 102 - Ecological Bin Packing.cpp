#include <cstdio>
#include <cstring>
#include <climits>
using namespace std;

int main(){
    unsigned int ary[9];

    while(scanf("%d %d %d %d %d %d %d %d %d", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4], &ary[5], &ary[6], &ary[7], &ary[8]) != EOF){

        unsigned int total;
        unsigned min = INT_MAX;
        char minimum[4];

        // B G C B G C B G C
        // 0 1 2 3 4 5 6 7 8

        //BCG
        total = ary[3] + ary[6] + ary[2] + ary[8] + ary[1] + ary[4];
        if(total < min){
            min = total;
            strcpy(minimum, "BCG");
        }

        //BGC
        total = ary[3] + ary[6] + ary[1] + ary[7] + ary[2] + ary[5];
        if(total < min){
            min = total;
            strcpy(minimum, "BGC");
        }

        //CBG
        total = ary[5] + ary[8] + ary[0] + ary[6] + ary[1] + ary[4];
        if(total < min){
            min = total;
            strcpy(minimum, "CBG");
        }

        //CGB
        total = ary[5] + ary[8] + ary[1] + ary[7] + ary[0] + ary[3];
        if(total < min){
            min = total;
            strcpy(minimum, "CGB");
        }


        //GBC
        total = ary[4] + ary[7] + ary[0] + ary[6] + ary[2] + ary[5];
        if(total < min){
            min = total;
            strcpy(minimum, "GBC");
        }

        //GCB
        total = ary[4] + ary[7] + ary[2] + ary[8] + ary[0] + ary[3];
        if(total < min){
            min = total;
            strcpy(minimum, "GCB");
        }







        printf("%s %ld\n", minimum, min);

    }

    return 0;
}
