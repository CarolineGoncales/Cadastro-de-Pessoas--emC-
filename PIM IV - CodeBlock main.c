#include<stdio.h>
#include<locale.h>
#include<string.h>
#define CONST 200 //constante que não altera

int opcao = 0;



void TelaLogin(){

    char login[15] = "plantao01";
    char login1[15];
    char senha[15] = "280259";
    char senha1[15];
    int login_efetuado = 0;

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLogin efetuado!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");
    }

}

void MostrarMenu(){

    printf("****** SEJA BEM VINDO, PLANTAO01 ******\n\n");
    printf("1-CADASTRO DE PACIENTES\n");
    printf("2-SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();

}

void CadastroPacientes(){

    char nome[CONST][80];
    char email[CONST][80];
    char endereco[CONST] [80];
    char observacoes[CONST] [100];
    int cpf[CONST][11];
    int telefone[CONST][20];
    int nascimento[CONST][20];
    int idade[CONST][3];
    int op = 1;


    printf("\nADICIONE OS DADOS DO PACIENTE\n\n");
    printf("Nome do Paciente:\n");
    scanf("%[^\n]s", nome);
    printf("\nCPF:\n");
    scanf("%d", &cpf);
    fflush(stdin);
    printf("\nData de nascimento:\n");
    scanf("%d", &nascimento);
    fflush(stdin);
    printf("\nIdade do paciente:\n");
    scanf("%d", idade);
    printf("\nE-mail:\n");
    scanf("%s", email);
    fflush(stdin);
    printf("\nTelefone:\n");
    scanf("%d", &telefone);
    fflush(stdin);
    printf("\nEndereço com o CEP:\n");
    scanf("%[^\n]s", endereco );
    fflush(stdin);
    printf("\nPaciente com comorbidades? Se sim, quais?:\n");
    scanf("%s", observacoes);
    fflush(stdin);
    printf("\nCADASTRO EFETUADO!\n\n");
    printf(" Nome: %s\n CPF: %d\n Data de Nascimento: %d\n Idade: %d\n E-mail: %s\n Telefone: %d\n Endereço com CEP: %s\n Paciente com comorbidades? Se sim, quais?: %s\n", nome, cpf, nascimento, idade, email, telefone, endereco, observacoes);
    printf("\n APERTE QUALQUER TECLA PARA SAIR.");

}


int main(){

    setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();

        switch (opcao)

        {

            case 1 :

                CadastroPacientes();

            break;

            default :

                printf("Sessão encerrada!");

            break;
        }

        getchar();



    return 0;
}
