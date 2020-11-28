Programa calculo de média bimestres - Linguagem C
Zk_Discord_Programador_C#
MAR 20TH, 2020
133
NEVER
Not a member of Pastebin yet? Sign Up, it unlocks many cool features!
1.17 KB
raw download report
/*
Desenvolva um programa que receba as notas dos quatro bimestres
de um aluno e informe se ele está de 5ª prova ou não, caso esteja
o programa deve informar qual a nota necessária para o aluno passar.
 
*/
#include<stdio.h>
int main(void){
    int total_media=0, aux=0, media_instituicao=0;
    int op=0;
    do{
        system("cls");
        total_media = 0;
        aux = 0;
        media_instituicao = 0;
        printf("\n Digite a media da instituicao: ");
        scanf("%i", &media_instituicao);
        printf("\n Digite a nota do 1 bim: ");
        scanf("%i", &aux);
        total_media+=aux; //total_media = total_media + aux;
        printf("\n Digite a nota do 2 bim: ");
        scanf("%d", &aux);
        total_media+=aux;
        printf("\n Digite a nota do 3 bim: ");
        scanf("%i", &aux);
        total_media+=aux;
        printf("\n Digite a nota do 4 bim: ");
        scanf("%i", &aux);
        total_media+=aux;
        
        if((total_media/4)<media_instituicao){
            printf("\n Voce ficou de 5 prova e precisa ter nota igual ou superior a ");
            printf("%i", 100-(total_media/4));
        }else{
            printf("\n Parabens, voce nao ficou de 5 prova\n");
        }
        printf("\n Digite 1 para continuar ou outro valor para sair");
        scanf("%i", &op);
    }while(op==1);
}
RAW Paste Data
￼
create new paste  /  syntax languages  /  archive  /  faq  /  tools  /  night mode  /  api  /  scraping api 
privacy statement  /  cookies policy  /  terms of serviceupdated  /  security disclosure  /  dmca  /  report abuse  /  contact 

