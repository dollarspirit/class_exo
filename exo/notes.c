#include<stdio.h>
int main(){
    int a,b;
    float notes,somme=0,moy;
    printf("calcul des notes\n");
    printf("combien de notes voulez vous entrez:");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        printf("entrez la note %d :",b);
        scanf("%f",&notes);
        if(notes<0){
            break;
            b-=b;
        }else if(notes>20){
            printf("cette note ne peut être prise en compte\n veuillez ressayer");
            b-=b;
        }
        }
    somme+=notes;
    moy=somme/b;
    printf("la moyenne des notes est %.2f\n",moy);
    return 0;
}