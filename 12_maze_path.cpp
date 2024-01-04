#include <stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0; // to avoid garbage value
    int downWays = 0;
    
    if(cc==ec && cr==er){
        return 1;
    }
    if (cr==er) {// only rightWays call
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){// only downWays call
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){ // if current row and column is smaller than both ending row and column
        rightWays += maze(cr,cc+1,er,ec);
        downWays +=maze(cr+1,cc,er,ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
} 

int main()
{
    int n,m; //
    printf("Enter the no of rows:- ");
    scanf("%d",&n);
    
    printf("Enter the no of column:- ");
    scanf("%d",&m);
    
    int noOfWays = maze(1,1,n,m); //1,1 as position of person is in 1x1 i.e. 1st row and 1st column
    printf("Total ways to go to n * m grid:- %d",noOfWays);
    return 0;
}

