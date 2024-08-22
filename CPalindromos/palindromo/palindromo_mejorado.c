#include <string.h>
#include "palindromo.h"

int es_palindromo(const char *cadena) {
    int tam = strlen(cadena)-1;
    for(int i=0 ;i <= tam/2; i++){
        if(cadena[i] != cadena[tam-i]){
            return 0;
        }
    }
    return 1;
}