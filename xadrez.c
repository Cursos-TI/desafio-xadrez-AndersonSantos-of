#include <stdio.h>

void rainha(int move) // aqui está o recursivo da rainha
{
    // coloquei essa condição para limitar a quantidade de movimento de acordo com o tabuleiro de xadrez
    if(move>8) 
    {
        printf("Quantidade de casas inválida");
    }else
    {
         if(move>0)
        {
            printf("A Rainha se moveu uma casa para BAIXO\n");
            rainha(move-1);
        }
    }
   
}

void torre(int move) // recursivo da torre
{
    if(move>8)
    {
        printf("Quantidade de casas inválida");
    }else
    {
        if(move>0)
        {
            printf("A Torre se moveu uma casa para CIMA\n");
            torre(move-1);
        }
    }
}

void bispo(int move) // recursivo do bispo
{
    if(move>8)
    {
        printf("Quantidade de casas inválida");
    }else
    {   
        if(move>0)
        {
            printf("O Bispo se moveu uma casa para BAIXO\n");
            printf("O Bispo se moveu uma casa para a ESQUERDA\n");
            bispo(move-1);
        }
    
    }
}

int main(){
    
    int mov, x, escolha; // definindo as variaveis principais

    printf("    Escolha qual peça mover\n");
    printf("1.Bispo\n2.Torre\n3.Rainha\n4.Cavalo\n");
    printf("Digite aqui: ");
    scanf("%d", &escolha);

    // fiz um menu para o usuario escolher qual peça mover
    switch (escolha)
    {
    case 1:

        // tambem fiz o menu do bispo com loops aninhados
        // aqui eu peço quantas casa a pessoa quer mover
        printf("\nDigite quantas vezes quer mover a peça: ");
        scanf("%d", &mov);

        //novamente um limitador de casa
        if (mov>8)
        {
            printf("Quantidade de casas inválida");

        }else
        {

            for (x=1; x<=mov; x++)
            {
                for(int i=1; i==1; i++)
                {
                    printf("O Bispo se moveu uma casa para a DIREITA\n");
                }
                
                printf("O Bispo se moveu uma casa para CIMA\n");
           
            }

            // aqui eu tô exibindo tambem o recursivo do bispo que foi pedido
            printf("    Exibindo a movimentação do bispo com o recursivo");
            bispo(mov)
        }
        
    break;
    case 2:
        
        // aqui eu peço quantas casa a pessoa quer mover
        printf("\nDigite quantas vezes quer mover a peça: ");
        scanf("%d", &mov);

        torre(mov);

    break;
    case 3:
        
        // aqui eu peço quantas casa a pessoa quer mover
        printf("\nDigite quantas vezes quer mover a peça: ");
        scanf("%d", &mov);

        rainha(mov);

    break;
    case 4:

        /* 
        o cavalo tem a movimentação restrita, por isso não tem entrada de movimento
        não entendi o ultimo desafio com a movimentação do cavalo
        loops aninhados complexos? eu elaborei mas não de uma forma eficiente
        não vi como poderia colocar um loop complexo e ser util
        */
         for (int xi=1, yi=1; xi==1, yi==1; xi--, yi--)
        {

            for ( int i=1, j= 1; i<=2, j<=2; i++,j++)
            {
                printf("O Cavalo se moveu uma casa para cima\n");
            }
            
            printf("O Cavalo se moveu uma casa para a direita\n");
            
        }
        
        
    break;
    default:
        printf("Peça invalida");
    break;
    }

    return 0;
}