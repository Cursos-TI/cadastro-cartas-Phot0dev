#include <stdio.h>

int main(){

    //Dados da Carta número 1.

    char estado1[2];       //Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo1[50];   //A letra do estado seguida de um número de 01 a 05 (ex: A01, B03).
    char cidade1[50];   //O nome da cidade.
    int pop1;           //O número de habitantes da cidade.
    float area1;        //A área da cidade em quilômetros quadrados.
    float pib1;         //O Produto Interno Bruto da cidade. 
    int turi1;          //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. 

    //Dados da Carta número 2.

    char estado2[2];       //Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo2[50];   //A letra do estado seguida de um número de 01 a 05 (ex: A01, B03).
    char cidade2[50];   //O nome da cidade.
    int pop2;           //O número de habitantes da cidade.
    float area2;        //A área da cidade em quilômetros quadrados.
    float pib2;         //O Produto Interno Bruto da cidade. 
    int turi2;          //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. 

    //Apresentação inicial.

    printf("Seja bem vindo ao Super Trunfo em C\n");
    printf("Para prosseguir precisaremos de alguns dados...\n");
    printf("Vamos começar com a carta número 1.\n\n");

    //Solicitação da informações referente a carta nº 1.

    printf("Defina uma letra 'A' a 'H'(representando um dos oito estados): ");
    scanf("%s", estado1);
    
    printf("Defina um número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Defina o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Qual a população dessa cidade?");
    scanf("%d", &pop1);

    printf("Qual a área em quilômetro quadrada desta cidade? ");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos? ");
    scanf("%d", &turi1);

    //Texto informativo do armazenamento dos dados da carta n°1.

    printf("Certo, salvei os dados da carta número 1, agora vamos preencher a carta número 2...\n");

    //Solicitação da informações referente a carta nº 1.

    printf("Defina uma letra 'A' a 'H'(representando um dos oito estados): ");
    scanf("%s", estado2);
    
    printf("Defina um número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Defina o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Qual a população dessa cidade?");
    scanf("%d", &pop2);

    printf("Qual a área em quilômetro quadrada desta cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos? ");
    scanf("%d", &turi2);

    //Calculos das variaveis de densidade demográfica da carta n1 e n2.

    float dp1 = (float)(pop1 / area1); //Calculo da Densidade Populacional desta carta.
    float pibc1 = (float)(pib1 / pop1); //Calculo do Pib percapita da carta n1.

    float dp2 = (float)(pop2 / area2); //Calculo da Densidade Populacional desta carta.
    float pibc2 = (float)(pib2 / pop2); //Calculo do Pib percapita da carta n2.

    //Texto informativo do armazenamento dos dados da carta n°1 e n°2.

    printf("Suas duas cartas foram criadas, segue abaixo as informações.\n\n");

    //Dados impressos da carta n°1.

    printf("Carta Número 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Aréa: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turi1);
    printf("Densidade Populional: %.2f hab/km² \n", dp1);
    printf("Pib Percapita: %.2f reais \n\n", pibc1);
    
    //Dados impressos da carta n°2.

    printf("Carta Número 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Aréa: %.2f km²\n", area2);
    printf("PIB: %2.f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turi2);
    printf("Densidade Populional: %.2f hab/km² \n", dp2);
    printf("Pib Percapita: %.2f \n", pibc2);

    //Fim do programa.

    return 0;   
}