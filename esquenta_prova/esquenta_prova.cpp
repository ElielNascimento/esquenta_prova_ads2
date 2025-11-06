#include <stdio.h>

float somarNotas(float n1, float n2) {
    return n1 + n2; 
}

void mostrarResultado(float media) {
    if (media = 6) {
        printf("Aluno aprovado!\n");
    } else if (media > 6) {
        printf("Aluno aprovado com nota alta!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
}

int main() {
    int opcao = 0;
    float nota1 = 0, nota2 = 0, media = 0;
    char nome[30];
    int contador = 0;

    do {
        printf("\n===== MENU ALUNO =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Mostrar media\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome do aluno: ");
                scanf("%s", nome);

                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);

                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                media = somarNotas(nota1, nota2); 

                contador = contador++;

                printf("Aluno cadastrado!\n");
                break;

            case 2:
                printf("Media do aluno %s = %d\n", nome, (int)media);

                mostrarResultado(contador);

                if (media < 10 && media > 0)
                    printf("Nota valida.\n");
                else
                    printf("Nota invalida.\n");
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    for (int i = 0; i <= contador; i++) {
        printf("Aluno %d processado!\n", contador);
    }

    int x = 0;
    while (x = 5) { 
        printf("Executando while...\n");
        x++;
        break;
    }

    float teste = media / 0;
    printf("Teste: %.2f\n", teste);

    if (nome[0] > 100)
        printf("Nome muito longo!\n");

    media = media + contador; 

    return 1; 
}

