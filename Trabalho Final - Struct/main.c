/******************************************************************************
    Universidade Tecnológica Federal do Paraná
    Discente: Waslley Silva
    Docente: Prof. Dr. Luciano Tadeu
    Curso: Análise e Desenvolimento de Sistemas
    
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tamanhoTabuleiro 8
#define pedras '*'
#define vazio '-'

// Função para exibir a tela de título
void telaTitulo(int decisao)
{
    if (decisao == 1)
    {
        printf("\n");
    }
    else if (decisao == 2)
    {
        printf("\nRegras:\n");
        printf("Um salto consiste sempre em mover uma pedra para uma casa vazia;\n");
        printf("A casa de destino da pedra no salto deve estar na diagonal da casa de origem;\n");
        printf("Para alcançar a casa vazia, a pedra não pode passar por outras casas vazias.\n");

        printf("\nDificuldades:\n");
        printf("Extremamente fácil: eliminar até 29 pedras;\n");
        printf("Fácil: eliminar de 30 a 39 pedras;\n");
        printf("Difícil: eliminar de 40 a 44 pedras;\n");
        printf("Extremamente difícil: eliminar de 45 a 47 pedras.\n");
    }
}

// Função para iniciar o tabuleiro
void iniciarTabuleiro(char s[tamanhoTabuleiro][tamanhoTabuleiro])
{
    // Definindo as posições das pedras
    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        for (int j = 0; j < tamanhoTabuleiro; j++)
        {
            s[i][j] = pedras;
        }
    }

    // Definindo as casas vazias
    for (int i = 2; i < 6; i++)
    {
        for (int j = 2; j < 6; j++)
        {
            s[i][j] = vazio;
        }
    }
}

// Função para exibir o tabuleiro na tela
void exibirTabuleiro(char s[tamanhoTabuleiro][tamanhoTabuleiro])
{
    printf("  ");
    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        printf("%d ", i + 1);
    }
    printf("\n");

    for (int i = 0; i < tamanhoTabuleiro; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < tamanhoTabuleiro; j++)
        {
            printf("%c ", s[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se o movimento selecionado é diagonal
int ehDiagonal(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    // Declaração de variáveis auxiliares
    int diffLinha, diffColuna;

    // Processamento
    diffLinha = abs(linhaOrigem - linhaDestino);
    diffColuna = abs(colunaOrigem - colunaDestino);

    if (diffLinha == diffColuna)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Função para exibir mensagem de erro, se necessário.
int mensagemErro(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino, char tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro])
{
    // Se a entrada estiver fora dos limites do tabuleiro
    if (linhaOrigem - 1 > tamanhoTabuleiro || colunaOrigem - 1 > tamanhoTabuleiro || linhaDestino - 1 > tamanhoTabuleiro || colunaDestino - 1 > tamanhoTabuleiro)
    {
        printf("Entrada inválida! (Fora dos limites do tabuleiro).\n\n");
        return 1;
    }
    else if (linhaOrigem - 1 < 0 || colunaOrigem - 1 < 0 || linhaDestino - 1 < 0 || colunaDestino - 1 < 0)
    {
        printf("Entrada inválida! (Fora dos limites do tabuleiro).\n\n");
        return 1;
    }

    // Se a entrada for inválida de acordo com as regras
    else if (tabuleiro[linhaOrigem - 1][colunaOrigem - 1] != pedras)
    {
        printf("Entrada inválida! (A casa de origem não é uma pedra).\n\n");
        return 1;
    }
    else if (tabuleiro[linhaDestino - 1][colunaDestino - 1] != vazio)
    {
        printf("Entrada inválida! (A casa de destino não está vazia).\n\n");
        return 1;
    }
    else if (ehDiagonal(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino) == 0)
    {
        printf("Entrada inválida! (O movimento deve ser feito na diagonal).\n\n");
        return 1;
    }

    // Se não houver erros, o jogo continua normalmente
    else
    {
        return 0;
    }
}

// Função para processar a jogada
void processarJogada(char tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro], int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino, int *saltos)
{
    // Variável para contar as pedras restantes
    int restantes = 0;

    // Processamento da jogada e declaração de variáveis (Eliminação)
    int diffLinha = linhaDestino - linhaOrigem;
    int diffColuna = colunaDestino - colunaOrigem;
    int passoLinha = (diffLinha > 0) ? 1 : -1;
    int passoColuna = (diffColuna > 0) ? 1 : -1;

    int i = linhaOrigem + passoLinha;
    int j = colunaOrigem + passoColuna;

    while (i != linhaDestino)
    {
        if (tabuleiro[i][j] == vazio)
        {
            printf("Entrada inválida. (A pedra não pode passar por uma casa vazia)\n\n");
            return; // Termina a função sem fazer a jogada
        }

        i += passoLinha;
        j += passoColuna;
    }

    // Processamento da jogada (Eliminação e Movimento)
    i = linhaOrigem + passoLinha;
    j = colunaOrigem + passoColuna;

    while (i != linhaDestino)
    {
        tabuleiro[i][j] = vazio;
        i += passoLinha;
        j += passoColuna;
    }

    // Processamento da jogada (Movimento)
    tabuleiro[linhaDestino][colunaDestino] = pedras;
    tabuleiro[linhaOrigem][colunaOrigem] = vazio;

    // Contagem das pedras restantes
    for (i = 0; i < tamanhoTabuleiro; ++i)
    {
        for (j = 0; j < tamanhoTabuleiro; ++j)
        {
            if (tabuleiro[i][j] == pedras)
            {
                restantes++;
            }
        }
    }

    // Incrementa o número de saltos se a jogada for válida.
    (*saltos)++;

    // Saída de dados (informações)
    printf("Salto de (%d, %d) para (%d, %d).\n", linhaOrigem + 1, colunaOrigem + 1, linhaDestino + 1, colunaDestino + 1);
    printf("Pedras eliminadas: %d\n", abs(48 - restantes));
    printf("Restam %d pedras no tabuleiro\n\n", restantes);
}

// Função para exibir as informações de fim de jogo.
void fimDeJogo(int saltos, char tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro])
{
    // Declaração de variável
    int restantes = 0;

    // Contagem das pedras restantes
    for (int i = 0; i < tamanhoTabuleiro; ++i)
    {
        for (int j = 0; j < tamanhoTabuleiro; ++j)
        {
            if (tabuleiro[i][j] == pedras)
            {
                restantes++;
            }
        }
    }

    // Saída de dados
    printf("Número de saltos realizados: %d\n", saltos);
    printf("Pedras eliminadas: %d\n", 48 - restantes);

    // Nível de dificuldade alcançado
    if (48 - restantes <= 29)
    {
        printf("Nível de dificuldade: Extremamente fácil\n");
    }
    else if (48 - restantes <= 39)
    {
        printf("Nível de dificuldade: Fácil\n");
    }
    else if (48 - restantes <= 44)
    {
        printf("Nível de dificuldade: Difícil");
    }
    else
    {
        printf("Nível de dificuldade: Extremamente difícil\n");
    }
}

int main()
{
    // Inicializando o tabuleiro
    char tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];

    // Declaração de variáveis (dados da jogada)
    int linhaOrigem, colunaOrigem, linhaDestino, colunaDestino, decisao, saltos = 0;

    // Tela de título
    do
    {
        printf("\n- Jogo das Pedras -\n\n");
        printf("[1] - Novo Jogo\n");
        printf("[2] - Regras e Informações\n");
        printf("[0] - Sair\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &decisao);

        // Limpa o buffer do teclado
        fflush(stdin);

        // Processamento da opção escolhida
        switch (decisao)
        {
        case 1:
            iniciarTabuleiro(tabuleiro);
            exibirTabuleiro(tabuleiro);

            while (1)
            {
                // Entrada de dados (jogada)
                printf("Informe a linha e a coluna da pedra que deseja mover (linha coluna): ");
                scanf("%d %d", &linhaOrigem, &colunaOrigem);

                // Limpa o buffer do teclado
                fflush(stdin);

                printf("Informe a linha e a coluna da posição de destino (linha coluna): ");
                scanf("%d %d", &linhaDestino, &colunaDestino);

                // Limpa o buffer do teclado
                fflush(stdin);

                // Verifica se a jogada é válida
                if (mensagemErro(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino, tabuleiro) == 0)
                {
                    // Processa a jogada
                    processarJogada(tabuleiro, linhaOrigem - 1, colunaOrigem - 1, linhaDestino - 1, colunaDestino - 1, &saltos);
                    exibirTabuleiro(tabuleiro);

                    // Verifica se o jogo acabou
                    if (saltos >= 48 || saltos == 47 && tabuleiro[linhaDestino - 1][colunaDestino - 1] == pedras)
                    {
                        fimDeJogo(saltos, tabuleiro);
                        break;
                    }
                }
            }
            break;

        case 2:
            telaTitulo(2);
            break;

        case 0:
            printf("\nJogo encerrado.\n");
            return 0;
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
        }

    } while (decisao != 0);

    return 0;
}

