#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

int main(){
        char pp;

    do {
        system("cls");
        //clrscr();
        system("cls");
        system("color 7E");
        printf("\n\n\n\n\n\t\t\t께께께께께께께께께께께께께");
        printf("\n\t\t\t�          MENU          �");
        printf("\n\t\t\t께께께께께께께께께께께께께\n\n\n");
        printf("\t\t    께께께께께께께께께께께께께께께께께께\n");
        printf("\t\t    께  1. ADIMISTRAR MARCAS          께\n");
        printf("\t\t    께  2. ADMINISTRAR PRODUCTOS      께\n");
        printf("\t\t    께  3. IMPRIMIR CODIGO DE BARRAS  께\n");
        printf("\t\t    께  4. GENERAR FACTURA            께\n");
        printf("\t\t    께                                께\n");
        printf("\t\t    께                                께\n");
        printf("\t\t    께  5. Salir                      께\n");
        printf("\t\t    께께께께께께께께께께께께께께께께께께");
        //scanf("%s", &pp);
        pp=getch();
        system("color 7C");
        switch(pp){
            case '1': system("start marcas.exe");break;
            case '2': system("start productos.exe"); break;
            case '3': system("start imprimir.exe"); break;
            case '4': system("start FACTURA.exe");break;
            case '5':{
                system("color 7C");
                gotoxy(30,7);cout<<"께께께께께께께께께께께께께�"<<endl;
                gotoxy(30,8);cout<<"께       FINALIZANDO     께"<<endl;
                gotoxy(30,9);cout<<"께께께께께께께께께께께께께�"<<endl;
                gotoxy(30,10);cout<<"께                       께"<<endl;
                gotoxy(30,11);cout<<"께                       께"<<endl;
                gotoxy(30,12);cout<<"께                       께"<<endl;
                gotoxy(30,13);cout<<"께께께께께께께께께께께께께�"<<endl;
                int ter=0;
                for(ter>0;ter<=17;ter++){
                Sleep(90);
                gotoxy(33+ter,11);cout<<"껐�"<<endl;
                 }
                 exit(0);
            }
            default: gotoxy(30,9);printf("OPCION INVALIDA\n\n\n\n\t\t");Sleep(500);break;
        }
    }while(pp!='5');

    getch();
}
