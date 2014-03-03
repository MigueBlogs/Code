/// Este programa permite una captura desde teclado, guardado, busqueda y borrado de elementos
/// en una lista de archivo.
#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main ()
{
    int x, y, z;
    char b[20];
    char d[20];
    char c;
    
    FILE *arch;
    arch= fopen ("archivo.txt","r");
do {        
    p("\n Selecciona una opcion del siguiente menu:");
    p("\n 1.- Escribir una lista de elementos y guardarlo");
    p("\n 2.- Busqueda de una palabra en el texto");
    p("\n 3.- Borrar ciertos elementos del texto");
    p("\n 4.- Salir \n");
    s("%d", &x);
    
   switch(x) 
   { 
   case 1:  //// Escribir texto
    if (arch==NULL)
    {
        p("404 ERROR - File not found!");
        }
    else{
   p("\nEscribe aqui tu lista de elementos que desees: \n Para cerrar el documento y guardarlo preciona '.' (Punto Final)\n");
   while ((c=getchar())!='.'){
   fputc(c, arch);  }
   fclose(arch);  
        }
    break;
    case 2: //// Busqueda
         p(" \n  Ingrese el elemento a buscar y le dire si se encuentra en el documento: \n\n\t ");
         fflush(stdin);
         gets(b);
         fgets(d, 10, arch);
         z = strcmp(b,d);
         if (z==0) {
            p("\n Se encontro el elemento %c \n" ,b);}
            else {
            p("\n No se enconto el elemento  \n");
                 }
         system ("PAUSE");
         return 0;
    break;
    case 3: 
   //////////// Borrar elementos
         p(" \n\n\t  gracias por usar el programa \n\n\t ");
         return 0;
    break;
    case 4: //// Salir
         p(" \n\n\t  Gracias por usar el programa \n\n\t ");
         system ("PAUSE");
    break;
  default:                   
         p(" \n\n\t Elija una opcion correcta \n\n\t ");
         }
                 system ("pause");
                 system ("cls");     
    }
         while (x !=4);
                 p (" \n\n\t");   
                 
                             
                system("PAUSE");                          
}
