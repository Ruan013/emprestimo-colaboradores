#include <stdio.h>
#include <stdlib.h>

    void opcoesRetirada();
    int anoAtual = 2023;
    char nome[50];
    int anoAdmissao;
    int salarioAtual;
    int emprestimo;

int main()
{
    system("color 0F");

    printf("###############################################################################\n");
    printf("                                                                               \n");
    printf("                             SISTEMA DE EMPRESTIMO                             \n");
    printf("                                                                               \n");
    printf("###############################################################################\n");

    printf("\n");
    printf (" NOME: ");
    scanf ("%[^\n]", &nome);

    printf ("\n ANO DE ADMISSAO: ");
    scanf ("%d", &anoAdmissao);

    if (anoAdmissao > (anoAtual - 5)) {
        printf("\n Agradecemos seu interesse, mas voce nao atende os requisitos minimos do programa\n\n");
        system("pause");
        exit(0);
    }

    printf ("\n SALARIO ATUAL: ");
    scanf ("%d", &salarioAtual);

    for (int conta = 0; conta < 1; conta++) {
    printf ("\n VALOR DO EMPRESTIMO: ");
    scanf ("%d", &emprestimo);

    if (emprestimo <= (salarioAtual*2) && emprestimo % 2 == 0) {
        opcoesRetirada();
    } else {
        printf("\n Insira um valor valido\n");
        conta--;
    }
    }
    return 0;
}

void opcoesRetirada() {
    int escolha;
    int notas100 = emprestimo / 100;
    int notas50 = (emprestimo % 100) / 50;
    int notas20 = (emprestimo % 50) / 20;
    int notas10 = (emprestimo % 20) / 10;
    int notas5 = (emprestimo % 10) / 5;
    int notas2 = (emprestimo % 5) / 2;
    int metade = emprestimo / 2;
    int notasMetade100 = metade / 100;
    int notasMetade50 = (metade % 100) / 50;
    int notasMetade20 = (metade % 50) / 20;
    int notasMetade5 = (metade % 20) / 5;
    printf ("\n OPCOES DE RETIRADA\n");

    printf(" _______________________________ \n");
    printf("|                               |\n");
    printf("|   NOTAS DE MAIOR VALOR        |\n");
    printf("|   100 reais   50 reais        |\n");
    printf("|   DIGITE: 1                   |\n");
    printf("|                               |\n");
    printf("|   NOTAS DE MENOR VALOR        |\n");
    printf("|   20 reais    10 reais        |\n");
    printf("|    5 reais     2 reais        |\n");
    printf("|   DIGITE: 2                   |\n");
    printf("|                               |\n");
    printf("|   NOTAS MEIO A MEIO           |\n");
    printf("|   Notas menores e maiores     |\n");
    printf("|   DIGITE: 3                   |\n");
    printf("|_______________________________|\n");

    do {
    printf ("\n ESCOLHA: ");
    scanf ("%d", &escolha);
    } while (escolha < 1 || escolha > 3);


    switch (escolha) {

    case 1:
    // Notas de maior valor (100 e 50 reais)
        printf("\n");
        printf(" Notas de maior valor:\n");
        printf(" %d x 100 reais\n", notas100);
        printf(" %d x 50 reais\n", notas50);
    break;

    case 2:
    // Notas de menor valor (20, 10, 5 e 2 reais)
        printf("\n");
        printf("\n Notas de menor valor:\n");
        printf(" %d x 20 reais\n", notas20);
        printf(" %d x 10 reais\n", notas10);
        printf(" %d x 5 reais\n", notas5);
        printf(" %d x 2 reais\n", notas2);
    break;

    case 3:
    // Notas meio a meio
        printf("\n");
        printf("\n Notas meio a meio:\n");
        printf(" %d reais em notas de maior valor:\n", metade);
        printf(" %d x 100 reais\n", notasMetade100);
        printf(" %d x 50 reais\n", notasMetade50);
        printf(" %d x 20 reais\n", notasMetade20);
        printf(" %d x 5 reais\n", notasMetade5);
        printf(" %d reais em notas de menor valor:\n", metade);
        printf(" %d x 20 reais\n", notasMetade20);
        printf(" %d x 10 reais\n", notas10);
        printf(" %d x 5 reais\n", notas5);
    break;

    }

}
