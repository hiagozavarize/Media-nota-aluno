//inclus?o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// parte principal do programa.
int main(){
// configura a linguagem a ser utilizada, no caso o português.
// aqui no vscode isso não funciona, precisa alterar o encoding para ISO 8859-1.
    setlocale(LC_ALL, "pt-BR");
// declara??o das vari?veis que v?o conter as notas do aluno e a vari?vel que vai descidir se o programa vai rodar denovo ou n?o.
    float nota1;
    float nota2;
    float nota3;
    int resposta;
// roda esse looping até que a variável "resposta" seja diferente de 1.
    do
        {
// pergunta qual a primeira nota e recebe o valor.
        printf("Qual a sua primeira nota? \n");
        scanf("%f", &nota1);
// pergunta qual a segunda nota e recebe o valor.
        printf("Qual a sua segunda nota?\n");
        scanf("%f", &nota2);
// pergunta qual a terceira nota e recebe o valor.
        printf("Qual a sua terceira nota?\n");
        scanf("%f", &nota3); 
// declara a variavel que vai conter a média entre as três notas e faz o cálculo.
        float media = (nota1 + nota2 + nota3)/3;
// mostra mostra o valor da média do aluno.
        printf("Sua média foi %.1f\n", media);
// estrutura de descisão: se a média for maior ou igual a 7, mostra que o aluno foi aprovado.
        if (media >= 7)
            {
            printf("Você está Aprovado!\n");
        }
    // se não, vai mostrar que o aluno está reprovado.
            else
                {
                printf("Você está reprovado.\n");
            }
        printf("Quer calcular novamente? SIM(1) NÃO(2)\n");
        scanf("%d", &resposta);

        if(resposta == 2){
            printf("Até mais!");
        }
} while (resposta == 1);
 
// indica que o programa compilou corretamente
    return 0;
}