#include <iostream>
#include <string>
using namespace std;
#include "funciones.h"
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
#include <ctime>

//DIBUJO DADOS -----------------------------------------------------------------------------------------------------

void dibujar_dado(int daditos[], int CANTIDAD)
{
    int h=0;

    int dados_dibujo[6][8][8] =
    {
        // DADO 1
        {
            {0,0,0,0,0,0,0,1},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,1,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        },
        // DADO 2
        {
            {0,0,0,0,0,0,0,1},
            {0,1,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        },
        // DADO 3
        {
            {0,0,0,0,0,0,0,1},
            {0,1,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,1,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        },
        // DADO 4
        {
            {0,0,0,0,0,0,0,1},
            {0,1,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,1,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        },
        // DADO 5
        {
            {0,0,0,0,0,0,0,1},
            {0,1,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,1,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,1,0,0,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        },
        // DADO 6
        {
            {0,0,0,0,0,0,0,1},
            {0,1,0,1,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,0,0,0,0,0,0,2},
            {0,1,0,1,0,1,0,2},
            {0,0,0,0,0,0,0,2},
            {1,2,2,2,2,2,2,2}
        }
    };

    setlocale(LC_CTYPE, "C"); // CONFIGURACION REGIONAL

    while(h!=CANTIDAD)
    {
        int z=daditos[h]-1;
        if(h==0)
        {
            for (int i=0; i<8; i++)
            {
                for (int j=0; j<8; j++)
                {

                    if (dados_dibujo[z][i][j]==1)
                    {
                        rlutil::locate(i+27,j+5);
                        rlutil::setColor(rlutil::COLOR::BLACK);
                        cout << (char)219;
                    }
                    else if(dados_dibujo[z][i][j]==2)
                    {
                        rlutil::locate(i+27,j+5);
                        rlutil::setColor(rlutil::COLOR::DARKGREY);
                        cout << (char)219;
                    }
                    else
                    {
                        rlutil::locate(i+27,j+5);
                        rlutil::setColor(rlutil::COLOR::WHITE);
                        cout << (char)219;
                    }
                }
                cout << endl;
            }
        }
        else if(h==1)
        {
            for (int i=0; i<8; i++)
            {
                for (int j=0; j<8; j++)
                {

                    if (dados_dibujo[z][i][j]==1)
                    {
                        rlutil::locate(i+36,j+6);
                        rlutil::setColor(rlutil::COLOR::BLACK);
                        cout << (char)219;
                    }
                    else if(dados_dibujo[z][i][j]==2)
                    {
                        rlutil::locate(i+36,j+6);
                        rlutil::setColor(rlutil::COLOR::DARKGREY);
                        cout << (char)219;
                    }
                    else
                    {
                        rlutil::locate(i+36,j+6);
                        rlutil::setColor(rlutil::COLOR::WHITE);
                        cout << (char)219;
                    }
                }
                cout << endl;
            }
        }
        else
        {
            for (int i=0; i<8; i++)
            {
                for (int j=0; j<8; j++)
                {

                    if (dados_dibujo[z][i][j]==1)
                    {
                        rlutil::locate(i+45,j+5);
                        rlutil::setColor(rlutil::COLOR::BLACK);
                        cout << (char)219;
                    }
                    else if(dados_dibujo[z][i][j]==2)
                    {
                        rlutil::locate(i+45,j+5);
                        rlutil::setColor(rlutil::COLOR::DARKGREY);
                        cout << (char)219;
                    }
                    else
                    {
                        rlutil::locate(i+45,j+5);
                        rlutil::setColor(rlutil::COLOR::WHITE);
                        cout << (char)219;
                    }
                }
                cout << endl;
            }
        }
        h++;
    }
    rlutil::setColor(rlutil::COLOR::WHITE);

    setlocale(LC_CTYPE, "Spanish");

}

//ESTADISTICAS ----------------------------------------------------------------------------------------------------------

void estadisticas(string& maximo_jugador, int &pdv_maximo, bool &se_jugo)
{
    rlutil::cls();

    int matriz[18][17] =
    {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0},
        {0,1,2,2,2,1,1,1,1,1,1,1,2,2,2,1,0},
        {0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0},
        {0,0,1,1,2,2,2,2,2,2,2,2,2,1,1,0,0},
        {0,0,1,2,1,1,2,2,2,2,2,1,1,2,1,0,0},
        {0,1,2,2,1,1,2,2,2,2,2,1,1,2,2,1,0},
        {0,1,2,2,2,2,1,1,1,1,1,2,2,2,2,1,0},
        {0,1,2,2,2,1,2,2,2,2,2,1,2,2,2,1,0},
        {0,1,2,2,2,1,2,1,2,1,2,1,2,2,2,1,0},
        {0,1,2,2,2,1,2,2,2,2,2,1,2,2,2,1,0},
        {0,0,1,2,2,2,1,1,1,1,1,2,2,2,1,0,0},
        {0,0,1,2,2,2,2,2,2,2,2,2,2,2,1,0,0},
        {0,0,0,1,2,2,1,1,1,1,1,2,2,1,0,0,0},
        {0,0,0,1,2,2,1,0,0,0,1,2,2,1,0,0,0},
        {0,0,0,1,2,2,1,0,0,0,1,2,2,1,0,0,0},
        {0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0}
    };

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    setlocale(LC_CTYPE, "C"); // CONFIGURACION REGIONAL C

    for (int i=0; i<18; i++)
    {
        for (int j=0; j<17; j++)
        {

            if (matriz[i][j]==1)
            {
                SetConsoleTextAttribute(hConsole, 16);
                cout << (char)219;
            }
            else if(matriz[i][j]==2)
            {
                SetConsoleTextAttribute(hConsole, 13);
                cout << (char)219;
            }
            else
            {
                SetConsoleTextAttribute(hConsole, 11);
                cout << (char)219;
            }
        }

        cout << endl;

    }
    SetConsoleTextAttribute(hConsole, 7);


    if(se_jugo==1)
    {

        rlutil::locate(30,7);
        cout << "Jugador con mayor cantidad";
        rlutil::locate(32,8);
        cout << "de puntos de victoria";
        rlutil::setBackgroundColor(rlutil::COLOR::LIGHTMAGENTA);
        rlutil::locate(34,10);
        cout << maximo_jugador << " con: " << pdv_maximo << " PDV";
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
    }
    else
    {
        rlutil::locate(30,9);
        cout << "Nadie ha jugado";
    }

    rlutil::anykey();
    rlutil::cls();
    setlocale(LC_CTYPE, "Spanish");
}


//FUNCION PARA JUGAR --------------------------------------------------------------------------------------------------

string jugar(string& maximo_jugador, int &pdv_maximo, bool &se_jugo)
{
    se_jugo=1;
    int trufas_jug1[5]= {}, trufas_jug2[5]= {}, lanzamientos_jug1[5]= {}, lanzamientos_jug2[5]= {};
    int trufas_tot1=0, trufas_tot2=0, oinks1=0, oinks2=0, max_lanz1, max_lanz2, pdv_jug1[6]= {}, pdv_jug2[6]= {};
    bool band_comienza1=0, continuar_jug=0, band_barro=0, band_lanz1=1, band_lanz2=1, band_tres_dados=0;
    int maxrrano=0;
    string jugador_maxrrano;
    int suma_2dados, suma_3dados;
    int vDados_jugador1[2];
    int vDados_jugador2[2];
    int vDados[2];
    int v3Dados[3];
    int dos_dados=2, tres_dados=3;

    string jugador1, jugador2, primer_jugador, segundo_jugador;

    rlutil::cls();

    cout << "Ingresar el nombre del primer jugador: ";
    getline(cin, jugador1);
    cout << endl;
    cout << "Ingresar el nombre del segundo jugador: ";
    getline(cin, jugador2);

    rlutil::cls();

    quienArranca(jugador1, jugador2, vDados_jugador1, vDados_jugador2, band_comienza1);

    if(band_comienza1)
    {
        primer_jugador=jugador1;
        segundo_jugador=jugador2;
    }
    else
    {
        primer_jugador=jugador2;
        segundo_jugador=jugador1;

    }

    setlocale(LC_CTYPE, "C");
    for(int i=0; i<5; i++)
    {
        for(int x=1; x<=2; x++)
        {
            do
            {
                // JUEGO CON 2 DADOS ---------------------------------------------------------------------------------

                if(x==1)
                {
                    rlutil::locate(37,3);
                    cout << segundo_jugador << ": " << trufas_tot2 << " trufas acumuladas";
                    rlutil::locate(1,1);
                    rlutil::setColor(rlutil::COLOR::LIGHTMAGENTA);
                    cout << "GRAN CERDO" << endl;
                    rlutil::setColor(rlutil::COLOR::WHITE);
                    cout << "------------------------------------------------------------------" << endl;
                    cout << primer_jugador << ": " << trufas_tot1 << " trufas acumuladas" << endl <<endl;
                    cout << "Turno de: " <<primer_jugador << endl;
                    cout << "Ronda #" << i+1 << endl;
                    cout << "Trufas de la ronda: " << trufas_jug1[i] << endl;
                    lanzamientos_jug1[i]=lanzamientos_jug1[i]+1;
                    if(band_lanz1)
                    {
                        max_lanz1=lanzamientos_jug1[i];
                        band_lanz1=0;
                    }
                    else if(lanzamientos_jug1[i]>max_lanz1)
                    {
                        max_lanz1=lanzamientos_jug1[i];
                    }
                    cout << "Lanzamiento #" << lanzamientos_jug1[i] << endl << endl;
                    cout << "Dados --------------->";
                }
                else
                {
                    rlutil::locate(37,3);
                    cout << primer_jugador << ": " << trufas_tot1 << " trufas acumuladas";
                    rlutil::locate(1,1);
                    rlutil::setColor(rlutil::COLOR::LIGHTMAGENTA);
                    cout << "GRAN CERDO" << endl;
                    rlutil::setColor(rlutil::COLOR::WHITE);
                    cout << "------------------------------------------------------------------" << endl;
                    cout << segundo_jugador << ": " << trufas_tot2 << " trufas acumuladas" << endl << endl;;
                    cout << "Turno de: " << segundo_jugador << endl;
                    cout << "Ronda #" << i+1 << endl;
                    cout << "Trufas de la ronda: " << trufas_jug2[i] << endl;
                    lanzamientos_jug2[i]=lanzamientos_jug2[i]+1;
                    if(band_lanz2)
                    {
                        max_lanz2=lanzamientos_jug2[i];
                        band_lanz2=0;
                    }
                    else if(lanzamientos_jug2[i]>max_lanz2)
                    {
                        max_lanz2=lanzamientos_jug2[i];
                    }
                    cout << "Lanzamiento #" << lanzamientos_jug2[i] << endl << endl;
                    cout << "Dados --------------->";
                }

                continuar_jug=0;

                if((trufas_tot1<50||trufas_tot2<50) && band_barro==0 && band_tres_dados!=1)
                {


                    // JUEGO CON 2 DADOS ------------------------------------------------------------------------------------

                    tirarDadosRandom(vDados, dos_dados);
                    dibujar_dado(vDados, dos_dados);
                    suma_2dados=vDados[0]+vDados[1];

                    // MAX NUMERO DE TRUFAS EN UN LANZAMIENTO

                    if(x==1){

                            if(suma_2dados>maxrrano){
                                maxrrano=suma_2dados;
                                jugador_maxrrano=primer_jugador;
                            }

                    }
                    else{

                        if(suma_2dados>maxrrano){
                                maxrrano=suma_2dados;
                                jugador_maxrrano=segundo_jugador;
                            }
                    }




                    // DISTINTOS ENTRE SI Y DISTINTOS DE 1

                    if(vDados[0]!=vDados[1]&&vDados[0]!=1&&vDados[1]!=1)
                    {

                        if(x==1)
                        {
                            trufas_jug1[i] = trufas_jug1[i] + vDados[0] + vDados[1];

                            trufas_tot1 += vDados[0] + vDados[1];

                            continuar(continuar_jug);
                        }
                        else
                        {
                            trufas_jug2[i] = trufas_jug2[i] + vDados[0] + vDados[1];

                            trufas_tot2 += vDados[0] + vDados[1];

                            continuar(continuar_jug);
                        }


                    }

                    // IGUALES ENTRE SI Y DISTINTOS DE 1

                    if(vDados[0]==vDados[1]&&vDados[0]!=1&&vDados[1]!=1)
                    {

                        if(x==1)
                        {
                            trufas_jug1[i] += ((vDados[0]+vDados[1])*2);

                            trufas_tot1 += ((vDados[0]+vDados[1])*2);

                            oinks1++;

                            cout << "Que suerte, hiciste un Oink!!" << endl << endl;
                            cout << "Se duplican tus puntos y volvés a lanzar";

                            rlutil::anykey();

                            continuar_jug=1;
                        }
                        else
                        {
                            trufas_jug2[i] += + ((vDados[0]+vDados[1])*2);

                            trufas_tot2 += ((vDados[0]+vDados[1])*2);

                            oinks2++;

                            cout << "Que suerte, hiciste un Oink!!" << endl << endl;
                            cout << "Se duplican tus puntos y volvés a lanzar";

                            rlutil::anykey();

                            continuar_jug=1;
                        }
                    }

                    // UN DADO ES 1 Y EL OTRO NO

                    if(vDados[0]!=vDados[1]&&(vDados[0]==1||vDados[1]==1))
                    {

                        if(x==1)
                        {
                            trufas_tot1 = trufas_tot1 - trufas_jug1[i];

                            cout << "Un AS :/" << endl << endl;
                            cout << "Perdés todas las trufas de la ronda" << endl << endl;
                            cout << "y le cedés el turno a: " << segundo_jugador;

                            rlutil::anykey();
                        }
                        else
                        {
                            trufas_tot2 = trufas_tot2 - trufas_jug2[i];

                            cout << "Un AS :/" << endl << endl;
                            cout << "Perdés todas las trufas de la ronda" << endl << endl;
                            cout << "y le cedés el turno a: " << primer_jugador;

                            rlutil::anykey();

                        }

                    }

                    // LOS DOS DADOS SON 1

                    if(vDados[0]==vDados[1]&&vDados[0]==1&&vDados[1]==1)
                    {

                        if(x==1)
                        {
                            trufas_tot1=0;
                            trufas_jug1[i]=0;

                            band_barro=1;

                            cout << "Te hundiste en el barro :(" << endl << endl;
                            cout << "Perdés todas tus trufas y le cedés el turno a: " << segundo_jugador;

                            rlutil::anykey();
                        }
                        else
                        {
                            trufas_tot2=0;
                            trufas_jug2[i]=0;

                            band_barro=1;

                            cout << "Te hundiste en el barro :(" << endl << endl;
                            cout << "Perdés todas tus trufas y le cedés el turno a: " << primer_jugador;

                            rlutil::anykey();
                        }

                    }

                    rlutil::cls();


                }

                // JUEGO CON 3 DADOS ---------------------------------------------------------------------------------

                else
                {
                    band_tres_dados=1;
                    tirarDadosRandom(v3Dados, tres_dados);
                    dibujar_dado(v3Dados, tres_dados);
                    suma_3dados=v3Dados[0]+v3Dados[1]+v3Dados[2];

                    // MAX NUMERO DE TRUFAS EN UN LANZAMIENTO

                    if(x==1){

                            if(suma_3dados>maxrrano){
                                maxrrano=suma_3dados;
                                jugador_maxrrano=primer_jugador;
                            }

                    }
                    else{

                        if(suma_3dados>maxrrano){
                                maxrrano=suma_3dados;
                                jugador_maxrrano=segundo_jugador;
                            }
                    }


                    // 3 DADOS 1, UNA MALA SUERTEEE

                    if(v3Dados[0]==v3Dados[1] && v3Dados[1]==v3Dados[2] && v3Dados[2]==1)
                    {

                        if(x==1)
                        {
                            trufas_tot2 += trufas_tot1;
                            trufas_tot1=0;
                            trufas_jug1[i]=0;

                            cout << "Te hundiste en el barro :(" << endl << endl;
                            cout << "Le cedés todas tus trufas" << endl << endl;
                            cout << " y el turno a: " << segundo_jugador;

                            rlutil::anykey();
                        }
                        else
                        {
                            trufas_tot1 += trufas_tot2;
                            trufas_tot2=0;
                            trufas_jug2[i]=0;

                            cout << "Te hundiste en el barro :(" << endl << endl;
                            cout << "Le cedés todas tus trufas" << endl << endl;
                            cout << "y el turno a: " << primer_jugador;

                            rlutil::anykey();
                        }

                    }

                    // 2 DADOS IGUALES Y UNO DISTINTO, TODOS DISTINTOS DE 1

                    if((v3Dados[0]!=1 && v3Dados[1]!=1 && v3Dados[2]!=1)
                            &&
                            ((v3Dados[0]==v3Dados[1] && v3Dados[1]!=v3Dados[2])
                             || (v3Dados[1]==v3Dados[2] && v3Dados[0]!=v3Dados[2])
                             || (v3Dados[0]==v3Dados[2] && v3Dados[0]!=v3Dados[1])))
                    {

                        if(x==1)
                        {
                            bool band_sumar=0;

                            sumar_3dados(band_sumar);

                            if(band_sumar==1)
                            {

                                trufas_jug1[i] = trufas_jug1[i] + v3Dados[0] + v3Dados[1] + v3Dados[2];

                                trufas_tot1 += v3Dados[0] + v3Dados[1] + v3Dados[2];

                                continuar(continuar_jug);
                            }
                            else
                            {
                                continuar(continuar_jug);
                            }

                        }
                        else
                        {
                            bool band_sumar=0;

                            sumar_3dados(band_sumar);

                            if(band_sumar==1)
                            {

                                trufas_jug2[i] = trufas_jug2[i] + v3Dados[0] + v3Dados[1] + v3Dados[2];

                                trufas_tot2 += v3Dados[0] + v3Dados[1] + v3Dados[2];

                                continuar(continuar_jug);
                            }
                            else
                            {
                                continuar(continuar_jug);
                            }

                        }

                    }

                    // TRES DADOS DISTINTOS ENTRE SI Y DISTINTOS DE 1

                    if((v3Dados[0]!=1 && v3Dados[1]!=1 && v3Dados[2]!=1)
                            && v3Dados[0]!=v3Dados[1]
                            && v3Dados[0]!=v3Dados[2]
                            && v3Dados[1]!=v3Dados[2])
                    {

                        if(x==1)
                        {
                            trufas_jug1[i] = trufas_jug1[i] + v3Dados[0] + v3Dados[1] + v3Dados[2];

                            trufas_tot1 += v3Dados[0] + v3Dados[1] +v3Dados[2];

                            continuar(continuar_jug);
                        }
                        else
                        {
                            trufas_jug2[i] = trufas_jug2[i] + v3Dados[0] + v3Dados[1] + v3Dados[2];

                            trufas_tot2 += v3Dados[0] + v3Dados[1] +v3Dados[2];

                            continuar(continuar_jug);
                        }

                    }

                    // UN DADO ES 1 Y LOS OTROS DOS NO

                    if((v3Dados[0]==1 && v3Dados[0]!=v3Dados[1] && v3Dados[0]!=v3Dados[2])
                            ||(v3Dados[1]==1 && v3Dados[1]!=v3Dados[0] && v3Dados[1]!=v3Dados[2])
                            ||(v3Dados[2]==1 && v3Dados[2]!=v3Dados[0] && v3Dados[2]!=v3Dados[1]))
                    {

                        if(x==1)
                        {
                            trufas_tot1 = trufas_tot1 - trufas_jug1[i];

                            cout << "Un AS :/" << endl << endl;
                            cout << "Perdés todas las trufas de la ronda" << endl << endl;
                            cout << "y le cedés el turno a: " << segundo_jugador;

                            rlutil::anykey();
                        }
                        else
                        {
                            trufas_tot2 = trufas_tot2 - trufas_jug2[i];

                            cout << "Un AS :/" << endl << endl;
                            cout << "Perdés todas las trufas de la ronda" << endl << endl;
                            cout << "y le cedés el turno a: " << primer_jugador;

                            rlutil::anykey();
                        }

                    }

                    // DOS DADOS SON 1 Y EL OTRO DISTINTO

                    if(
                        (v3Dados[0]==1 && v3Dados[1]==1 && v3Dados[2]!=1)
                        ||(v3Dados[0]==1 && v3Dados[2]==1 && v3Dados[1]!=1)
                        ||(v3Dados[1]==1 && v3Dados[2]==1 && v3Dados[0]!=1)
                    )
                    {

                        if(x==1)
                        {
                            trufas_tot1 = 0;

                            trufas_jug1[i] = 0;

                            cout << "Dos AS :/" << endl << endl;
                            cout << "Perdés todas tus trufas" << endl << endl;
                            cout << "y le cedés el turno a: " << segundo_jugador;

                            rlutil::anykey();
                        }
                        else
                        {
                            trufas_tot2 = 0;

                            trufas_jug2[i] = 0;

                            cout << "Dos AS :/" << endl << endl;
                            cout << "Perdés todas tus trufas" << endl << endl;
                            cout << "y le cedés el turno a: " << primer_jugador;

                            rlutil::anykey();
                        }

                    }

                    // 3 DADOS IGUALES

                    if(v3Dados[0]==v3Dados[1]&&v3Dados[0]==v3Dados[2]&&v3Dados[0]!=1)
                    {

                        if(x==1)
                        {
                            trufas_jug1[i] += + ((v3Dados[0]+v3Dados[1]+v3Dados[2])*2);

                            trufas_tot1 += ((v3Dados[0]+v3Dados[1]+v3Dados[2])*2);

                            oinks1++;

                            cout << endl << "Que suerte, hiciste un Oink!!" << endl << endl;
                            cout << "Se duplican tus puntos y volvés a lanzar";

                            rlutil::anykey();

                            continuar_jug=1;
                        }
                        else
                        {
                            trufas_jug2[i] += ((v3Dados[0]+v3Dados[1]+v3Dados[2])*2);

                            trufas_tot2 += ((v3Dados[0]+v3Dados[1]+v3Dados[2])*2);

                            oinks1++;

                            cout << endl << "Que suerte, hiciste un Oink!!" << endl << endl;
                            cout << "Se duplican tus puntos y volvés a lanzar";

                            rlutil::anykey();

                            continuar_jug=1;
                        }
                    }

                    rlutil::cls();

                }

            }
            while(continuar_jug==1);
        }
    }

    // CALCULO DE PUNTOS DE VICTORIA

    // más trufas en total

    if(trufas_tot1==trufas_tot2)
    {
        pdv_jug1[0]+=5;
        pdv_jug2[0]+=5;
    }
    else if(trufas_tot1>trufas_tot2)
    {
        pdv_jug1[0]+=5;
    }
    else
    {
        pdv_jug2[0]+=5;
    }

    // cada 50 trufas

    pdv_jug1[1]+=(trufas_tot1/50);
    pdv_jug2[1]+=(trufas_tot2/50);

    // oinks

    pdv_jug1[2]+=(oinks1)*2;

    pdv_jug2[2]+=(oinks2)*2;

    // cerdo codicioso (ronda con más lanzamientos)

    if(max_lanz1==max_lanz2)
    {
        pdv_jug1[3]+=3;
        pdv_jug2[3]+=3;
    }
    else if(max_lanz1>max_lanz2)
    {
        pdv_jug1[3]+=3;
    }
    else
    {
        pdv_jug2[3]+=3;
    }

    // MAXRRANO

    if(jugador_maxrrano==primer_jugador){
        pdv_jug1[5]=1;

        if(pdv_jug1[0]<pdv_jug2[0]){
            pdv_jug2[0]-=1;
        }
        if(pdv_jug1[1]<pdv_jug2[1]){
            pdv_jug2[1]-=1;
        }
        if(pdv_jug1[2]<pdv_jug2[2]){
            pdv_jug2[2]-=1;
        }
        if(pdv_jug1[3]<pdv_jug2[3]){
            pdv_jug2[3]-=1;
        }

    }
    else if(jugador_maxrrano==segundo_jugador){
        pdv_jug2[5]=1;

        if(pdv_jug2[0]<pdv_jug1[0]){
            pdv_jug1[0]-=1;
        }
        if(pdv_jug2[1]<pdv_jug1[1]){
            pdv_jug1[1]-=1;
        }
        if(pdv_jug2[2]<pdv_jug1[2]){
            pdv_jug1[2]-=1;
        }
        if(pdv_jug2[3]<pdv_jug1[3]){
            pdv_jug1[3]-=1;
        }
    }

    // TOTAL

    pdv_jug1[4]+=pdv_jug1[0]+pdv_jug1[1]+pdv_jug1[2]+pdv_jug1[3]+pdv_jug1[5];

    pdv_jug2[4]+=pdv_jug2[0]+pdv_jug2[1]+pdv_jug2[2]+pdv_jug2[3]+pdv_jug2[5];


    // CALCULO DEL MAXIMO PUNTAJE HISTÓRICO

    if (pdv_jug1[4]>=pdv_jug2[4])
    {

        if (pdv_jug1[4]>=pdv_maximo)
        {
            maximo_jugador=primer_jugador;
            pdv_maximo=pdv_jug1[4];
        }
    }
    else
    {
        if (pdv_jug2[4]>=pdv_maximo)
        {
            maximo_jugador=segundo_jugador;
            pdv_maximo=pdv_jug2[4];
        }
    }


    // FIN DEL JUEGO Y TABLA CON VALORES

    cout << "Este es el fin..." << endl << endl;
    cout << "pero no sin antes ver quién es el ganador: ";

    rlutil::anykey();

    pantalla_final(primer_jugador, segundo_jugador, pdv_jug1, pdv_jug2, trufas_tot1, trufas_tot2, max_lanz1, max_lanz2, oinks1, oinks2);

    rlutil::cls();

    return maximo_jugador;

}

//FUNCION 2 o 3 DADOS RANDOM

void tirarDadosRandom(int vDados[], int CANTIDAD)
{
    srand(time(NULL));

    for(int i=0; i<CANTIDAD; i++)
    {
        vDados[i] = (rand() % 6) + 1;
    }

}

//FUNCION PARA VER SI DESEA CONTINUAR TIRANDO

bool continuar(bool &continuar_jug)
{
    int op=1;

    do
    {
        rlutil::locate(1,14);
        cout << "                                         ";
        rlutil::locate(1,14);
        cout << "Continuar? S/N";

        switch(rlutil::getkey())
        {

        case 83:

            return continuar_jug=1;

            break;

        case 115:

            return continuar_jug=1;

            break;

        case 78:

            return continuar_jug=0;

            break;

        case 110:

            return continuar_jug=0;

            break;


        default:
            break;
        }

    }
    while(op!=0);

}

//FUNCION PARA VER SI DESEA SUMAR LOS 3 DADOS

bool sumar_3dados(bool &band_sumar)
{
    int op=1;

    do
    {
        rlutil::locate(1,14);
        cout << "                                         ";
        rlutil::locate(1,14);
        cout << "Sumar trufas? S/N";

        switch(rlutil::getkey())
        {

        case 83:

            return band_sumar=1;

            break;

        case 115:

            return band_sumar=1;

            break;

        case 78:

            return band_sumar=0;

            break;

        case 110:

            return band_sumar=0;

            break;


        default:
            break;
        }

    }
    while(op!=0);
}

//FUNCION PANTALLA QUE SE MUESTRA AL FINALIZAR UN JUEGO----------------------------------------------------------------------

void pantalla_final(string &jugador1, string &jugador2, int datos1[], int datos2[], int trufas_totales1, int trufas_totales2, int max_lan1, int max_lan2, int oinks1, int oinks2)
{
    int x=1, y=0;
    rlutil::cls();
    rlutil::hidecursor();
    rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
    cout << "GRAN CERDO" << endl;
    rlutil::setBackgroundColor(rlutil::BLACK);
    cout << "-----------------------------------------------------------------" << endl << endl;
    cout << "HITO" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Más trufas en total: " << endl;
    cout << "Cada 50 trufas: " << endl;
    cout << "Oinks: " << endl;
    cout << "Cerdo codicioso: " << endl;
    cout << "MAXRRANO: " << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "TOTAL" << endl << endl;
    rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
    if(datos1[4]>datos2[4])
    {
        cout << "GANADOR: " << jugador1 << " con " << datos1[4] << " puntos de victoria." << endl << endl;
    }
    else if(datos2[4]>datos1[4])
    {
        cout << "GANADOR: " << jugador2 << " con " << datos2[4] << " puntos de victoria." << endl << endl;
    }
    else
    {
        cout << "EMPATE!! con " << datos1[4] << " puntos de victoria cada uno." << endl << endl;
    }
    rlutil::setBackgroundColor(rlutil::BLACK);

    //JUGADOR 1
    rlutil::locate(27,4);
    cout << jugador1;
    rlutil::locate(27,6);
    cout << datos1[0] << " PDV (" << trufas_totales1 << " trufas)";
    rlutil::locate(27,7);
    cout << datos1[1] << " PDV (" << datos1[1]*50 << " trufas)"; // CORREGIR PARA EL MAXRRANO
    rlutil::locate(27,8);
    cout << datos1[2] << " PDV (" << oinks1 << " Oinks)";
    rlutil::locate(27,9);
    cout << datos1[3] << " PDV (" << max_lan1 << " lanzam)";
    rlutil::locate(27,10);
    cout << datos1[5] << " PDV";
    rlutil::locate(27,12);
    cout << datos1[4] << " PDV";

    //JUGADOR 2
    rlutil::locate(50,4);
    cout << jugador2;
    rlutil::locate(50,6);
    cout << datos2[0] << " PDV (" << trufas_totales2 << " trufas)";
    rlutil::locate(50,7);
    cout << datos2[1] << " PDV (" << datos2[1]*50 << " trufas)";
    rlutil::locate(50,8);
    cout << datos2[2] << " PDV (" << oinks2 << " Oinks)";
    rlutil::locate(50,9);
    cout << datos2[3] << " PDV (" << max_lan2 << " lanzam)";
    rlutil::locate(50,10);
    cout << datos2[5] << " PDV";
    rlutil::locate(50,12);
    cout << datos2[4] << " PDV";

    rlutil::locate(1,16);
    system("Pause");
}

//FUNCION PARA VER QUIEN EMPIEZA ----------------------------------------------------------------------------------------------

void quienArranca(string &jugador1, string &jugador2, int vec_dados1[], int vec_dados2[], bool &band_comienza1)
{
    int sumados1, sumados2;
    do
    {
        cout << jugador1 << ", toque una tecla para tirar los dados: ";

        rlutil::anykey();

        tirarDadosRandom(vec_dados1, 2);
        dibujar_dado(vec_dados1, 2);

        rlutil::anykey();
        rlutil::cls();

        sumados1 = vec_dados1[0] + vec_dados1[1];

        cout << jugador2 << ", toque una tecla para tirar los dados: ";

        rlutil::anykey();

        tirarDadosRandom(vec_dados2, 2);
        dibujar_dado(vec_dados2, 2);

        rlutil::anykey();
        rlutil::cls();

        sumados2 = vec_dados2[0] + vec_dados2[1];
    }
    while(vec_dados1[0]==vec_dados2[0]&&vec_dados1[1]==vec_dados2[1] || vec_dados1[0]==vec_dados2[1]&&vec_dados1[1]==vec_dados2[0]);

    if(sumados1>sumados2)
    {
        band_comienza1=1;
    }
    else if(sumados1==sumados2)
    {
        if(vec_dados1[0]>vec_dados2[0]&&vec_dados1[0]>vec_dados2[1] || vec_dados1[1]>vec_dados2[0]&&vec_dados1[1]>vec_dados2[1])
        {
            band_comienza1=1;
        }
    }


    if(band_comienza1)
    {
        cout << "Empieza: " << jugador1 << endl << endl;
    }
    else
    {
        cout << "Empieza: " << jugador2 << endl << endl;
    }

    system("Pause");
    rlutil::cls();
}

//FUNCION PARA DIBUJAR EL MENU ----------------------------------------------------------------------------------------------

void showItem(const char* text, int posx, int posy, bool selected)
{
    if (selected)
    {
        rlutil::setBackgroundColor(rlutil::COLOR::LIGHTMAGENTA);
        rlutil::locate(posx-3, posy);
        cout << " " << "»" << " " << text << " " << "«" << " "<< endl;
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
    }
    else
    {
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
        rlutil::locate(posx-3, posy);
        cout << "   " << text << "   " << endl;
    }
}

//INTEGRANTES DEL GRUPO

void cerditos()
{
    int y=0;
    int op=1;
    rlutil::cls();

    do
    {
        showItem("          INTEGRANTES          ", 19, 5, y==-1);
        showItem("-------------------------------", 19, 6, y==-1);
        showItem("  María Lucía Gonzalez Moreno  ", 19, 7, y==0);
        showItem("   Jorge Martín Vera Ozorio    ", 19, 8, y==1);
        showItem("     Iván Carlos Carrieri      ", 19, 9, y==2);
        showItem("     Rodrigo Germán Tevez      ", 19, 10, y==3);
        showItem("     Rolando Cauda Presali     ", 19, 11, y==4);
        showItem("-------------------------------", 19, 12, y==-1);
        showItem("            Volver             ", 19, 13, y==5);

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
            if(y>5)
            {
                y = 5;
            }
            break;
        case 1:
            switch(y)
            {

            case 0:
                rlutil::cls();
                showItem("        Legajo N°25945         ", 19, 7, y==0);
                rlutil::anykey();

                break;
            case 1:
                rlutil::cls();
                showItem("        Legajo N°26307         ", 19, 8, y==1);
                rlutil::anykey();
                break;
            case 2:
                rlutil::cls();
                showItem("        Legajo N°25845         ", 19, 9, y==2);
                rlutil::anykey();
                break;
            case 3:
                rlutil::cls();
                showItem("        Legajo N°26158         ", 19, 10, y==3);
                rlutil::anykey();
                break;
            case 4:
                rlutil::cls();
                showItem("        Legajo N°27070         ", 19, 11, y==4);
                rlutil::anykey();
                break;
            case 5:
                op=0;

            default:
                break;
            }
            break;
        default:
            break;
        }
    }
    while(op!=0);
    rlutil::cls();
}

