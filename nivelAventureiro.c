#include <stdio.h>

int main(){

    //Primeira carta
    char estado1;
    char codigoDaCarta1[3];
    char nomeDaCidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuriscos1;

    //Segunda carta
    char estado2;
    char codigoDaCarta2[3];
    char nomeDaCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuriscos2;

    //Inserir dados da carta 1
    printf("Informe o Estado da primeira carta(uma letra de A-H): \n");
    scanf(" %c", &estado1);
    printf("Informe o código da primeira carta (A letra do estado seguida de um numero de 01 a 04. Ex:A01): \n" );
    scanf("%s", codigoDaCarta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Informe a populacao da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Informe a área em km² da cidade: \n");
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib1);
    printf("Informe a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuriscos1);
    
    
    //Inserir dados da carta 2
    
    printf("\n -Agora insira os dados da segunda carta-\n");
    printf("Informe o Estado da SEGUNDA cidade(uma letra de A-H): \n");
    scanf(" %c", &estado2);
    printf("Informe o código da segunda carta (A letra do estado seguida de um numero de 01 a 04. Ex:A01): \n" );
    scanf("%s", codigoDaCarta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);
    printf("Informe a populacao da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Informe a área em km² da cidade: \n");
    scanf(" %f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib2);
    printf("Informe a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuriscos2);
  
    //Calculos da densidade populacional e do pib per capita

    //Carta 1
    float densidadePopulacional1 =(float) populacao1/ area1;
    float pibPerCap1 = (float) pib1/ populacao1;
    float inversodensidade1 = 1/densidadePopulacional1;
    float superPoder1 =(float) populacao1 + area1 + pib1 + pontosTuriscos1 + pibPerCap1 + inversodensidade1;

    //Carta 2

    float densidadePopulacional2 =(float) populacao2/ area2;
    float pibPerCap2 = (float) pib2/ populacao2;
    float inversodensidade2 = 1/densidadePopulacional2;
    float superPoder2 =(float) populacao2 + area2 + pib2 + pontosTuriscos2 + pibPerCap2 + inversodensidade2;
    
  int op ;
  printf("Escolha qual atributo será comparado: \n");
  printf("1 - População \n");
  printf("2 - Área \n");
  printf("3 - PIB \n");
  printf("4 - Número de pontos turísticos \n");
  printf("5 - Densidade demográfica \n");

  scanf(" %d", &op);

  switch (op) {
    case 1:


    printf("Comparação de Cartas(População): \n");
    printf("Carta 1 - %s : %d \n", nomeDaCidade1, populacao1);
    printf("Carta 2 - %s : %d \n", nomeDaCidade2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else if(populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    } else{
        printf("Resultado: Empate");
    }

      break;
    case 2:


      printf("Comparação de Cartas(Área): \n");
    printf("Carta 1 - %s : %f \n", nomeDaCidade1, area1);
    printf("Carta 2 - %s : %f \n", nomeDaCidade2, area2);

    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else if(area2 > area1){
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    } else{
        printf("Resultado: Empate");
    }

      break;
    case 3:


      printf("Comparação de Cartas(PIB): \n");
    printf("Carta 1 - %s : %f \n", nomeDaCidade1, pib1);
    printf("Carta 2 - %s : %f \n", nomeDaCidade2, pib2);

    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else if(pib2 > pib1){
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    } else{
        printf("Resultado: Empate");
    }

      break;
    case 4:

      printf("Comparação de Cartas(Numero de pontos turísticos): \n");
    printf("Carta 1 - %s : %d \n", nomeDaCidade1, pontosTuriscos1);
    printf("Carta 2 - %s : %d \n", nomeDaCidade2, pontosTuriscos2);

    if(pontosTuriscos1 > pontosTuriscos2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else if(pontosTuriscos2 > pontosTuriscos1){
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    } else{
        printf("Resultado: Empate");
    }

      break;
    case 5:

      printf("Comparação de Cartas(Densidade demográfica): \n");
    printf("Carta 1 - %s : %f \n", nomeDaCidade1, densidadePopulacional1);
    printf("Carta 2 - %s : %f \n", nomeDaCidade2, densidadePopulacional2);

    if(densidadePopulacional2 > densidadePopulacional1){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else if(densidadePopulacional1 > densidadePopulacional2){
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    } else{
        printf("Resultado: Empate");
    }

      break;
    default:
      printf("Opção inválida\n");
  }







  return 0;
}
    

