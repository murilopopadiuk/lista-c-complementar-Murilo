#include<stdio.h>
#include<stdlib.h>

int main(){
  
  char nome[10];
  char cidade[50];
    printf("qual sua cidade?: ");
    fgets(cidade, 50, stdin);
    printf(" sua cidade é: %s",cidade);
    
    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("o nome digitado foi: %s \n", nome);
    system("pause");
}
