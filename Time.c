#include<stdio.h>
int main()
{
    int totalsec , mins , hrs ,sec ;
    printf("Enter time is seconds :");
    scanf("%d",&totalsec);
    hrs = totalsec/3600;
    mins = (totalsec%3600)/60;
    sec= totalsec%60;
    printf("The time is :- %.2d:%.2d:%.2d\n", hrs,mins,sec);
    return 0;
}
