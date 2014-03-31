#include <iostream>
#include <cmath>
using namespace std;
int main()
{   int i,cases;
    long long int s,sum;
	cin >> cases;
    for(i = 0; i < cases; i++){
		cin >> sum;
		s = ((-1+sqrt((double)1+8*sum)) / 2.0);
		cout << s << endl;
    }
    return 0;
}
