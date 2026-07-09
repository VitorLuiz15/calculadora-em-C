#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opcao = 0;
    char sn;
    float num1,num2;
    num1 =0;
    num2 = 0;
    //talvez seja mais interessante fazer uma função desse menu, pois irei puxar ele muitas vezes

do{
printf("===============================\n");
printf("    Calculadora Simples\n");
printf("===============================\n");
printf("Selecione uma operacao:\n");
printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
scanf("%d", &opcao);
if(opcao > 5){
    printf("opcao não disponível. Digite uma opção valida.\n");
}

if(opcao == 1){
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
     scanf("%f", &num2);
     printf("Resultado: %.0f + %.0f = %.0f\n",num1,num2, num1 + num2);
}
if(opcao == 2){
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
     scanf("%f", &num2);
     printf("Resultado: %.0f - %.0f = %.0f\n",num1,num2, num1 - num2);
}
if(opcao == 3){
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
     scanf("%f", &num2);

}


printf("Deseja realizar outra operacao? (s/n):\n");
scanf(" %c", &sn);
}while(sn == 's' || sn == 'S');
 printf("Obrigado por usar a calculadora! Ate a proxima.");










return 0;}
