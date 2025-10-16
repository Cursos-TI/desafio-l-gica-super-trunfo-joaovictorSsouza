#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste João Victor Azevedo de Souza.

float Calculo_super(int popu, float area, float pib, int npt, float densi, float ppc ){
    float densi_inversa = 1 / densi;
    float resultado = (float)popu + (float)npt + area + pib + densi + ppc;
    return resultado;
}

float densidade(int popu, float area){
    float densidade = popu/area;
    return densidade;
}

float pibpercatita(float pib, int popu){
    float resultado = pib / popu;
    return resultado;
}

int main() {
    // Definição das variaveis: 
    char estado1, estado2;
    char cod1[50], cod2[50];
    char nome1[50], nome2[50];
    int popu1, popu2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2, ppc1, ppc2;
    float resultadoC1, resultadoC2;

    //Titulo do Jogo
    printf("----------------------------------------------\n");
    printf("                 SUPER TRUNFO                 \n");
    printf("----------------------------------------------\n");

    // Cadastro da Carta 1:
    printf("Carta 1:\n");

    printf("Informe qual o estado:\n");
    scanf("%c", &estado1);

    printf("Informe o Codigo:\n");
    scanf("%s", cod1);

    printf("Informe a cidade:\n");
    scanf("%s", nome1);

    printf("Informe o numero da população:\n");
    scanf("%d", &popu1);

    printf("informe a área:\n");
    scanf("%f", &area1);

    printf("Informe o PIB:\n");
    scanf("%f", &pib1);

    printf("Informe o numero de ponto de turismo:\n");
    scanf("%d", &npt1);

    // Espaço para dividir os cadastro
    printf("----------------------------------------------\n");

    // Cadastro da Carta2:
    printf("Carta 2:\n");

    printf("Informe qual o estado:\n");
    scanf(" %c", &estado2);

    printf("Informe o codigo:\n");
    scanf("%s", cod2);

    printf("Informe a cidade:\n");
    scanf("%s", nome2);

    printf("Informe a população:\n");
    scanf("%d", &popu2);

    printf("Informe a área:\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &npt2);


    //calculo de densidade populacional:
    densidade1 = densidade(popu1, area1);
    densidade2 = densidade(popu2, area2);

    // calculo de PIB per Capita:
    ppc1 = pibpercatita(pib1, popu1);
    ppc2 = pibpercatita(pib2, pib2);


    // Divisão 
    printf("----------------------------------------------\n");

    // Exibição dos Dados da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", popu1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de ponto turistico: %d\n", npt1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", ppc1);

    //Divisão
    printf("----------------------------------------------\n");

    // Exibição dos Dados da Carta 2: 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", popu2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de ponto turistico: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", ppc2);

    //Divisão
    printf("----------------------------------------------\n");

    // Chamando a função do super poder
        resultadoC1 = Calculo_super(popu1, area1, pib1, npt1, densidade1, ppc1);
        resultadoC2 = Calculo_super(popu2, area2, pib2, npt2, densidade2, ppc2);
        
    // Divisão
    printf("----------------------------\n");
    // Criação do duelo das cartas
    printf("   COMPARAÇÕES DAS CARTAS   \n");
    // Divisão
    printf("----------------------------\n");

    printf("CARTA 01 = 1 >>> CARTA 02 = 0\n");

    // Divisão
    printf("----------------------------\n");

    // comparação das cartas
    printf("População: %d\n", popu1 > popu2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Ponto Turistico: %d\n", npt1 > npt2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", ppc1 > ppc2);
    printf("Super poder: %d\n", resultadoC1 > resultadoC2);

    // Divisão
    printf("----------------------------\n");

    // Criação do duelo das cartas
    printf(" BATALHA DOS PONTOS TURISTICOS \n");

    // Divisão
    printf("----------------------------\n");

    //Enunciado da batalha
    printf("%s: %d Pontos Turisticos X %s: %d Pontos Turisticos\n", nome1, npt1, nome2, npt2);

    // Divisão
    printf("----------------------------\n");

    if (npt1 > npt2){
        printf("CARTA 01 (%s): VENCEU! PARABÉNS! \n", nome1);
    }else{
        printf("CARTA 02 (%s): VENCEU! PARABÉNS! \n", nome2);
    }

    // Divisão
    printf("----------------------------\n");
    

    return 0;
}

