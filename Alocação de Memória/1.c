#include <stdio.h>
#include <stdlib.h>

int main(){

int sair=1;

do{
    float valorInicial=0;
    float juros=0;
    int i, totalMeses=0;
    float * meses;
    

    printf("\n Informe o valor inicial (R$): ");
    scanf("%f",&valorInicial);

    printf("\n Informe o total de meses: ");
    scanf("%d", &totalMeses);

    printf("\n Informe o percentual de juros: ");
    scanf("%f", &juros);


    meses=(float *) malloc (sizeof(float)* totalMeses) ;

    juros=(juros/100+1);
    meses[0]=valorInicial;

    for(i=1;i<totalMeses;i++){
        meses[i]=(meses[i-1]*juros);
    } 

    for(i=0;i<totalMeses;i++){
       printf("\n Mes %d: valor= R$%.2f",i+1,meses[i]);
    }

    return 0;
    scanf("%d",&sair);

}while(sair!=0);
}