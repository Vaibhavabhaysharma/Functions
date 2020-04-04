/* You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
Input will contain four integers -a,b,c,d one in each line */

#include <iostream>
#include <cstdio>
using namespace std;
int gre;
int max_of_four(int a, int b, int c, int d) {
    if(a>b) {
        if(a>c) {
            if(a>d) {
                gre = a;
            } else 
            gre = d;
        } else if (c>d) {
            gre = c;
        } else
        gre = d;
    } else if (b>c) {
        if (b>d) {
            gre = b;
        } else 
        gre = d;
    } else if (c>d) {
        gre = c;
    } else 
    gre = d;
    return gre;
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int ans = max_of_four(a, b, c, d);
     cout << ans;
    
    return 0;
}
