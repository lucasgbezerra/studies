#include <stdio.h>
#include <stdlib.h>

char identifica_vencedor(int m) {
	char vencedor;
	
	if(m == 9)
		vencedor = 'X';
	else
		vencedor = 'O';
	
	return vencedor;
}

int main(){

	int linha,coluna, cont = 0;
	int m[3][3];
	char pos[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
	char vencedor;

	for (int i = 0; i<3 ; i++)
	{
		for(int c = 0; c<3 ; c++){
				m[i][c] = cont;
				cont++;	
		}

	}

	for (int i = 1; i<= 3; i++)
	{
		printf("           -------------------\n");
		printf("linha %d ->|     |     |     |\n",i);
	}
	
	printf("           -------------------\n");
	printf("O primeiro jogador é o X e o segundo O\n");
	printf("Escolha uma posição(Exemplo: 1 1, linha 1 coluna 1): \n");
	for (int i = 1; i <= 9; i++)
	{
		
		do{
			if (i%2 != 0 ){
				printf("Vez do X:\n");
			}else{
				printf("Vez do O:\n");
			}
			scanf("%d %d", &linha, &coluna);
		}while(linha >3 || coluna >3 || m[linha-1][coluna-1] > 8);
		system("clear");
		linha--;
		coluna--;
	// 1 representa o X e 0 Representa O
		if (i%2 != 0 ){	
			pos[m[linha][coluna]] = 'X';
			m[linha][coluna] = 9;
		}else{
			pos[m[linha][coluna]] = 'O';
			m[linha][coluna] = 10;
		}
		cont =0;
		for (int i = 0; i< 3; i++)
		{
			printf("----------------------\n");
			printf("|  %c  |  %c  |  %c  |\n",pos[cont],pos[cont+1], pos[cont+2]);
			cont +=3;
		}
		printf("----------------------\n");
		
		if (i >=5)
		{
			if(m[0][0] == m[1][1] && m[1][1] == m[2][2] ){
				printf("Congratulations ");
				vencedor = identifica_vencedor(m[0][0]);
				printf("%c!\n", vencedor);
				break;
			}
			if(m[0][2] == m[1][1] && m[1][1] == m[2][0]){
				printf("Congratulations ");
				vencedor = identifica_vencedor(m[0][2]);
				printf("%c!\n", vencedor);
				break;
			}
			
			if(m[linha][0] == m[linha][1] && m[linha][1] == m[linha][2]){
				printf("Congratulations ");
				vencedor = identifica_vencedor(m[linha][0]);
				printf("%c!\n", vencedor);
				break;
			}
			if(m[0][coluna] == m[1][coluna] && m[1][coluna] == m[2][coluna]){
				printf("Congratulations ");
				vencedor = identifica_vencedor(m[0][coluna]);
				printf("%c!\n", vencedor);
				break;
			}


		}
	}
	
	return 0;
}
