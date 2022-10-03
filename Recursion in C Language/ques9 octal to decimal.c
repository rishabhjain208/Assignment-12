#include<stdio.h>
void printnat(int n)
{
    if(n==0)
    return;
    else
        printnat(n/8);
     printf("%d",n%8);
}
int main()
{
    int n=670;
    printf("octal number  ");
    printnat(n);
    return 0;
}








