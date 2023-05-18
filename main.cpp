#include <iostream>
#include <string>
using namespace std;
#include "funciones.h"
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
#include <ctime>


int main()
{
    setlocale(LC_CTYPE, "Spanish"); // CARACTERES EN ESPAÑOL

    int op=1, y=0;

    string maximo_jugador;

    bool se_jugo=0;

    int pdv_maximo=0;

    rlutil::hidecursor();
    rlutil::setColor(rlutil::COLOR::WHITE);

    do
    {
        showItem("    EL GRAN CERDO    ", 23, 6, y==-1);
        showItem("---------------------", 23, 7, y==-1);
        showItem("        JUGAR        ", 23, 8, y==0);
        showItem("     ESTADÍSTICAS    ", 23, 9, y==1);
        showItem("       CERDITOS      ", 23, 10, y==2);
        showItem("---------------------", 23, 11, y==-1);
        showItem("        SALIR        ", 23, 12, y==3);

        switch (rlutil::getkey())
        {
        case 14: // UP
            y--;
            if(y<0)
            {
                y = 0;
            }
            break;
        case 15: // DOWN
            y++;
            if(y>3)
            {
                y = 3;
            }
            break;
        case 1: // ENTER

            switch(y)
            {
            case 0: // JUGAR
                maximo_jugador = jugar(maximo_jugador, pdv_maximo, se_jugo);
                break;
            case 1: // ESTADISTICAS
                estadisticas(maximo_jugador, pdv_maximo, se_jugo);
                break;
            case 2: // INTEGRANTES
                cerditos();
                break;

            case 3: // SALIR
                rlutil::cls();
                cout << "Para confirmar aprete la barra espaciadora" << endl << endl;
                cout << "sino cualquier otra tecla para cancelar";
                if(rlutil::getkey()==32)
                {
                    op=0;
                }
                rlutil::cls();
                break;

            default:
                break;
            }

        default:
            break;
        }
    }
    while(op!=0);
    return 0;
}
