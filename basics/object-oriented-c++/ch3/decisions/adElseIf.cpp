// demonstrates ELSE...IF with adventure program.
#include <iostream>
using namespace std;

int main() {
    char dir='a';
    int x=10, y=10;

    cout << "Type enter to quit\n";
    while (dir != '\r') {
        cout << "\nYour location is " << x << ", " << y;
        cout << "\nPress direction key (n, s, e, w): ";
        dir = getchar();
        if ( dir=='n' )
            y--;
        else if( dir=='s' )
            y++;
        else if( dir=='e' )
            x++;
        else if( dir=='w' )
            x--;
    }
return 0;
}