 
#include <stdio.h>
#include "Ran.h"
#include "Aoi.h" 
#include "Ichigo.h"

int main(void) {
  
    int i;

    for(i = 0; i < 10; i++){
        printf("アイカツ！");
    }

    self_intro_Ran();
    self_intro_Aoi();
    self_intro_Ichigo();

    return 0;
}

