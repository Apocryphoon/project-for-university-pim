#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;
    int save;
    int logado;
    
    char login[128];
    char senha[64];
    char senha_confirm[64];

    char cadastro_login[128];
    char cadastro_senha[64];
    char cadastro_senha_confirm[64];
    FILE *arquivo;
    
    printf("Menu - Em desenvolvimento!\n");

    printf("\n[1] Cadastro\n[2] Login\n[3] Sair\n");
    printf("\nEscolha uma opção: ");
    scanf("%i", &save);

    switch (save)
    {
        case 1:
            printf("\e[H\e[2J");

            printf("Escolha um login: ");
            scanf("%s", &cadastro_login);

            printf("Escolha uma senha: ");
            scanf("%s", &cadastro_senha);

            printf("Confirme sua senha: ");
            scanf("%s", &cadastro_senha_confirm);

            arquivo = fopen("config.txt", "a");

            if (arquivo == NULL)
            {
                printf("Erro na criação do arquivo config.txt.");
                return 1;
            }else
            {
                //printt("Sucesso! Abertura do arquivo.");

                //fprintf(arquivo, "%s\n", "Login: " + login[i]);
                //fprintf(arquivo, "%s\n", "Senha: " + senha[i]);
                //fprintf(arquivo, "%s\n", "Confirm. Senha: " + confirm_senha[i]);
                fprintf(arquivo, "\n Login: %s \n Senha: %s \n Confirm. Senha: %s\n", cadastro_login, cadastro_senha, cadastro_senha_confirm);
                fclose(arquivo);

                printf("Cadastrado com sucesso!");
            }        
                
        break;
    
        case 2:
            //printf("Em manutenção!");
            printf("\e[H\e[2J");
            
            printf("Login: ");
            scanf("%s", &login);
            printf("Senha: ");
            scanf("%s", &senha);

            if (cadastro_login != NULL || login != NULL)
            {
                if (cadastro_senha || senha)
                {
                    printf("\e[H\e[2J");
                    printf("LOGADO!\n");

                    printf("\n[1] Menu\n[2] Sair\n");
                    printf("\nEscolha uma opção: ");
                    
                    //Após logado, ele está pegando a escolha do usuario no menu
                    scanf("%i", &logado);

                    switch (logado)
                    {
                        case 1:
                            printf("\e[H\e[2J");
                        break;
                        case 2:
                            printf("\e[H\e[2J");
                        break;
                        case 3:
                            printf("\e[H\e[2J");
                        break;

                        default:

                        break;
                    }
                }
                
            }
            
        break;

        case 3:
            printf("\e[H\e[2J");
            printf("Obrigado pela preferência. Volte sempre!\n");
            exit;
        break;

        default:
            printf("\e[H\e[2J");
            printf("Valor invalido!");
        break;
    }
}