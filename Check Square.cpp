#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    bool isPerfect = false;
    for(int i = 1; i*i <=n ;i++){
        if( i*i == n){
            printf("%d is a perfect square :\n", n);
            isPerfect = true;
        }
    }
    if(!isPerfect) printf("%d is not square :\n", n);
    return 0;
}

