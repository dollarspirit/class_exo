#include<stdio.h>
int main(){
    int n, fact=1;
    printf("calcule du factoriel\n");
    do{
        printf("entrez la valeur de n :");
        scanf("%d",&n);
    }while(n<0);

    if(n==0){
        printf("factoriel de 0 est 1");
    }
    else{
        int i=n;
        for(i;i>=1;i--){
            fact*=i;
        }
        printf("factoriel de %d est %d",n,fact);
    }
    return 0;
}