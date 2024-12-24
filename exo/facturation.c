#include<stdio.h>
int main(){
    ;
    float ht,ttc,tva=0.1162,net,remise;
    do{
        printf("entrez le prix du produit(HT):");
        scanf("%f",&ht);
    }while(ht<=0);
    ttc= ht*(1.00+tva);
    //remise selon la condition
        if (ttc <= 2000) {
        remise = 0;
        printf("Pas de remise\n");
    } 
    else if (ttc > 2000 && ttc <= 3000) {
        remise = ttc * 0.03;
    } 
    else if (ttc > 3000 && ttc <= 6000) {
        remise = ttc * 0.05;
    } 
    else if (ttc > 6000) {
        remise = ttc * 0.07;
    }
    net=ttc-remise;
    printf("le prix toute taxe comprise est %.2lf\n",ttc);
    printf("la remise est %.2lf\n",remise);
    printf("le prix net est %.2lf\n",net);
    

    return 0;
}
