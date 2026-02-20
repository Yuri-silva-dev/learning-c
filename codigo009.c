#include <stdio.h>

int main() {
    int number, hours;
    float value, result;
    scanf(" %d %d %f", &number, &hours, &value);
    
    result = hours * value;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, result);
    
    return 0;
}