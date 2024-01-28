#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, i, d;
    cin >> a;
    for( i = 1 ; i < a ; i++ ){
        if( a % i == 0 )
        b = i;
    }
    for( i = 1 ; i <= a ; i++ ){
        if( a % i == 0 ) {
            c = i;
            if( c != b ){
                d = c;
            }
        }
    }
    cout << d << " " << b;
}