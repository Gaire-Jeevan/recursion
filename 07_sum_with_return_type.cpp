#include <stdio.h>
int sum(int n){
    if(n==1){ //base case is 1 because there is return 1 so 1 will also add in function
        return 1;
    }
    int s= n + sum(n-1);
    
    return s;
} 

int main()
{
    int n;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    
    int s=sum(n);
    printf("%d",s);

    return 0;
}

