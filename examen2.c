//
//  main.c
//  examenrapido2
//
//  Created by Ernesto Franco on 28/01/16.
//  Copyright © 2016 Ernesto Franco. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



void forward_iterator(int arreglo[], char i, int posicion)


{
    int * apunta;
    apunta=(int *) malloc(sizeof(int));
    int size;
    
    
    
    switch (i) {
        case 'b'://BEGIN
            apunta=arreglo;
            
            
            break;
        case 'e'://END
            size= sizeof(arreglo)/sizeof(arreglo[0]);
            *apunta= size;
            break;
            
        case 'n'://NEXT
            
            
            apunta=&arreglo[posicion];
            
            *apunta=*(apunta+1);
            
            
        case 'p'://PREV
            
            apunta=&arreglo[posicion];
            *apunta=*(apunta-1);
            
            break;
            
            
        default:printf("Valor no reconocido");
            break;
    }
    
    free(apunta);
    
    
    
}




int main(int argc, const char * argv[]) {
    
    struct libro
    {
        
        char* titulo;
        int paginas;
        
    };
    
    void (*apforward)(int[], char, int);
    
    apforward=forward_iterator;
    
   // apforward({1,2,3},'p',1);
    
    
    
    
    
    return 0;
    
    
    
}






