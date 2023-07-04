#include<stdio.h>
#define SIZE 200
#include<string.h>
char nome[SIZE] [50];
char email[SIZE] [50];
int cpf[SIZE];
int op;

void TelaLogin();
void cadastro();
void pesquisa();


int main(void){
    TelaLogin();
    cadastro();
    pesquisa();
}

void TelaLogin(){

    printf("\t****************************HOSPITAL**************************\n\n");
    printf("\t******************LOGIN:admin******SENHA:123******************\n\n");
    printf("\t**************************************************************\n\n");

    char login[15] = "admin";
    char login1[15];
    char senha[15] = "123";
    char senha1[15];
    int login_efetuado = 0;

    while(!login_efetuado){
        printf("\tDigite o Login: ");
        scanf("%s", login1);

        printf("\tDigite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            login_efetuado = 1;
            system("cls");
        }
        else
            printf("\n\n\tDADOS INVALIDOS!\n\n");
    }

}

void cadastro(){
    static int linha;
    do{
        printf("\nDigite o nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o email: ");
        scanf("%s", &email[linha]);
        printf("\nDigite o cpf: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair");
        scanf("%d", &op);
        linha++;
        system("cls"
   );
    }while(op==1);
}


void pesquisa(){
    int cpfPesquisa;
    char emailPesquisa[50];
    int i;
    do{
    printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar por email");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("\nDigite o cpf: ");
            scanf("%d", &cpfPesquisa);
            for(i=0;i<SIZE;i++){
                if(cpf[i]==cpfPesquisa){
                    printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                }
            }
            break;
        case 2:
            printf("\nDigite o E-mail: ");
            scanf("%s", &emailPesquisa);
            for(i=0;i<SIZE;i++){
                if(strcmp(email[i],emailPesquisa)==0){
                    printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                }
            }
            break;
        default:
            printf("\nOpção invalida!");
            break;
        }
        printf("\nDigite 1 para continuar pesquisando");
        scanf("%d", &op);
    }while(op==1);
}
