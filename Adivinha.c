#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()                                               
{
    printf("\n");
    printf("    P  /_\\  P                                      \n");
    printf("    /_\\_|_|_/_\\                                   \n");
    printf(" n_n | ||. .|| | n_n         Bem vindo ao           \n");
    printf(" |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!       \n");
    printf("|" "  |  |_|  |"  " |                               \n");
    printf("|_____| ' _ ' |_____|                               \n");
    printf("     \\__|_|__/                                    \n\n\n"); 
    
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
    
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;
    int nivel;
    printf("Qual o nível de dificuldade\n");
    printf("(1) Fácl (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    int numerodetentativas;
    switch(nivel){
        case 1:
            numerodetentativas = 20;
            printf("Você tem 20 tentativas\n\n");
            break;
        
        case 2:
            numerodetentativas = 15;
            printf("Você tem 15 tentativas\n\n");
            break;
        
        case 3:
            numerodetentativas = 6;
            printf("Você tem 6 tentativas\n");
            break;
        
        default:
            printf("Não tem essa opção");
    }
    
    for(int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute: ");
        scanf("%d", &chute);
         
        if(chute < 0){
            printf("não pode numeros negativos\n");
            continue;
        }
        printf("seu chute foi %d\n", chute);
        
        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        
        if(acertou){
            break;
            
        }else if(maior){
            printf("Chute maior que o numero secreto\n\n");
            
        }else{
            printf("Chute menor que o numero secreto\n\n");
        }
        
        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto)/(double)2;  
        pontos -= pontosperdidos;
     }
        
    printf("\n\nFim de jogo\n\n");
    
    if(acertou){
        printf("\n\n");
        printf("            OOOOOOOOOOO                              \n");
        printf("         OOOOOOOOOOOOOOOOOOO                         \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO                      \n");
        printf("     OOOOOO      OOOOO      OOOOOO                   \n");
        printf("   OOOOOOOO  #   OOOOO  #   OOOOOOOO                 \n");
        printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO                \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO               \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO               \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO               \n");
        printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO                \n");
        printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO                 \n");
        printf("     OOOOO   OOOOOOOOOOOOOOO   OOOO                  \n");
        printf("       OOOOOO   OOOOOOOOO   OOOOOO                   \n");
        printf("          OOOOOO         OOOOOO                      \n");
        printf("              OOOOOOOOOOOO                           \n\n");

        printf("Você ganhou!!!\n");
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("Total de pontos %.1f", pontos);
    }else{
        printf("Você perdeu. Tente novamente\n\n");
        printf("    \\|/ ____ \\|/            \n");
        printf("      @~/ ,. \\~@              \n");
        printf("     /_( \\__/ )_\\           \n");
        printf("        \\__U_/               \n");
        printf("\n\n");
            
    }

   
    return 0;
}
