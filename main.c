
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hora=time(NULL);
    int num1, num2, num3, num4;
    int x1, x2, x3, x4;
    int intentos,juego,correcto;
    srand(hora);
    
    do{
        num1=rand() % 10;
        num2=rand() % 10;
        num3=rand() % 10;
        num4=rand() % 10;
        
        while(num1==num2)
            num2=rand() % 10;
        while((num2==num3)||(num1==num3))
            num3=rand() % 10;
        while((num3==num4)||(num2==num4)||(num1==num4))
            num4=rand() % 10;
        intentos=10;
        correcto=0;
        printf("Adivina el numero\nTiene 10 oportunidades\n");
        
        do{
    
            printf("\n");
            
            scanf("%1d",&x1);
            scanf("%1d",&x2);
            scanf("%1d",&x3);
            scanf("%1d",&x4);
    
            if(x1==num2)
                printf("V");
            if(x1==num3)
                printf("V");
            if(x1==num4)
                printf("V");
    
    
            if(x2==num1)
                printf("V");
            if(x2==num3)
                printf("V");
            if(x2==num4)
                printf("V");
    
    
            if(x3==num1)
                printf("V");
            if(x3==num2)
                printf("V");
            if(x3==num4)
                printf("V");
    
    
            if(x4==num1)
                printf("V");
            if(x4==num2)
                printf("V");
            if(x4==num3)
                printf("V");
    
    
            if(x1==num1)
                printf("T");
            if(x2==num2)
                printf("T");
            if(x3==num3)
                printf("T");
            if(x4==num4)
                printf("T");   
            intentos--;
            
            if((num1==x1) && (num2==x2) && (num3==x3) && (num4==x4))
                correcto=1;
            
        }while((intentos>0) && (correcto!=1));
        
        if(correcto!=1){
            printf("\nEl numero era ");
            printf("%d", num1);
            printf("%d", num2);
            printf("%d", num3);
            printf("%d\n", num4);
        }else{
            printf("\n¡Excelente adivinaste el numero!\n");
        }
        
        printf("\nTe gustaria jugar de nuevo?\n");
        printf("Si = precione el numero 1\nNo = precione el numero 2\n");
        scanf("%d",&juego);
        
    }while(juego==1);
    
    return 0;
}
