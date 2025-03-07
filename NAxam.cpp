#include<bits/stdc++.h>
using namespace std;
#define f(x) (x*x*x -x*x + 2 )
#define df(x) (3*x*x-2*x)

int main()
{
    float x0, x1;
    cin >> x0;
    do {
        x1 = x0 - f(x0) / df(x0);
        x0 = x1;
    } while(fabs(f(x1 )) > 0.01);
    cout << fixed << setprecision(3);
    cout <<x1 << endl;

   }
