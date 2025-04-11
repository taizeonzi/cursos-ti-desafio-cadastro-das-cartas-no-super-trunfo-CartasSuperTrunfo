//TEMA 2 - Nível mestre
//Implementando Comparações Avançadas com Atributos Múltiplos no Super Trunfo

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char codigoCarta1[4], codigoCarta2[4];
    char estado1[50], estado2[50];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTur1, pontosTur2, rodada1, rodada2, resultado1, resultado2;
    float area1, area2, pib1, pib2, densiPop1, densiPop2, pibPerCapita1, pibPerCapita2, superpoder1, superpoder2;
    float valorCarta1Rodada1 = 0, valorCarta2Rodada1 = 0;
    float valorCarta1Rodada2 = 0, valorCarta2Rodada2 = 0;

    printf("Cadastre a Carta 1:\n");
    printf("Digite o Estado:"); //entrada de dados pelo usuário
    scanf("%s", estado1); // captura do que foi informado

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:");
    getchar(); // Limpa o buffer antes de fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Usa fgets para strings com espaço
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área (km²):");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTur1);

    //cálculos carta 1:
    densiPop1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTur1 + pibPerCapita1 + (1.0 / densiPop1);

    //cálculos carta 2:
    densiPop2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTur2 + pibPerCapita2 + (1.0 / densiPop2);

    printf("\n==============================================================\n");
    printf("                   Carta cadastrada com sucesso!                \n"); //confirmação após carta ser cadastrada
    printf("                           Carta 1:\n"                             ); //apresentação da carta
    printf("\n==============================================================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); //exibe valores unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");

    printf("Cadastre a Carta 2:\n"); // cadastro da segunda carta
    printf("Digite o Estado:");
    scanf(" %s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    getchar();
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; 

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área (km²):");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTur2);

    printf("\n==============================================================\n");
    printf("                 Carta cadastrada com sucesso!                  \n");
    printf("                           Carta 2:\n"                             );
    printf("\n==============================================================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    printf("\n==============================================================\n");
    printf("-------                 HORA DO DUELO                  -------\n");
    printf("\n==============================================================\n");

    printf("Escolha a opção correspondente ao primeiro atributo que você deseja comparar: \n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade demográfica\n6. Pib per Capita\n7. Super poder\n");
    printf("\nEscolha: ");
    scanf("%d", &rodada1);

    switch (rodada1) {
    case 1:
        printf("Você escolheu a opção *População*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *População*: %lu\n", nomeCidade1, populacao1);
        printf("Carta 2: %s, *População*: %lu\n", nomeCidade2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        valorCarta1Rodada1 = (float)populacao1;
        valorCarta2Rodada1 = (float)populacao2;
        break;
    case 2:
        printf("Você escolheu a opção *Área*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *Área*: %.2f\n", nomeCidade1, area1);
        printf("Carta 2: %s, *Área*: %.2f\n", nomeCidade2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        valorCarta1Rodada1 = area1;
        valorCarta2Rodada1 = area2;
        break;
    case 3:
        printf("Você escolheu a opção *PIB*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *PIB*: %.2f\n", nomeCidade1, pib1);
        printf("Carta 2: %s, *PIB*: %.2f\n", nomeCidade2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        valorCarta1Rodada1 = pib1;
        valorCarta2Rodada1 = pib2;
        break;
    case 4:
        printf("Você escolheu a opção *Número de pontos turísticos*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *Número de pontos turísticos*: %d\n", nomeCidade1, pontosTur1);
        printf("Carta 2: %s, *Número de pontos turísticos*: %d\n", nomeCidade2, pontosTur2);
        resultado1 = pontosTur1 > pontosTur2 ? 1 : 0;
        valorCarta1Rodada1 = (float)pontosTur1;
        valorCarta2Rodada1 = (float)pontosTur2;
        break;
    case 5: 
        printf("Você escolheu a opção *Densidade populacional*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *Densidade populacional*: %.2f\n", nomeCidade1, densiPop1);
        printf("Carta 2: %s, *Densidade populacional*: %.2f\n", nomeCidade2, densiPop2);
        resultado1 = densiPop1 < densiPop2 ? 1 : 0;
        valorCarta1Rodada1 = densiPop1;
        valorCarta2Rodada1 = densiPop2;
        break;
    
    case 6: 
        printf("Você escolheu a opção *PIB per Capita*, vamos ao duelo de comparações desta rodada!\n");
        printf("Carta 1: %s, *PIB per Capita*: %.2f\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2: %s, *PIB per Capita*: %.2f\n", nomeCidade2, pibPerCapita2);
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        valorCarta1Rodada1 = pibPerCapita1;
        valorCarta2Rodada1 = pibPerCapita2;
        break;
    
    case 7: 
    printf("Você escolheu a opção *Super Poder*, vamos ao duelo de comparações desta rodada!\n");
    printf("Carta 1: %s, *Super Poder*: %.2f\n", nomeCidade1, superpoder1);
    printf("Carta 2: %s, *Super Poder*: %.2f\n", nomeCidade2, superpoder2);
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    valorCarta1Rodada1 = superpoder1;
    valorCarta2Rodada1 = superpoder2;
    break;

    default:
        printf("Opção inválida.");

    }

    printf("\n==============================================================\n");

    printf("Escolha a opção correspondente ao segundo atributo que você deseja comparar: \n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade demográfica\n6. Pib per Capita\n7. Super poder\n");
    printf("\nEscolha: ");
    scanf("%d", &rodada2);

    if(rodada1 == rodada2){
        printf("Você escolheu o mesmo atributo da rodada 1!\n");
    } else {
        switch (rodada2) {
        case 1:
            printf("Você escolheu a opção *População*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *População*: %lu\n", nomeCidade1, populacao1);
            printf("Carta 2: %s, *População*: %lu\n", nomeCidade2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            valorCarta1Rodada2 = (float)populacao1;
            valorCarta2Rodada2 = (float)populacao2;
            break;
        case 2:
            printf("Você escolheu a opção *Área*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *Área*: %.2f\n", nomeCidade1, area1);
            printf("Carta 2: %s, *Área*: %.2f\n", nomeCidade2, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            valorCarta1Rodada2 = area1;
            valorCarta2Rodada2 = area2;
            break;
        case 3:
            printf("Você escolheu a opção *PIB*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *PIB*: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2: %s, *PIB*: %.2f\n", nomeCidade2, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            valorCarta1Rodada2 = pib1;
            valorCarta2Rodada2 = pib2;
            break;
        case 4:
            printf("Você escolheu a opção *Número de pontos turísticos*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *Número de pontos turísticos*: %d\n", nomeCidade1, pontosTur1);
            printf("Carta 2: %s, *Número de pontos turísticos*: %d\n", nomeCidade2, pontosTur2);
            resultado2 = pontosTur1 > pontosTur2 ? 1 : 0;
            valorCarta1Rodada2 = (float)pontosTur1;
            valorCarta2Rodada2 = (float)pontosTur2;
            break;
        case 5: 
            printf("Você escolheu a opção *Densidade populacional*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *Densidade populacional*: %.2f\n", nomeCidade1, densiPop1);
            printf("Carta 2: %s, *Densidade populacional*: %.2f\n", nomeCidade2, densiPop2);
            resultado2 = densiPop1 < densiPop2 ? 1 : 0;
            valorCarta1Rodada2 = densiPop1;
            valorCarta2Rodada2 = densiPop2;
            break;
    
        case 6: 
            printf("Você escolheu a opção *PIB per Capita*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *PIB per Capita*: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2: %s, *PIB per Capita*: %.2f\n", nomeCidade2, pibPerCapita2);
            resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            valorCarta1Rodada2 = pibPerCapita1;
            valorCarta2Rodada2 = pibPerCapita2;
            break;
    
        case 7: 
            printf("Você escolheu a opção *Super Poder*, vamos ao duelo de comparações desta rodada!\n");
            printf("Carta 1: %s, *Super Poder*: %.2f\n", nomeCidade1, superpoder1);
            printf("Carta 2: %s, *Super Poder*: %.2f\n", nomeCidade2, superpoder2);
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            valorCarta1Rodada2 = superpoder1;
            valorCarta2Rodada2 = superpoder2;
            break;

        default:
            printf("Opção inválida.");
            break;
    }

   //comparação

   printf("\n========================================================================\n");
   printf("                              RESULTADOS                             \n");
   printf("                                                                          \n");
   printf("\n    =================== RESULTADO POR RODADA =====================  \n");
   printf("                                                                          \n");
    if (resultado1 == 1 && resultado2 == 1){
        printf("A carta 1 (%s) Venceu!\n", nomeCidade1);
    }else if (resultado1 == 0 && resultado2 == 0){
        printf("A carta 2 (%s) Venceu!\n", nomeCidade2);
    }else{
        printf("Empate!");
    }
    printf("                                                                          \n");
    printf("\n=================== RESULTADO POR SOMA DOS ATRIBUTOS ===================\n");
    printf("                                                                          \n");
    // Soma dos atributos escolhidos
    float somaCarta1 = valorCarta1Rodada1 + valorCarta1Rodada2;
    float somaCarta2 = valorCarta2Rodada1 + valorCarta2Rodada2;

    printf("Carta 1 (%.2f + %.2f) = %.2f\n", valorCarta1Rodada1, valorCarta1Rodada2, somaCarta1);
    printf("Carta 2 (%.2f + %.2f) = %.2f\n", valorCarta2Rodada1, valorCarta2Rodada2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("*** Carta 1 venceu no somatório das duas rodadas! ***\n");
        } else if (somaCarta1 < somaCarta2) {
        printf("*** Carta 2 venceu no somatório das duas rodadas! ***\n");
    } else {
        printf("*** Empate no somatório das duas rodadas! ***\n");
    }
    printf("                                                               ");
    }
    return 0;
}
