#include <stdio.h>

int main(){

//Declaração de variáveis.
int populacao1, populacao2, ponto1, ponto2, opcao1, opcao2; // Atributos inteiros
char codigo1[5], codigo2[5];                                // Códigos das cartas (ex: A01, B03)
char cidade1[50], cidade2[50];                              // Nome das cidades
char Estado1[3], Estado2[3];                                // Sigla dos estados (ex: SP, RJ)
float area1, area2, pib1, pib2;                             // Atributos numéricos (km² e PIB)
float densidade1, densidade2, pibcapita1, pibcapita2;
float v1t1 = 0, v2t1 = 0, v1t2 = 0, v2t2 = 0;               //v1t1 = valor 1 atributo 1
float soma1, soma2;                                         //soma para calcular os resultados finais
//Cadastro da Primeira Carta
printf ("Para a Primeira Carta\n");
printf ("Digite uma Letra de 'A' a 'H' (Representando um dos oito estados): "), scanf (" %s", Estado1);
printf ("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04): "), scanf (" %s", codigo1);
printf ("Digite o Nome da Cidade: "), scanf (" %s", cidade1);
printf ("Digite a População: "), scanf (" %d", &populacao1);
printf ("Digite a Área (em km²): "), scanf (" %f", &area1);
printf ("Digite o PIB: "), scanf (" %f", &pib1);
printf ("Digite o Número de Pontos Turísticos: "), scanf (" %d", &ponto1);
//Cadastro da Segunda Carta.
printf ("Agora para a Segunda Carta\n");
printf ("Digite uma Letra de 'A' a 'H' (Representando um dos oito estados): "), scanf (" %s", Estado2);
printf ("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04): "), scanf (" %s", codigo2);
printf ("Digite o Nome da Cidade: "), scanf (" %s", cidade2);
printf ("Digite a População: "), scanf (" %d", &populacao2);
printf ("Digite a Área (em km²): "), scanf (" %f", &area2);
printf ("Digite o PIB: "), scanf (" %f", &pib2);
printf ("Digite o Número de Pontos Turísticos: "), scanf (" %d", &ponto2);
//calcular a densidade e o pib per capita.
densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pibcapita1 = pib1 / populacao1;
pibcapita2 = pib2 / populacao2;
//agora o resultado.
printf ("\nCarta 1:\n");
printf ("Estado: %s\n", Estado1);   
printf ("Código: %s\n", codigo1);
printf ("Nome da Cidade: %s\n", cidade1);
printf ("População: %d\n", populacao1);
printf ("Área: %.3f km²\n", area1);
printf ("PIB: %.3f\n", pib1);   
printf ("Número de Pontos Turísticos: %d\n", ponto1);
printf ("Densidade Demografica: %.3f hab/km²\n", densidade1);
printf ("PIB per Capita: %.3f reais\n", pibcapita1);
//segunda carta
printf ("Carta 2:\n");
printf ("Estado: %s\n", Estado2);
printf ("Código: %s\n", codigo2);
printf ("Nome da Cidade: %s\n", cidade2);
printf ("População: %d\n", populacao2);
printf ("Área: %.3f km²\n", area2);
printf ("PIB: %.3f\n", pib2);
printf ("Número de Pontos Turísticos: %d\n", ponto2);
printf ("Densidade Demografica: %.3f hab/km²\n", densidade2);
printf ("PIB per Capita: %.3f reais\n", pibcapita2);
//Menu 1
printf("\nEscolha o Primeiro Atributo para Comparar\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Numero de Pontos Turisticos\n");
printf("5 - Densidade Demografica (menor vence)\n");
printf("6 - PIB per Capita\n");
printf("Escolha uma opcao:  ");
scanf("%d", &opcao1);
//Menu 2
printf("\nEscolha o Segundo Atributo\n");
for (int i = 1; i <= 6; i++)
{
   if (i == opcao1) continue;
   {
    switch (i)
    {
    case 1: printf("1 - Populacao\n"); break;
    case 2: printf("2 - Area\n"); break;
    case 3: printf("3 - PIB\n"); break;
    case 4: printf("4 - Numero de Pontos Turisticos\n"); break;
    case 5: printf("5 - Densidade Demografica\n"); break;
    case 6: printf("6 - PIB per Capita\n"); break;
    }
   }
}
printf("Opcao:   "); scanf("%d", &opcao2);
//funcao auxiliar com switch
switch (opcao1)
{
case 1: v1t1 = populacao1; v2t1 = populacao2; break;
case 2: v1t1 = area1; v2t1 = area2; break;
case 3: v1t1 = pib1; v2t1 = pib2; break;
case 4: v1t1 = ponto1; v2t1 = ponto2; break;
case 5: v1t1 = -densidade1; v2t1 = -densidade2; break;
case 6: v1t1 = pibcapita1; v2t1 = pibcapita2; break;
default: printf("Opcao Invalida!\n"); break;
}
switch (opcao2)
{
case 1: v1t2 = populacao1; v2t2 = populacao2; break;
case 2: v1t2 = area1; v2t2 = area2; break;
case 3: v1t2 = pib1; v2t2 = pib2; break;
case 4: v1t2 = ponto1; v2t2 = ponto2; break;
case 5: v1t2 = -densidade1; v2t2 = -densidade2; break;
case 6: v1t2 = pibcapita1; v2t2 = pibcapita2; break;
default: printf("Opção inválida!\n"); break;
}

//somatório dos atributos (já invertendo densidade quando necessário)
soma1 = v1t1 + v1t2;
soma2 = v2t1 + v2t2;

//resultado
printf("\nResultado da Comparacao\n");
printf("%s (Carta 1): %.2f\n", cidade1, soma1);
printf("%s (Carta 2): %.2f\n", cidade2, soma2);

if (soma1 > soma2) {
    printf("Carta 1(%s) venceu!\n", cidade1);
} else if (soma2 > soma1) {
    printf("Carta 2 (%s) venceu!\n", cidade2);
} else
     printf("Empate!\n");

return 0;     

}