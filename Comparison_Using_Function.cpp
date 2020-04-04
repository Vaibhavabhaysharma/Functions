/* You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
Input will contain four integers -a,b,c,d one in each line */

#include <iostream>
#include <cstdio>

using namespace std;
int max_of_four(int a, int b, int c, int d) {
    int max=0;
	if(a>max)
	  max=a;
	if(b>max) 
	  max=b;
    if(c>max)
	  max=c;
    if(d>max)
	  max=d;
    return max;
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int ans = max_of_four(a, b, c, d);
     cout << "\n"<<ans;
    
    return 0;
}
