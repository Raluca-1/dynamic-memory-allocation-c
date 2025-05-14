#include <stdio.h>
#include <stdlib.h>


//alocare dinamica a memoriei//malloc

int main(){

 int *p;
    p=(int*)malloc(sizeof(int));

    if(p==NULL){
        printf("Alocare dinamica esuata!");
    }else{
    printf("Alocare dinamica reusita");
    }

  return 0;

}




