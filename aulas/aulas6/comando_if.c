#include <stdio.h>

int main(){
    int numero = 0;

    // printf("Entre com um numero: ");
    // int deu_certo = scanf("%i", &numero);

    // int eh_divisivel_por_2 = numero % 2 == 0;

    // //if completo
    // if (eh_divisivel_por_2){
    //     printf("O numero %i eh par!\n", numero);
    // }else{
    //     printf("O numero %i eh impar!\n", numero);
    // }

    // int idade = 0;
    // printf("Entre com a sua idade: ");
    // deu_certo = scanf("%i", &idade);

    // if (idade < 16){
    //     printf("Voce naum pode votar\n");
    // }else{
    //     if(idade < 18 || idade >70){
    //         printf("Voce pode votar\n");
    //     }else{
    //         printf("Voce eh obrigado a votar");
    //     }
    // }
    float media = 0.0f;
    printf("Entre com a media final:");
    int deu_certo = scanf("%f", &media);
    

    if (media >= 9.0f && media <= 10.0f){
        printf("A mensao eh SS\n");
    } else if (media >= 7.0f && media <= 8.9f){
        printf("A mensao eh MS");
    } else if (media >= 5.0f && media <= 6.9f){
        printf("A mensao eh MM");
    } else if (media >= 3.0f && media <= 4.9f){
        printf("A mensao eh MI");
    } else if (media >= 0.1f && media <= 2.9f){
        printf("A mensao eh II");
    }
    
        
    
    
        
    


    

   
    
    
    return 0;
}