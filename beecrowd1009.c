# include <stdio.h> 
int main() {
    double fixo, vendas, total;
    char nome;
    
    scanf(" %s %lf %lf", &nome, &fixo, &vendas);
    total = fixo + (vendas * 0.15);
    
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}