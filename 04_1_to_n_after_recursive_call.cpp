#include <stdio.h>
void increasing(int n){
    if (n==0){ //base case
        return; //it means all the below code doesn't work and return to previous call
    }
    increasing(n-1);
    printf("%d\n",n); //printing after recursive call
    return;
}

int main()
{
    int n;
    printf("Enter the number:- ");
    scanf("%d" ,&n);
    
    increasing(n);
    
    return 0;
}

