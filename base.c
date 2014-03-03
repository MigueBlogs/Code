#include <stdio.h>

struct Alumno{
	char Nocta[9];
	char Nom[15];
	int edad;
	struct Alumno *sig;
};

int opc=0;
char r;

void Archivos(int tipo); //Guarda en archivo y exporta

void Captura(); //Captura desde teclado y permite usar archivos

void Busca(); //Busca registro

void Lista(); //Muestra Lista

void Borra(); //Borra registro

int main (){
	do
	{
	opc=0;
	printf("--Base de Alumnos--\n\n");
	printf("Elija una opci%cn\n",162);
	printf("1. Capturar registro\n");
	printf("2. Buscar registro\n");
	printf("3. Mostrar Registro");
	printf("4. Eliminar registro\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		Captura();
		break;
		case 2:
		Busca();
		break;
		case 3:
		Lista();
		case 4:
		Borra();
		break;
		default:
		printf("Opción incorrecta\n");
		printf("Desea intentar de nuevo? <Y/N>");
        fflush(stdin);
		scanf("%c",&r);
	}
	}
	while(r=='y' || r=='Y');
	return 0;
}

//void Archivos(int tipo){
//	FILE *arch;
//	int tipo; //Variable para definir el si guarda o escribe
//   printf("Verificando...\n\n");
//	if(tipo == 1)
//	{
//		if(!(arch=fopen("base.txt","r")))
//			printf("ERROR: Archivo no encontrado");
//		while(!feof(arch))
//		{
//			fprintf("%s\t%s\t%d",temp.Nocta,temp.Nom,temp.edad);
//			printf("Datos cargados correctamente");
//
//		}
//	else if (tipo == 2)
//		if(!(arch=fopen("base.txt","rw")))
//			printf("ERROR: Archivo no encontrado");
//		else
//		{
//			printf("Datos exportados correctamente");
//		}
//	fclose(arch);
//	}
//
//}

void Captura(struct Alumno *temp){
	opc=0;
//	struct Alumno *temp;
	printf("Elija una opci%cn:\n",162);
	printf("1.Nuevo Registro\n");
	printf("2.Nuevo(s) desde archivo\n");
	printf("3.Exportar base");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		printf("Ingrese # cuenta:\n");
		scanf("%s",&temp->Nocta);
		printf("Ingrese Nombre:\n");
		scanf("%s",temp->Nom);
		printf("Ingrese edad:\n");
		scanf("&d",&temp->edad);
		printf("Regitro Exitoso\n");
		break;
		case 2:
		Archivos(1);
		break;
		case 3:
		Archivos(2);
		break;
		default:
		printf("Opci%cn incorrecta",162);
		printf("Desea intentar de nuevo? <Y/N>",&r);

	}

}

void Busca(){
	opc=0;
	printf("-BUSCAR-\n\n");
	printf("Elija criterio a buscar:\n");
	printf("1.No. cta.\n");
	printf("2.Nombre\n");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
		break;
		case 2:
		break;
		default:
		printf("Opci%cn incorrecta");
	}

}

void Lista(struct Alumno *lista){
	struct Alumno *temp;
	struct Alumno *sig;
	temp = lista;
	while(temp != NULL){
		printf("%s\n", temp->Nocta);
		temp = temp->sig;
	}
}

void Borra(){
	int kill;
	Lista();
	printf("Elija el registro que desee eliminar (numero)\n");
	scanf("%d",&kill);
}
