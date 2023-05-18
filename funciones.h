#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void showItem(const char* text, int posx, int posy, bool selected); // DIBUJAR EL MENU

string jugar(string& maximo_jugador, int &pdv_maximo, bool &se_jugo); //FUNCION PARA JUGAR

void quienArranca(string &jugador1, string &jugador2, int vec_dados1[], int vec_dados2[], bool &band_comienza1); // FUNCION PARA VER QUIEN EMPIEZA

void cerditos(); // INTEGRANTES DEL GRUPO

void estadisticas(string &maximo_jugador, int &pdv_maximo, bool &se_jugo); // ESTADISTICAS

void dibujar_dado(int daditos[], int CANTIDAD); // FUNCION PARA DIBUJAR LOS DADOS

void tirarDadosRandom(int vDados[], int CANTIDAD); // FUNCION PARA DADOS RANDOM

void pantalla_final(string &jugador1, string &jugador2, int datos1[], int datos2[], int trufas_totales1, int trufas_totales2, int max_lan1, int max_lan2, int oinks1, int oinks2);

bool continuar(bool &continuar_jug);

bool sumar_3dados(bool &band_sumar);

#endif // FUNCIONES_H_INCLUDED
