#include <stdio.h>

int main() {
    float monthly, hra, tada, other, annual;
    
    printf("Enter basic salary \n");
    scanf("%f", &monthly);

    hra = monthly * 20 / 100;
    tada = monthly * 15 / 100;
    other = monthly * 5 / 100;
    
    monthly = monthly + hra + tada + other;
    annual = monthly * 12;
    printf("The gross income is -> %f\n", annual);
    return 0;
}
