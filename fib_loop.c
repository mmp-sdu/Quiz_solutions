#include<stdio.h>
int main()
{
    int x1=0, x2=1, x3,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        printf("%d ",x1);
        x3 = x1+ x2;
        x1=x2;
        x2=x3;
    }
}
