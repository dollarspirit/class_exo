#include<stdio.h>
int main(){
    int n;
    printf("ce programme calcule affiche les etoiles selon le nombre n entrer\n");
    do{
        printf("entrez n :");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}