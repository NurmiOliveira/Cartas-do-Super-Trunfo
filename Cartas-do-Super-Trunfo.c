#include <stdio.h>


int main(){

    int populacaoA,populacaoB,npontosA,npontosB;
    float areaA,areaB,pibA,pibB;
    char nomeA[50],nomeB[50],estadoA[50],estadoB[50],codigoA[10],codigoB[10];

    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", estadoA);

    printf("Codigo do estado:\n");
    scanf("%s",codigoA);
    
    printf("Nome da cidade:\n");
    scanf("%s",nomeA);

    printf("Tamanho da populacao:\n");
    scanf("%d",&populacaoA);
    
    printf("informe a area em km2:\n");
    scanf("%f",&areaA);

    printf("Pib:\n");
    scanf("%f",&pibA);
    
    printf("Numero de pontos turisticos:\n");
    scanf("%d",&npontosA);

    printf("\n\nAgora digite As informacoes do segundo estado:\n\n");
    
    printf("\n\nDigite o nome do segundo estado:\n");
    scanf("%s", estadoB);

    printf("digite o codigo do estado:\n");
    scanf("%s", codigoB);

    printf("Nome da cidade:\n");
    scanf("%s", nomeB);
    
    printf("Populacao:\n");
    scanf("%d", &populacaoB);

    printf("Area:\n");
    scanf("%f", &areaB);

    printf("Pib:\n");
    scanf("%f", &pibB);

    printf("Numeros de pontos turiscicos:\n");
    scanf("%d", &npontosB);



    printf("\n\n\nEstado: %s - codigo: %s\n", estadoA,codigoA);
    printf("Cidade: %s\n", nomeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area em Km2%f\n", areaA);
    printf("Pib da cidade:%f\n", pibA);
    printf("Numero de pontos turisticos: %d\n\n\n", npontosA);
    
    printf("\n\n\nEstado: %s - codigo: %s\n", estadoB,codigoB);
    printf("Cidade: %s\n", nomeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area em Km2%f\n", areaB);
    printf("Pib da cidade:%f\n", pibB);
    printf("Numero de pontos turisticos: %d\n\n\n", npontosB);

    scanf("%s","Aperte ENTER para sair...");
    return 0;

}
