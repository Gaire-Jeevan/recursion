#include <stdio.h>
int maze2(int n, int m){
    int rightWays = 0; // to avoid garbage value
    int downWays = 0;
    
    if(n==1 && m==1) return 1;
    if(n==1){ // cannot go down
        rightWays += maze2(n,m-1);
    }
    if(m==1){ //cannot go right
        downWays += maze2(n-1,m);        
    }
    if(n>1 && m>1){
       rightWays += maze2(n,m-1); 
       downWays += maze2(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
} 

int main()
{
    int n,m; //
    printf("Enter the no of rows in maze:- ");
    scanf("%d",&n);
    
    printf("Enter the no of column in maze:- ");
    scanf("%d",&m);
    
    int noOfWays = maze2(n,m); //1,1 as position of person is in 1x1 i.e. 1st row and 1st column
    printf("Total ways to go to n * m grid:- %d",noOfWays);
    return 0;
}

