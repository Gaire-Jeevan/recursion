#include <stdio.h>
void increasing(int x, int n){ //parametrized way as we solve using extra parameter
    if (x>n){ //base case
        return;
    }
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}

int main()
{
    int n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    
    increasing(1,n);
    
    return 0;
}

