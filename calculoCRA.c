#include <stdio.h>
#include <stdlib.h>

int main (void){

    int credDisciplina, nPeriodo, nMaterias, i, j, somaCredito, somaCreditoAcumulado = 0;
    float notaDisciplina, CR, soma, somaAcumulado = 0, CRa;

    printf("Esse programa será usado para o Coeficiente de Rendimento Acumulado\n");

    printf("\nQuantos períodos você possui? ");
    scanf("%d", &nPeriodo);

    printf("\nPara as notas(Grau), utilize ponto ao invés de vírgula (ex: 5.5)");

    for (i = 1; i <= nPeriodo; i++ ){
        printf("\nQuantas matérias você fez no %d período? ", i);
        scanf("%d", &nMaterias);

        
        somaCredito = 0;
        soma = 0;
        for (j = 1; j <= nMaterias; j++){
            printf("\nQual o crédito(CrR) da %dº matéria? ", j);
            scanf("%d", &credDisciplina);

            printf("\nQual foi sua nota(Grau) nesta disciplina? ");
            scanf("%f", &notaDisciplina);

            soma += (credDisciplina * notaDisciplina);
            somaCredito += credDisciplina;
            
            somaCreditoAcumulado += credDisciplina;
            somaAcumulado += (credDisciplina * notaDisciplina);
        }

        CR = soma/somaCredito;
        CRa = somaAcumulado/somaCreditoAcumulado;

        printf("\nSeu CR no periodo %d é: %f", i, CR);
        printf("\nSeu CRa acumulado é: %f\n", CRa);

    }



}