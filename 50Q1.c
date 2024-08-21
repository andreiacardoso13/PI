#include <stdio.h>

//1
void maior (){
    int nMaior = 0, nAtual;
    scanf("%d", &nAtual);
    while (nAtual != 0){
        scanf("%d", &nAtual);
        if (nAtual > nMaior)
        nMaior = nAtual;
    }
    printf("O maior número escrito foi %d\n", nMaior);
}

//2
void media (){
    int soma = 0, nAtual, numeros = 1;
    float media;
    scanf ("%d", &nAtual);
    while (nAtual != 0){
        soma += nAtual;
        scanf("%d", &nAtual);
        numeros++;
    }
    media = (float)soma / numeros;
    printf("A média da sequência escrita é %.2f\n", media);
}

//3
void segundoMaior (){
    int nMaior1 = 0, nMaior2, nAtual;
    scanf("%d", &nAtual);
    if (nAtual == 0) 
        printf("A sequência inserida só tem um elemento\n");
    else{
        nMaior1 = nAtual;
        scanf ("%d", &nAtual);
        if (nAtual > nMaior1){
            nMaior2 = nMaior1;
            nMaior1 = nAtual;
        }
        else
            nMaior2 = nAtual;
        while (nAtual != 0){
            scanf("%d", &nAtual);
            if(nAtual > nMaior1){
            nMaior2 = nMaior1;
            nMaior1 = nAtual;
            }
        }
        if (nMaior2 < 0 && nMaior1 > 0)
            nMaior2 = 0;
        printf("O segundo maior número escrito foi %d\n", nMaior2);
    }
}

//4
int bitsUm (unsigned int n){
    int resposta=1;
    while (n / 2 != 0){
        if(n % 2 == 1){
            resposta++;
            n = (n-1)/2;
        }
        else 
            n = n / 2;
    }
    return resposta;
}

//5
int trailingZ (unsigned int n) {
    int resp = 0;
    if (n == 0) return 32;
    while (n % 2 == 0){
        resp++;
        n = n/2;
    }
    return resp;
}

//6
int qDig (int n) {
    int r = 1;
    while (n / 10 != 0){
        r++;
        n = n/10;
    }
    return r;
}

//7
char *strcat (char s1[], char s2[]){
     char *s3 = s1;
     int i, j;
     for (i = 0; s1[i] != '\0' ; i++);
     for (j = 0; s2[j] != '\0'; j++, i++){
        s1[i] = s2[j];
     }
     s1[i] = '\0';
     return s3;
}

//8
char *strcpy(char *s1 , char s2[]) {
    int i;
    for (i = 0; s2[i] != '\0'; i++){
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    return s1;
}

//9
int strcmp(char s1[], char s2[]) {
    int r = 0, i = 0;
    for (i; s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] > s2[i]){
            r = 1;
            break;
        }
        if (s1[i] < s2[i]){
            r = -1;
            break;
        }
    }
    if (s1[i] == '\0' && s2[i] != '\0')
        r = -1;
    if (s2[i] == '\0' && s1[i] != '\0')
        r = 1;
    return r;
}
