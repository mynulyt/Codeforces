#include<stdio.h>
int main()
{
    int D,Q,R;
    scanf("%d %d %d", &D, &Q, &R);
    int ans=(D-R)/Q;
    printf("%d\n",ans);
    return 0;
}
