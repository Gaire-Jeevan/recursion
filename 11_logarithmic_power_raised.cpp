#include <stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    int x = powerlog(a,b/2); //use this because pow(a,b)=pow(a,b/2) * pow(a,b/2)
                            //should be calculated for more number of times
    
    if(b%2==0){
        return x*x;
    }
    else{  //for odd i.e. for 7 in the power of 2 it runs 2 to the power 7/2 i.e is 3 in computer language whose sum of power is not equal to 7
        return x * x * a;
    }
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

