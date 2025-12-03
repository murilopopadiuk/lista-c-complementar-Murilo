#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, resposta;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    resposta = (nota1 + nota2)/2;
    printf("O valor da nota é: %.2f\n", resposta);
    if(resposta >= 7){
    printf("aprovado");
    }else{
    printf("reprovado");
    }
    system("pause");
    return 0;
}