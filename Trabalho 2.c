#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int esc_pc,esc_us;
	char d;
	
	do{
	
	srand(time(NULL));
	esc_pc= rand()%3;
	while(esc_pc == 0){
		esc_pc= rand()%4;
	}
//	printf("%d",esc_pc);
	
	printf("Vamos jogar um jogo?\nPedra Papel Tesoura\nVamos escolha um \n1.Pedra \n2.Papel \n3.Tesoura\n");
	scanf("%d", &esc_us);
	while(esc_us <1 || esc_us >3){
		printf("Valor inválido, digite novamente: ");
		scanf("%d", &esc_us);
	}
	printf("\n------------------------------------------\n");
	
	if(esc_us == 1){
		if (esc_pc == 1){
			printf("Pedra empata com pedra");
		}
		else if (esc_pc == 2){
			printf("Papel Amassa pedra \nVocê Perdeu");
		}
		else if (esc_pc == 3){
			printf("Pedra Quebra Tesoura \nVocê Ganhou, Parabéns!");
		}
	}
	else if(esc_us == 2){
		if (esc_pc == 1){
			printf("Papel Amassa pedra \nVocê ganhou, Parabéns! ");
		}
		else if(esc_pc == 2){
			printf("Papel empata com papel");
		}
		else if (esc_pc == 3){
			printf("Tesoura corta Papel \nVocê perdeu");
		}
	}
	else if (esc_us == 3){
		if (esc_pc == 1){
			printf("Pedra Quebra Tesoura \nVocê Perdeu");
		}
		else if (esc_pc == 2){
			printf("Tesoura corta o Papel \nVocê ganhou, Parabéns!");
		}
		else if (esc_pc == 3){
			printf("Tesoura empata com tesoura");
		}
	}
		printf("\n------------------------------------------\n");
		printf("\nVocê deseja jogar novamente? (S/N)");
		scanf("    %c",&d);
		
		while(d != 'S' && d != 'N'){
			printf("Resposta inválida, digite novamente (USE MAÍUSCULA!)");
			scanf("  %c",&d);
		}
    }while(d == 'S');
    return 0;
}
