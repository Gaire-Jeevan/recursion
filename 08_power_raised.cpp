#include <stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int p = a * power(a,b-1); //recursion relation
    return p;
} 

int main()
{
    int a,b;
    printf("Enter the value of base and exponent:- ");
    scanf("%d %d",&a,&b);
    
    int po=power(a,b);
    printf("%d raised to the power %d is:- %d",a,b,po);
    return 0;
}

