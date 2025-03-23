#include<stdio.h>
int main(){
    int popularity,size,homeValue;

    printf("Enter popularity of home:");

    scanf("%d",&popularity);

    printf("Enter size of home:");

    scanf("%d",&size);

    homeValue=( popularity*popularity*popularity + size*size ) * 10000;

    printf("The value of home is %d TL",homeValue);








    return 0;
}