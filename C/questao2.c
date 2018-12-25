/* Leia os valores da altura H e da largura W do quadro
   e aloque dinamicamente uma matriz Mhxw que irá armazenar os
   pixels a serem lidos. Para alocar a matriz, use ponteiro
   para ponteiro.

   Leia os valroes dos pixels e os armazene na matriz Mhxw alocada
   anteriormente

   Solicite ao usuário 4 valores que serão armazenados em uma outra
   matriz B2x2 alocada estaticamente. Busque na matriz Mhxw o bloco
   2x2 que mais se parece com B2x2. O critério de similaridade a ser
   utilizado é a SAD (Sum of Absolute Differences). Mostre na tela
   do computador o bloco em Mhx2w que mais se parece com B2x2.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // Declaração de variáveis
    int H, W;
    int linha, coluna;;
    int w_sad, min;
    unsigned char V2[4], V1[4];
    unsigned char M[2][2], B[2][2];

    FILE *entrada;
    unsigned char **quadro;

    // Abre arquivo de dados
    entrada = fopen("questao2_quadro.txt", "r");

    // Lê primeira linha para saber o tamanho de cada quadro e quantos quadros serão lidos
    fscanf(entrada,"%d %d", &H, &W);

    // Aloca de memória para o quadro
    quadro = malloc(H * sizeof *quadro);
    for (linha=0; linha < H; ++linha)
        quadro[linha] = malloc(W * sizeof *quadro[linha]);

    // Lê quadro do arquivo
    for (linha=0; linha < H; ++linha)
        for (coluna=0; coluna < W; ++coluna)
            fscanf(entrada,"%d", &quadro[linha][coluna]);

    // Já tem os dados para processar. Fecha o arquivo de entrada.
    fclose(entrada);

    // Lê a V1 2x2
    printf("Informe 4 valores para a V1 2x2\n");
    scanf("%d %d %d %d", &M[0][0], &M[0][1], &M[1][0], &M[1][1]);

    // Carrega V1
    V1[0] = M[0][0];
    V1[1] = M[0][1];
    V1[2] = M[1][0];
    V1[3] = M[1][1];

    // Variável para identificar o menor SAD do w_B_q1
    min = 999;

    // Varre o quadro na busca pelo menor SAD
    for (linha=0; linha < H-1; linha++) {
        for (coluna=0; coluna < W-1; coluna++) {
            V2[0] = quadro[linha][coluna];
            V2[1] = quadro[linha][coluna+1];
            V2[2] = quadro[linha+1][coluna];
            V2[3] = quadro[linha+1][coluna+1];

            // Calcula SAD
            w_sad = abs(V1[0]-V2[0])+
                    abs(V1[1]-V2[1])+
                    abs(V1[2]-V2[2])+
                    abs(V1[3]-V2[3]);


            // Se menor que os anteriores, guarda seus dados
            if (w_sad < min) {
                // Atualiza o menor valor
                min = w_sad;

                // Guarda o B
                B[0][0] = V2[0];
                B[0][1] = V2[1];
                B[1][0] = V2[2];
                B[1][1] = V2[3];
            }
        }
    }

    // Exibe resultado
    printf("%4d %4d\n%4d %4d\n", B[0][0], B[0][1], B[1][0], B[1][1]);

    // Libera recursos
    for (linha=0; linha < H; ++linha)
        free(quadro[linha]);

    free(quadro);

    return 0;
}
