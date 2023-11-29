#include<stdio.h>
main()
{
    int i=3;
    printf("the value of i is %d ",i);
    printf("\nthe address of i is %u ",&i);
    printf("\nthe value of i is %d",*(&i));
}