#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char str;
    while( scanf("%c", &str) == 1){
        if(str == '1')
            cout << '`';
        if(str == '2')
            cout <<'1';
        if(str == '3')
            cout << '2';
        if(str == '4')
            cout << '3';
        if(str == '5')
            cout << '4';
        if(str == '6')
            cout << '5';
        if(str == '7')
            cout << '6';
        if(str == '8')
            cout << '7';
        if(str == '9')
            cout << '8';
        if(str == '0')
            cout << '9';
        if(str == '-')
            cout << '0';
        if(str == '=')
            cout << '-';
        if(str == 'W')
            cout << 'Q';
        if(str == 'E')
            cout << 'W';
        if(str == 'R')
            cout << 'E';
        if(str == 'T')
            cout << 'R';
        if(str == 'Y')
            cout << 'T';
        if(str == 'U')
            cout << 'Y';
        if(str == 'I')
            cout << 'U';
        if(str == 'O')
            cout << 'I';
        if(str == 'P')
            cout << 'O';
        if(str == '[')
            cout << 'P';
        if(str == ']')
			cout << '[';
        if(str == '\\')
            cout << ']';
        if(str == 'S')
            cout << 'A';
        if(str == 'D')
            cout << 'S';
        if(str == 'F')
            cout << 'D';
        if(str == 'G')
            cout << 'F';
        if(str == 'H')
            cout << 'G';
        if(str == 'J')
            cout << 'H';
        if(str == 'K')
            cout << 'J';
        if(str == 'L')
            cout << 'K';
        if(str == ';')
            cout << 'L';
        if(str == '\'')
            cout << ';';
        if(str == 'X')
            cout << 'Z';
        if(str == 'C')
            cout << 'X';
        if(str == 'V')
            cout << 'C';
        if(str == 'B')
            cout << 'V';
        if(str == 'N')
            cout << 'B';
        if(str == 'M')
            cout << 'N';
        if(str == ',')
            cout << 'M';
        if(str == '.')
            cout << ',';
        if(str == '/')
            cout << '.';
        if(str == ' ')
            cout << ' ';
        if(str == '\n')
            cout << '\n';
    }
    return 0;
}
