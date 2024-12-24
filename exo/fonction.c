#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,x1,x2,x0;
    printf("ce programme calcule la fonction suivante : \n");
    printf("ax2+bx+c=0\n");
    printf("entrez a:");
    scanf("%f",&a);
    printf("entrez b:");
    scanf("%f",&b);
    printf("entrez c:");
    scanf("%f",&c);
    if(a==0){
        if(b==0)
            if(c==0){
                printf("indetermination\n");
            }else{
                printf("l'equation est impossible");
            }
        else{
            x0=b/-c;
            printf("la solution est %.2f",x0);
        }
    
        printf("la solution à cette equation est x=%.2f\n",-c);

    }
    else{
        d=pow(b,2)-4*a*c;
        if(d<0){
            printf("pas de solution dans R");
        }else if(d=0){
            x0=-b/2*a;
            printf("la fonction admet une solution unique x0=%.2f",x0);
        }else if(d>0){
            x1=(-b+sqrt(d))/2*a;
            x2=(-b-sqrt(d))/2*a;
            printf("la fonction admet dans ce cas deux solutions x1=%.2f \t x2=%.2f",x1,x2);

        }
        
    }
    return 0;
}