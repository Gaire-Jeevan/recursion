#include <stdio.h>
// only single and double steps are allowed

int stair(int n){
    if(n==1 || n==2) return n; //if the number of stair is 1 or 2 then it return the 1 and 2 respectively
    
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}

int main()
{
    int n;
    printf("Enter the number of stair:- ");
    scanf("%d",&n);
    
    int ways = stair(n);
    printf("The total no. of ways are %d", ways);

    return 0;
}

