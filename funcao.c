#include <stdio.h>
#include <locale.h>

void igual(int n)
{
    setlocale(LC_ALL, "Portuguese");
    if(n == 0){
        printf("%i � igual � 0.", n);
    }
    else{
        printf("%i n�o � igual � 0.", n);
    }
}

int main(void)
{
    int x = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &x);
    igual(x);
    return 0;
}