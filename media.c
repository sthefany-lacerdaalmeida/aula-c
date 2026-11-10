#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, media;

      printf("digite a primeira nota\n");
    scanf("%f", &nota1);

      printf("digite a segunda nota\n");
    scanf("%f", &nota2);

     printf("digite a terceira nota\n");
    scanf("%f", &nota3);

    media = (nota2 + nota2 + nota3) / 3;
    printf("media: %.2f\n", media);
    return 0;
}