#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota[0];
  float media,soma=0;
  int var, i;
  printf("Quantas notas serão digitadas? ");
  scanf("%d", &var);

  for(i=1; i<=var; i++){
    printf("Digite a nota %d: ",i);
    scanf("%f", &nota[i]);
    soma = soma + nota[i];
    media = soma / var;
      
  }
  
  if(media >= 6.0){
    printf("Aprovado!");
  }else if(media >= 4.0 && media< 6.0){
    printf("Recuperação!");
  }else{
    printf("Reprovado!");
  }
  printf("%.2f", media);
  
  return 0;
