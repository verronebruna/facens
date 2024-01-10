/*Faça um programa que recebe uma matriz 4x3 de números decimais e mostre a matriz na tela em
formato de tabela.*/

#include <stdio.h> 
#define Linha 4
#define Coluna 3

int main()
{
    int i,j;
    int matriz[Linha][Coluna] ={
        1, 2, 3, 4,
        1, 2, 3, 4,
        1, 2, 3, 4};
    printf("|------------------------------------------|\n");
    printf("|               Matriz %dx%d                 |\n", Linha, Coluna);
    printf("|------------------------------------------|\n");
    for (i = 0; i < Linha; i++)
    {
        for (j = 0; j < Coluna; j++)
        {
            printf("| %3d  | ", matriz[i][j]);
        }
        printf("\n");
    }
        printf("|------------------------------------------|\n");

    return 0;
}