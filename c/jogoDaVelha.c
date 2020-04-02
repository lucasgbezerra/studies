#include <stdio.h>

int main(){

	int col, linha;
	int m[3][3];
	for(int i = 0; i< 3; i++)
	{
		for (int c = 0; i<3; i++)
			m[i][c] = 2;
	}	
	for (int i = 0; i< 3; i++)
	{
		printf("          ------------------\n");
		printf("linha %d ->|     |    |     |\n",i+1);
	}
	
	printf("-------------------------\n");
	printf("O primeiro jogador é o X e o segundo O\n");
	printf("Escolha uma posição(num coluna espaço linha)\nlinha 1 coluna 1( Exemplo: 1 1)\n");
	for (int i = 1; i <= 9; i++)
	{
		if (i%2 != 0 ){
			printf("Vez do X:\n");
		}else{
			printf("Vez do O:\n");
		}

		scanf("%d %d", &linha, & col);
		linha--;
		col--;
	// 1 representa o X e 0 Representa O
		if (i%2 != 0 ){	
			m[linha][col] = 1;
		}else{
			m[linha][col] = 0;
		}
		for (int l = 0; l< 3; l++)
		{
			for(int c = 0; c<3; c++)
			{
				printf("|  %d  |",m[l][c]);			
			}
			printf("\n");
		}

	}
	
	return 0;
}
