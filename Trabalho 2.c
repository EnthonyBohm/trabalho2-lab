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
	
	printf("\n\nVamos jogar um jogo?\nPedra Papel Tesoura Lagarto e Spock\nVamos escolha um \n1.Pedra \n2.Papel \n3.Tesoura\n4. Lagarto \n5. Spock \n");
	scanf("%d", &esc_us);
	while(esc_us <1 || esc_us >5){
		printf("Valor inválido, digite novamente: ");
		scanf("%d", &esc_us);
	}
	printf("\n------------------------------------------\n");
	
	switch (esc_us){
	
	case 1:
		switch (esc_pc){
			case 1:
			printf("Pedra empata com pedra");
			break;
			
			case 2:
			printf("Papel Amassa pedra \nVocê Perdeu");
			break;
			
			case 3:
			printf("Pedra Quebra Tesoura \nVocê Ganhou, Parabéns!");
			break;
			
			case 4:
			printf("Pedra esmaga lagarto \nVocê Ganhou, Parabéns!");
			break;
			
			case 5:
			printf("Spock vaporiza pedra \nVocê perdeu");
			break;
		}
	break;

	case 2:
		switch (esc_pc){
			case 1:
			printf("Papel Amassa pedra \nVocê ganhou, Parabéns! ");
			break;
			
			case 2:
			printf("Papel empata com papel");
			break;
			
			case 3:
			printf("Tesoura corta Papel \nVocê perdeu");
			break;
			
			case 4:
			printf("Lagarto come papel \nVocê perdeu");
			break;
			
			case 5:
			printf("Papel refuta Spock \nVocê ganhou,Parabéns!");
			break;
		}
	break;
	
	case 3:
		switch (esc_pc){
			case 1:
			printf("Pedra Quebra Tesoura \nVocê Perdeu");
			break;
			
			case 2:
			printf("Tesoura corta o Papel \nVocê ganhou, Parabéns!");
			break;
			
			case 3:
			printf("Tesoura empata com tesoura");
			break;
			
			case 4:
			printf("Tesoura decapita lagarto \nVocê ganhou,Parabéns!");
			break;
			
			case 5:
			printf("Spock derrete tesoura \nVocê perdeu");
			break;
		}
	break;
	
	case 4:
		switch (esc_pc){
			case 1:
			printf("Pedra esmaga lagarto \nVocê perdeu");
			break;
			
			case 2:
			printf("Lagarto come papel \nVocê ganhou,Parabéns!");
			break;
			
			case 3:
			printf("Tesoura decapita Lagarto \nVocê perdeu");
			break;
			
			case 4:
			printf("Lagarto empata com lagarto ");
			break;
			
			case 5:
			printf("Lagarto envenena Spock \nVocê ganhou, Parabéns!");
			break;
		}
	break;
	
	case 5:
		switch (esc_pc){
			case 1:
			printf("Spock vaporiza pedra \nVocê ganhou, Parabéns!");
			break;
			
			case 2:
			printf("Papel refuta Spock \nVocê perdeu");
			break;
			
			case 3:
			printf("Spock derrete tesoura \nVocê ganhou, Parabéns!");
			break;
			
			case 4:
			printf("Lagarto envenena Spock \nVocê perdeu");
			break;
			
			case 5:
			printf("Spock empata com Spock");
			break;
		}
	}
		
		printf("\n------------------------------------------\n");
		printf("\nVocê deseja jogar novamente? (S/N)");
		scanf("    %c",&d);
		
		while(d != 'S' && d != 'N' && d != 's' && d!= 'n'){
			printf("Resposta inválida, digite novamente ");
			scanf("  %c",&d);
		}
    }while(d == 'S' || d== 's');
    return 0;
}
