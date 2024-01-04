#include <stdio.h>
int fact(int n){
    if(n==1 || n==0){ //base case
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number of which you want to take factorial:- ");
    scanf("%d",&n);
    
    int a = fact(n);
    printf("The factorial of %d is :- %d",n,a);

    return 0;
}

