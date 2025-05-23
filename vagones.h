// MENU DE OPCIONES
#ifndef VAGONES_H
#define VAGONES_H

#include "constantes.h"
#include "peaje.h"

typedef char t_flecha[4];
typedef char t_tarea[30];
typedef char t_h2[20];
typedef t_tarea t_matriz[MAX];
typedef t_flecha t_matriz2[MAX];

void agregar_titulo(t_h2 &titulo);
void ingresar_tarea(t_matriz2 &no_hecho, t_matriz &tareas, int &ocup, t_h2 &titulo);
void mostrar_tarea(t_matriz2 no_hecho, t_matriz tareas, int ocup, t_h2 titulo);
void modificar_tarea(t_matriz2 &no_hecho, t_matriz &tareas, int &ocup);
  void modtarea_tr(t_matriz2 &no_hecho, t_matriz &tareas, int ocup, char sub_op);
  void modtarea_v(t_matriz2 &no_hecho, t_matriz &tareas, int &ocup);
  void modtarea_c(t_matriz2 &no_hecho, t_matriz &tareas, int &ocup);
    void revertir_check(t_matriz2 &no_hecho, t_matriz tareas, int ocup, char op);
    void corregir_tarea(t_matriz2 no_hecho, t_matriz &tareas, int ocup, char op);
void exportar_tarea(t_matriz2 no_hecho, t_matriz tareas, int ocup, t_h2 tutulo);


#endif