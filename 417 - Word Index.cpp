#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
int main(){
	map <string,int> mp;
	int i,j,k,m,n;
    int count = 1;
    string s,s1,s2,s3,s4,s5,str;
	string a="abcdefghijklmnopqrstuvwxyz";
	for(i = 0; i < 26; i++){
        s = a[i];
        mp[s] = count;
        count++;
    }
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            s1 = a[i];
            s2 = a[j];
            s = s1+s2;
            mp[s] = count;
            count++;
        }
    }
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                s1 = a[i];
                s2 = a[j];
                s3 = a[k];
                s = s1+s2+s3;
                mp[s] = count;
                count++;
            }
        }
    }
	for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                for(m = k+1; m < 26; m++){
					s1 = a[i];
                    s2 = a[j];
					s3 = a[k];
                    s4 = a[m];
			        s = s1+s2+s3+s4;
					mp[s] = count;
					count++;
                }
            }
        }
    }
    for(i = 0; i < 26; i++){
        for(j = i+1; j < 26; j++){
            for(k = j+1; k < 26; k++){
                for(m = k+1; m < 26; m++){
                    for(n = m+1; n < 26; n++){
						s1 = a[i];
						s2 = a[j];
						s3 = a[k];
						s4 = a[m];
						s5 = a[n];
						s = s1+s2+s3+s4+s5;
						mp[s] = count;
						count++;
					}
                }
            }
        }
    }
	while(getline(cin,str))
		cout << mp[str] << endl;
	return 0;
}
