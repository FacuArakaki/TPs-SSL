#include <stdio.h>
#include<string.h>

int main() {
    char Holatodos[]=" Hola a todos";
    
    FILE* archivo = fopen("EjerEnClase.txt","wb+");
            fseek(archivo, 0, SEEK_END);
            fprintf(archivo, "%s", Holatodos);
            //fputs("\n",archivo);
        
        fclose(archivo);

    printf("VAmos los pibes");

   return 0;
}