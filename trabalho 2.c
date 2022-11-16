/*
*Tesoura corta papel
*Papel cobre pedra
*Pedra esmaga lagarto
*Lagarto envenena Spock
*Spock derrete tesoura
*Tesoura decapita Lagarto
*Lagarto come papel
*Papel refuta Spock
*Spock vaporiza pedra
*Pedra amassa tesoura
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int esc_pc,esc_us;
	char d;
	
	do{
	
	srand(time(NULL));
	esc_pc= rand()%6;
	while(esc_pc == 0){
		esc_pc= rand()%6;
	}
//	printf("%d",esc_pc);
	
	printf("Vamos jogar um jogo?\nPedra Papel Tesoura Lagarto e Spock\nVamos escolha um \n1.Pedra \n2.Papel \n3.Tesoura\n4. Lagarto \n5. Spock \n");
	scanf("%d", &esc_us);
	while(esc_us <1 || esc_us >5){
		printf("Valor inválido, digite novamente: ");
		scanf("%d", &esc_us);
	}
	printf("\n------------------------------------------\n");
	
	if(esc_us == 1){
		if (esc_pc == 1){
			printf("Pedra empata com pedra");
		}
		if (esc_pc == 2){
			printf("Papel Amassa pedra \nVocê Perdeu");
		}
		if (esc_pc == 3){
			printf("Pedra Quebra Tesoura \nVocê Ganhou, Parabéns!");
		}
		if (esc_pc == 4){
			printf("Pedra esmaga lagarto \nVocê Ganhou, Parabéns!");
		}
		if (esc_pc == 5){
			printf("Spock vaporiza pedra \nVocê perdeu");
		}
	}
	if(esc_us == 2){
		if (esc_pc == 1){
			printf("Papel Amassa pedra \nVocê ganhou, Parabéns! ");
		}
		else if(esc_pc == 2){
			printf("Papel empata com papel");
		}
		else if (esc_pc == 3){
			printf("Tesoura corta Papel \nVocê perdeu");
		}
		else if(esc_pc == 4){
			printf("Lagarto come papel \nVocê perdeu");
		}
		else if(esc_pc == 5){
			printf("Papel refuta Spock \nVocê ganhou,Parabéns!");
		}
	}
	if (esc_us == 3){
		if (esc_pc == 1){
			printf("Pedra Quebra Tesoura \nVocê Perdeu");
		}
		if (esc_pc == 2){
			printf("Tesoura corta o Papel \nVocê ganhou, Parabéns!");
		}
		if (esc_pc == 3){
			printf("Tesoura empata com tesoura");
		}
		if (esc_pc == 4){
			printf("Tesoura decapita lagarto \nVocê ganhou,Parabéns!");
		}
		if (esc_pc == 5){
			printf("Spock derrete tesoura \nVocê perdeu");
		}
	}
	if (esc_us == 4){
		if(esc_pc == 1){
			printf("Pedra esmaga lagarto \nVocê perdeu");
		}
		if(esc_pc == 2){
			printf("Lagarto come papel \nVocê ganhou,Parabéns!");
		}
		if(esc_pc == 3){
			printf("Tesoura decapita Lagarto \nVocê perdeu");
		}
		if(esc_pc == 4){
			printf("Lagarto empata com lagarto ");
		}
		if(esc_pc == 5){
			printf("Lagarto envenena Spock \nVocê ganhou, Parabéns!");
		}
	}
	if (esc_us == 5){
		if(esc_pc == 1){
			printf("Spock vaporiza pedra \nVocê ganhou, Parabéns!");
		}
		if(esc_pc == 2){
			printf("Papel refuta Spock \nVocê perdeu");
		}
		if(esc_pc == 3){
			printf("Spock derrete tesoura \nVocê ganhou, Parabéns!");
		}
		if(esc_pc == 4){
			printf("Lagarto envenena Spock \nVocê perdeu");
		}
		if(esc_pc == 5){
			printf("Spock empata com Spock");
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
