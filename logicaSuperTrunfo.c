#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Estados
// Logica
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste João Victor

// Função para calculo da densidade
float densidade(int popu, float area){
    return (float)popu/area;
}

// Função para calculo do pib per capita
float pibpercatita(float pib, int popu){
    return (pib * 1e9) / (float)popu;
}

// Função do designer do menu
int menu_interativo(){

    int opc = 0;
    printf("----------------------------------------------\n");
    printf("       ESCOLHA O ATRIBUTO DO CONFRONTO:       \n");
    printf("----------------------------------------------\n");
    printf("1) POPULAÇÃO\n");
    printf("2) ÁREA\n");
    printf("3) PIB\n");
    printf("4) NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5) DENSIDADE DEMOGRÁFICA\n");
    printf("6) SAIR DO CONFRONTO\n");
    printf("----------------------------------------------\n");
    printf("    QUAL ATRIBUTO DESEJA PARA O CONFRONTO?    ");
    scanf("%d", &opc);
    printf("----------------------------------------------\n");

    return opc;
   
}

// Função do switch das opções
void opcao(int opc, char nome1[30], int popu1, float area1, float pib1, int npt1, float densi1, float ppc1, char nome2[30], int popu2, float area2, float pib2, int npt2, float densi2, float ppc2){

    switch (opc) //Trabalho de opções dentro do menu
    {
    case 1: //população
        printf("    DUELO DE POPULAÇÃO    \n");
        printf("NOME: %s  POPULAÇÃO: %d   |X|   NOME: %s  POPULAÇÃO: %d \n", nome1, popu1, nome2, popu2);
        if (popu1 > popu2){
            printf("%s VENCEU!\n", nome1);
        }else if (popu2 > popu1){
            printf("%s VENCEU!\n", nome2);
            
        }else{
            printf("    EMPATE!    \n");
        }
        break;

    case 2://Area
        printf("    DUELO DE AREAS    \n");
         printf("NOME: %s | ÁREA: %f X NOME: %s | ÁREA: %f \n", nome1, area1, nome2, area2);
         if (area1 > area2){
            printf("%s VENCEU!\n", nome1);
            
        }else if (area2 > area1){
            printf("%s VENCEU!\n", nome2);
           
        }else{
            printf("    EMPATE!    \n");
        }
        break;

    case 3://PIB
        printf("    DUELO DE PIB    \n");
         printf("NOME: %s | PIB: %f X NOME: %s | PIB: %f \n", nome1, pib1, nome2, pib2);
         if (pib1 > pib2){
            printf("%s VENCEU!\n", nome1);
            
        }else if (pib2 > pib1){
            printf("%s VENCEU!\n", nome2);
            
        }else{
            printf("    EMPATE!    \n");
        }
        break;

    case 4://NUMERO DE PONTOS TURISTICOS
        printf("    DUELO DOS PONTOS TURISTICOS    \n");
         printf("NOME: %s | PONTOS TURISTICOS: %d X NOME: %s | PONTOS TURISTICOS: %d \n", nome1, npt1, nome2, npt2);
         if (npt1 > npt2){
            printf("%s VENCEU!\n", nome1);
           
        }else if (npt2 > npt1){
            printf("%s VENCEU!\n", nome2);
            
        }else{
            printf("    EMPATE!    \n");
        }
        break;

    case 5://Densidade 
        printf("    DUELO DA DENSIDADE    \n");
         printf("NOME: %s | DENSIDADE: %f X NOME: %s | DENSIDADE: %f \n", nome1, densi1, nome2, densi2);
         if (densi1 < densi2){
            printf("%s VENCEU!\n", nome1);
        }else if (densi2 < densi1){
            printf("%s VENCEU!\n", nome2);
        }else{
            printf("    EMPATE!    \n");
        }
        break;

    case 6://Sair
        printf("FECHANDO O CONFRONTO...\n");
        break;

    default:
        printf("DIGITOU UMA OPÇÃO INVALIDA\n");
        break;
    }

}

// função com switch para tabela de combate final
float combate_final(int opc, char atributo[30],
    char cartaname1[30], char nome1[30],
    char cartaname2[30], char nome2[30],
    float *cartavalue1, float *cartavalue2,
    int *popu1, int *popu2,
    float *area1, float *area2,
    float *pib1, float *pib2,
    int *turistico1, int *turistico2,
    float *densidade1, float *densidade2){

 switch (opc)
    {
    case 1:
        strcpy(atributo, "POPULAÇÃO");
        strcpy(cartaname1, nome1);
        strcpy(cartaname2, nome2);
        *cartavalue1 = *popu1;
        *cartavalue2 = *popu2;
        break;
    case 2:
        strcpy(atributo, "AREA");
        strcpy(cartaname1, nome1);
        strcpy(cartaname2, nome2);
        *cartavalue1 = *area1;
        *cartavalue2 = *area2;
        break;
    case 3:
        strcpy(atributo, "PIB");
        strcpy(cartaname1, nome1);
        strcpy(cartaname2, nome2);
        *cartavalue1 = *pib1;
        *cartavalue2 = *pib2;
        break;
    case 4:
        strcpy(atributo, "TURISTICO");
        strcpy(cartaname1, nome1);
        strcpy(cartaname2, nome2);
        *cartavalue1 = *turistico1;
        *cartavalue2 = *turistico2;
        break;
    case 5:
        strcpy(atributo, "DENSIDADE");
        strcpy(cartaname1, nome1);
        strcpy(cartaname2, nome2);
        *cartavalue1 = *densidade1;
        *cartavalue2 = *densidade2;
        break;

    default:
        break;
    }



}

// função que exibir detalhes das cartas
void exibir(char estado[2], char cod[30], char nome[30], int popu, float area, float pib, int npt, float densi, float ppc){

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", cod);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", popu);
    printf("Área: %2f\n", area);
    printf("PIB: %2f\n", pib);
    printf("Numero de ponto turistico: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", ppc);

}

// função que cadastra as cartas
void cadastrar(char estado[2], char cod[30], char nome[30], int *popu, float *area, float *pib, int *npt){

    printf("Informe qual o estado:\n");
    scanf("%s", estado);

    printf("Informe o Codigo:\n");
    scanf("%s", cod);

    printf("Informe a cidade:\n");
    scanf("%s", nome);

    printf("Informe o numero da população:\n");
    scanf("%d", popu);

    printf("informe a área:\n");
    scanf("%f", area);

    printf("Informe o PIB:\n");
    scanf("%f", pib);

    printf("Informe o numero de ponto de turismo:\n");
    scanf("%d", npt);

}


int main() {
    // Declarando variaveis: 
    char estado1[2], estado2[2];
    char cod1[30], cod2[30];
    char nome1[30], nome2[30];
    int popu1, popu2, opc1, opc2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2, ppc1, ppc2;
    float super_forca1, super_forca2;
    char atributo1[30] = "", atributo2[30] = "", cartaname1[30], cartaname2[30], cartaname3[30], cartaname4[30];
    float cartavalue1, cartavalue2, cartavalue3, cartavalue4;
    float tot1, tot2;

    //Titulo do Jogo
    printf("----------------------------------------------\n");
    printf("                 SUPER TRUNFO                 \n");
    printf("----------------------------------------------\n");

    // Cadastro da Carta 1:
    printf("Carta 1:\n");

    // Chamando a função para cadastro
    cadastrar(estado1, cod1, nome1, &popu1, &area1, &pib1, &npt1);

    // Espaço para dividir os cadastro
    printf("----------------------------------------------\n");

    // Cadastro da Carta2:
    printf("Carta 2:\n");

    // Chamando a função para cadastro
    cadastrar(estado2, cod2, nome2, &popu2, &area2, &pib2, &npt2);


    //calculo de densidade populacional:
    densidade1 = densidade(popu1, area1);
    densidade2 = densidade(popu2, area2);

    // calculo de PIB per Capita:
    ppc1 = pibpercatita(pib1, popu1);
    ppc2 = pibpercatita(pib2, popu2);


    // Divisão 
    printf("----------------------------------------------\n");

    // Exibição dos Dados da Carta 1:
    printf("CARTA 1:\n");
    exibir(estado1, cod1, nome1, popu1, area1, pib1, npt1, densidade1, ppc1);

    //Divisão
    printf("----------------------------------------------\n");

    // Exibição dos Dados da Carta 2: 
    printf("CARTA 2:\n");
    exibir(estado2, cod2, nome2, popu2, area2, pib2, npt2, densidade2, ppc2);


    //Divisão
    printf("----------------------------------------------\n");


    // Criação do duelo das cartas
    printf("             CONFONTRO DAS CARTAS             \n");

    //Divisão
    printf("----------------------------------------------\n");

    // Menu interativo usando switch
    opc1 = menu_interativo();
    opcao(opc1, nome1, popu1, area1, pib1, npt1, densidade1, ppc1, nome2, popu2, area2, pib2, npt2, densidade2, ppc2);
    combate_final(opc1, atributo1,
        cartaname1, nome1,
        cartaname2, nome2,
        &cartavalue1, &cartavalue2,
        &popu1, &popu2,
        &area1, &area2,
        &pib1, &pib2,
        &npt1, &npt2,
        &densidade1, &densidade2); //Chamando a função para o combate final

    opc2 = menu_interativo();

    if (opc2 == opc1){ // fazendo comparação para não haver repetição de opção
        printf("VOCÊ ESCOLHEU O MESMO ATRIBUTO, TENTE NOVAMENTE\n");
        opc2 = menu_interativo();
        opcao(opc2, nome1, popu1, area1, pib1, npt1, densidade1, ppc1, nome2, popu2, area2, pib2, npt2, densidade2, ppc2);
        combate_final(opc2, atributo2,
        cartaname3, nome1,
        cartaname4, nome2,
        &cartavalue3, &cartavalue4,
        &popu1, &popu2,
        &area1, &area2,
        &pib1, &pib2,
        &npt1, &npt2,
        &densidade1, &densidade2);//Chamando a função para o combate final
    }else{
        opcao(opc2, nome1, popu1, area1, pib1, npt1, densidade1, ppc1, nome2, popu2, area2, pib2, npt2, densidade2, ppc2);
        combate_final(opc2, atributo2,
        cartaname3, nome1,
        cartaname4, nome2,
        &cartavalue3, &cartavalue4,
        &popu1, &popu2,
        &area1, &area2,
        &pib1, &pib2,
        &npt1, &npt2,
        &densidade1, &densidade2);//Chamando a função para o combate final
    }

    // Calculando o total dos atribulos das cartas
    tot1 = cartavalue1 + cartavalue3; 
    tot2 = cartavalue2 + cartavalue4;
   


    //Exibição do confroto final
    printf("----------------------------------------------\n");
    printf("                 COMBATE FINAL                \n");
    printf("----------------------------------------------\n");

    printf("                  %s |X| %s\n                  ", nome1, nome2);
    printf("----------------------------------------------\n");
    printf("   1º ATRIBUTO: %s |X| 2º ATRIBUTO: %s    \n", atributo1, atributo2);
    printf("----------------------------------------------\n");
    printf("1ª atributo: %s - %.2F\n", cartaname1, cartavalue1);
    printf("1ª atributo: %s - %.2F\n", cartaname2, cartavalue2);
    printf("----------------------------------------\n");
    printf("2º atributo: %s - %.2f \n", cartaname3, cartavalue3);
    printf("2º atributo: %s - %.2f \n", cartaname4, cartavalue4);
    printf("----------------------------------------\n");
    printf("VALOR TOTAL DOS ATRIBUTOS\n");
    printf("----------------------------------------\n");
    printf("%s -  total: %2.f || %s - total: %2.f\n", nome1, tot1, nome2, tot2);
    printf("-----------------------------------------\n");


    if (tot1 > tot2){
        printf("      A CARTA 1 VENCEU!!!      \n");
    }else if(tot2 > tot1){
        printf("      A CARTA 2 VENCEU!!!      \n");
    }else{
        printf("      EMPATE!!!      \n");
    }
    printf("-----------------------------------------\n");


    

 
    

    
}

