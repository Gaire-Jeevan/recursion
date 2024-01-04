#include <stdio.h>
void tower(int n, char s, char h, char d){ // n=no of discs   s=source  h=helper   d=destinatiion
    if(n==0) return;
    tower(n-1,s,d,h); //as we have to move (n-1) disc to helping rod so helping rod become destinatiion rod and destinatiion rod beceome helping rod 
    
    printf("%c-->%c\n",s,d); // moving the last disc to source to destination
    
    tower(n-1,h,s,d); //move discs from helping rod to destination rod with the help of source rod
    return;
}
int main()
{
    int n;
    printf("enter no of discs:- ");
    scanf("%d",&n);
    
    tower(n,'A', 'B', 'C');

    return 0;
}

