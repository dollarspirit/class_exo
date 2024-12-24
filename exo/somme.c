#include<stdio.h>
int main(){
    int n;
    float somme=0;
    printf("ce programme calcule la somme suivante\n");
    printf(" 1 + 1/2 + 1/3 + ... + 1/n selon le n\n");
    do{
        printf("entrez n :");
        scanf("%d",&n);
    }while(n<=0);
    for(int a=0;a<=n;a++){
        somme+=1.00/n;
    }
    printf("la somme est %.2f",somme);
    return 0;
}