#include<librerias.h>
#include<time.h>
char CT = 203, LTI = 204, H = 205, CRUZ = 206, CB = 202, EIA = 201, EIB = 200, LTD = 185, V = 186, EDA = 187, EDB = 188;
#define ARAR cout << EIA << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<EDA << endl;
#define AREN cout << LTI << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< LTD << endl;
#define ARENBJ  cout << LTI  << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<LTD<< endl;
#define ABJ cout << EIB  << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<EDB<< endl;
#define arriva cout << LTI << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<CT<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<LTD << endl;
#define separador cout << LTI << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<CRUZ<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< LTD << endl;
#define abajo cout << LTI  << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<CB<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<LTD<< endl;

struct Marcas{
int idMarca;
char NombreMarca[50];
};
typedef Marcas Marca;

struct Productos{
int idProducto,idMarca;
char DescripcionProducto[100];
double PrecioCosto,PrecioVenta;
};
typedef Productos Producto;

struct Clientes{
int NIT;
char NombreCliente[50],DireccionCliente[50];
};
typedef Clientes Cliente;

struct Facturas{
int NoFactura,NITFactura;
};
typedef Facturas Factura;

struct FacturasDetalle{
int idProductos,NoFactura;
double PrecioVenta,Total;
};
typedef FacturasDetalle FacturaDetalle;

struct fecha{
int d,m,a,hh,mm,ss;
};
typedef fecha Fecha;
//Variables Globales para la fecha y hora
time_t tSac = time(NULL);
struct tm* tmP = localtime(&tSac);
char opc;//opciones de funciones del do while
//Prototipos de Funciones Del Programa
void MenuPrincipal();
void MenuMarcas();
void IngresoDeMarcas();
void MostrarMarcas();
void ModificarMarca();

main(){
/*SetConsoleTitle("WEEKEND PLACE");
    system("color 09");
     gotoxy(40,10);cout << "Bienvenidos al Programa WEEKEND PLACE"<<endl;
     gotoxy(45,11);cout << "Hecho por: Rodrigo Vasquez"<<endl;
     gotoxy(50,12);cout << "RV.Enterprices"<<endl;
     cout<<endl;
     char a = 177, b = 219;
     cout << "\t\t\t\t";
     for (int i = 0; i <= 50; i++)
          cout << a;
     cout << "\r";
     cout << "\t\t\t\t";
     for (int i = 0; i <= 50; i++)
     {
          cout << b;
          Sleep(200);
     }
     system("CLS");
*/
MenuPrincipal();
}
void MenuPrincipal(){
char opc;
     SetConsoleTitle("Menu Principal");
     system("CLS");
         gotoxy(35, 7);
     ARAR;
     gotoxy(35, 8);
     cout << V << "                 Menu Principal                   " << V << endl;
     gotoxy(35, 9);
     AREN;
     gotoxy(35, 10);
     cout << V << "                  1. Marcas                       " << V << endl;
     gotoxy(35, 11);
     cout << V << "                  2. Inventario                   " << V << endl;
     gotoxy(35, 12);
     cout << V << "                  3. Factura                      " << V << endl;
     gotoxy(35, 13);
     cout << V << "                  4. Pedidos                      " << V << endl;
     gotoxy(35, 14);
     ARENBJ;
     gotoxy(35, 15);
     cout << V << "                  ESC. Salir                      " << V << endl;
     gotoxy(35, 16);
     ABJ;
     gotoxy(35, 17);
     opc = getch();
          switch (opc)
          {
          case '1':
          {
               MenuMarcas();
               getch();
               MenuPrincipal();
               break;
          }
          case '2':
          {
              MenuPrincipal();
               break;
          }
          case '3':
          {
        MenuPrincipal();
               break;
          }
          case '4':
          {
        MenuPrincipal();
               break;
          }
          case 27:{
          exit(0);
          break;
          }
          default:
          {
               cout << "Opcion Incorreta elija de nuevo" << endl;
               getch();
              MenuPrincipal();
          }
          }
     }
void MenuMarcas(){
char opc;
     SetConsoleTitle("Menu Marcas");
     system("CLS");
         gotoxy(35, 7);
     ARAR;
     gotoxy(35, 8);
     cout << V << "               Menu Principal Marcas              " << V << endl;
     gotoxy(35, 9);
     AREN;
     gotoxy(35, 10);
     cout << V << "              1. Ingresar Marcas                  " << V << endl;
     gotoxy(35, 11);
     cout << V << "              2. Mostrar Listado de Marcas        " << V << endl;
     gotoxy(35, 12);
     cout << V << "              3. Modificar Marca                  " << V << endl;
     gotoxy(35, 13);
     cout << V << "              4. Eliminar Marca                   " << V << endl;
     gotoxy(35, 14);
     ARENBJ;
     gotoxy(35, 15);
     cout << V << "                  <-- Regresar                    " << V << endl;
     gotoxy(35, 16);
     ABJ;
     gotoxy(35, 17);
     opc = getch();
      if (opc == 8)
     {
          MenuPrincipal();
     }
     else
     {
          switch (opc)
          {
          case '1':
          {
               IngresoDeMarcas();
               getch();
               MenuMarcas();
               break;
          }
          case '2':
          {
              MostrarMarcas();
              getch();
              MenuMarcas();
               break;
          }
          case '3':
          {
          ModificarMarca();
          getch();
          MenuMarcas();
               break;
          }
          case '4':
          {
        MenuMarcas();
               break;
          }
          case 27:{
          exit(0);
          break;
          }
          default:
          {
               cout << "Opcion Incorreta elija de nuevo" << endl;
               getch();
              MenuMarcas();
          }
          }
     }


}
void IngresoDeMarcas(){
     fflush(stdin);
     Marcas Marca;
     char opc;
     FILE *ArchivoMarcas=fopen("Marcas.dat","a+b");
     loop:
     rewind(ArchivoMarcas);
     int AuxIdMarca;
     system("CLS");
     fflush(stdin);
     cout<<"Ingrese el Id de la marca"<<endl;
     cin>>AuxIdMarca;
     fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
          while(!feof(ArchivoMarcas)){
          if(AuxIdMarca==Marca.idMarca){
          cout<<"Id Ya Existente"<<endl;
          getch();
          goto loop;
          }
          fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
          }
          fflush(stdin);
          Marca.idMarca=AuxIdMarca;
     cout<<"Ingrese El Nombre De La Marca"<<endl;
     cin.getline(Marca.NombreMarca,50,'\n');
     fflush(stdin);
     fwrite(&Marca,sizeof(Marcas),1,ArchivoMarcas);
     cout<<"Guardado Exitosamente"<<endl;
     cout<<"Desea Ingresar Otro Registro? (S/N)"<<endl;
     cin>>opc;
     if(opc=='S'||opc=='s'){
          goto loop;
     }
     fclose(ArchivoMarcas);
}
void MostrarMarcas(){
system("CLS");
int Filas=6,FilasTotales=6;
SetConsoleTitle("Listado De Marcas");
Marcas Marca;
FILE *ArchivoMarcas=fopen("Marcas.dat","rb");
if(ArchivoMarcas==NULL){
     cout<<"Error 001"<<endl;
     getch();
     MenuMarcas();
}else{
system("CLS");
fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
gotoxy(10,3);cout << EIA << H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<CT<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<EDA << endl;
gotoxy(10,4);cout<<V;gotoxy(30,4);cout<<"Id Marca";gotoxy(59,4);cout<<V;gotoxy(80,4);cout<<"Nombre";gotoxy(110,4);cout<<V<<endl;
gotoxy(10,5);separador;

     while(!feof(ArchivoMarcas)){
     gotoxy(10,Filas);cout<<V;gotoxy(32,Filas);cout<<Marca.idMarca;gotoxy(59,Filas);cout<<V;gotoxy(82,Filas);cout<<Marca.NombreMarca;gotoxy(110,Filas);cout<<V<<endl;
    ++Filas;
    ++FilasTotales;
    fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
     }
gotoxy(10,FilasTotales);cout << EIB<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<CB<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<<H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<< H<<H<< H<<EDB << endl;;
fclose(ArchivoMarcas);
}
}
void ModificarMarca(){
fflush(stdin);
     Marcas Marca;
     FILE *ArchivoMarcas=fopen("Marcas.dat","r+b");
     int AuxIdMarca,i=0,existe=0;
     system("CLS");
     fflush(stdin);
     cout<<"Ingrese el Id de la marca que desea Modificar"<<endl;
     cin>>AuxIdMarca;
     fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
          while(!feof(ArchivoMarcas)){
          if(AuxIdMarca==Marca.idMarca){
          cout<<"Id_Marca: "<<Marca.idMarca<<endl;
          cout<<"Nombre:    "<<Marca.NombreMarca<<endl;
          int pos=ftell(ArchivoMarcas)-sizeof(Marcas);
          fseek(ArchivoMarcas,pos,SEEK_SET);
          fflush(stdin);
          cout<<"Ingrese el Id Nuevo"<<endl;
     cin>>Marca.idMarca;
     fflush(stdin);
     cout<<"Ingrese El Nombre Nuevo"<<endl;
     cin.getline(Marca.NombreMarca,50,'\n');
     fflush(stdin);
     fwrite(&Marca,sizeof(Marcas),1,ArchivoMarcas);
     cout<<"Modificado Exitosamente"<<endl;
     existe=1;
     break;

          }

          fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);

          }
         if(existe==0) {
          cout<<"No existe una marca con ese codigo"<<endl;
         }


     fclose(ArchivoMarcas);
}

