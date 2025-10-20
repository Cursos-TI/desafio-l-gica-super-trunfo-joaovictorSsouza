#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste João Victor

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

int menu_interativo(){

    int opc = 0;
    printf("ESCOLHA O ATRIBUTO DO CONFRONTO:\n");
    printf("----------------------------------------------\n");
    printf("1) POPULAÇÃO\n");
    printf("2) ÁREA\n");
    printf("3) PIB\n");
    printf("4) NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5) DENSIDADE DEMOGRÁFICA\n");
    printf("6) SAIR DO CONFRONTO\n");
    printf("----------------------------------------------\n");
    printf("QUAL ATRIBUTO DESEJA PARA O CONFRONTO? ");
    scanf("%d", &opc);

    return opc;
   
}


int main() {
    // Definição das variaveis: 
    char estado1, estado2;
    char cod1[50], cod2[50];
    char nome1[50], nome2[50];
    int popu1, popu2, opc;
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

    // Criação do duelo das cartas
    printf(" CONFONTRO DAS CARTAS \n");

    //Divisão
    printf("----------------------------------------------\n");

    // Menu interativo usando switch
    opc = menu_interativo();

    switch (opc) //Trabalho de opções dentro do menu
    {
    case 1: //população
        printf("NOME: %s | POPULAÇÃO: %d X NOME: %s | POPULAÇÃO: %d \n", nome1, popu1, nome2, popu2);
        if (popu1 > popu2){
            printf("%s VENCEU!\n", nome1);
        }else if (popu2 > popu1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("EMPATE!\n");
        }
        break;

    case 2://Area
         printf("NOME: %s | ÁREA: %f X NOME: %s | ÁREA: %f \n", nome1, area1, nome2, area2);
         if (area1 > area2){
            printf("%s VENCEU!\n", nome1);
        }else if (area2 > area1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("EMPATE!\n");
        }
        break;

    case 3://PIB
         printf("NOME: %s | PIB: %f X NOME: %s | PIB: %f \n", nome1, pib1, nome2, pib2);
         if (pib1 > pib2){
            printf("%s VENCEU!\n", nome1);
        }else if (pib2 > pib1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("EMPATE!\n");
        }
        break;

    case 4://NUMERO DE PONTOS TURISTICOS
         printf("NOME: %s | PONTOS TURISTICOS: %d X NOME: %s | PONTOS TURISTICOS: %d \n", nome1, npt1, nome2, npt2);
         if (npt1 > npt2){
            printf("%s VENCEU!\n", nome1);
        }else if (npt2 > npt1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("EMPATE!\n");
        }
        break;

    case 5://Densidade 
         printf("NOME: %s | DENSIDADE: %f X NOME: %s | DENSIDADE: %f \n", nome1, densidade1, nome2, densidade2);
         if (densidade1 < densidade2){
            printf("%s VENCEU!\n", nome1);
        }else if (densidade2 < densidade1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("EMPATE!\n");
        }
        break;

    case 6://Sair
        printf("FECHANDO O CONFRONTO...\n");
        break;
        
    default:
        break;
    }
}

