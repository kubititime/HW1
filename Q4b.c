#include <stdio.h>

void calculateHomeValue(); 

int main() {
    calculateHomeValue();
    // comment
    return 0;
}

void calculateHomeValue() {
    int popularity, size;
    
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    int homeValue = (popularity * popularity * popularity + size * size) * 10000;
    
    printf("Home value is: %d\n", homeValue);
}
