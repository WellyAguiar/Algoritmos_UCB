#include <stdio.h>

int main (){
    int numero1;
    int numero2;
    char operacao;

    printf("Insira uma operacao: \n * para multiplicacao \n / para divisao \n + para adicao e \n - para subtracao\n");
    scanf("%c", &operacao);

    printf("Insira dois numeros\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    if(operacao == '+'){
        printf("Resultado: %d\n", numero1 + numero2);
    } 
    else if(operacao == '-'){
        printf("Resultado: %d\n", numero1 - numero2);
    } 
    else if(operacao == '*'){
        printf("Resultado: %d\n", numero1 * numero2);
    } 
    else if(operacao == '/'){
        printf("Resultado: %d\n", numero1 / numero2);
    }
    else if(operacao == '%'){
        printf("Resultado: %d\n", numero1 % numero2);
    } 
    else {
        printf("Operacao invalida\n");
    }

    
    printf("Operacao: %c\n", operacao);

    return 0;
}