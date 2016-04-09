/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: L1pc
 *
 * Created on 7 de abril de 2016, 10:48
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
void seleccion(int mat[][4], int colores[4], int tam, bool coloresUsados[], int coloresEmpleados) {
    if (tam == 0) {
        colores[tam] = 0;
        coloresEmpleados++;
        return;
    } else {
        bool adyacentes[4];
        for (int i = 0; i < 4; i++) {
            adyacentes[i] = false;
            if (mat[tam][i] == 1) {
                adyacentes[i] = true;
            }
        }
        int candidatos[4];
        int tamCandidatos = 0;
        for (int i = 0; i < 4; i++) {
            if (coloresUsados[i] && !adyacentes[i]) {
                candidatos[tamCandidatos++] = i;
            }
        }
        if (tamCandidatos == 0) {
            colores[tam] = coloresEmpleados;
            coloresEmpleados++;
        } else {
            colores[tam] = candidatos[0];
        }
    }
}

void voraz(int mat[][4], int colores[4], int tam) {
    bool coloresUsados[4];
    int coloresEmpleados = 0;
    while (tam < 4) {
        seleccion(mat, colores, tam, coloresUsados, coloresEmpleados);
        tam++;
    }
}

int main(int argc, char** argv) {
    int mat[4][4] = {
        0, 1, 1, 1,
        1, 0, 1, 1,
        1, 1, 0, 1,
        1, 1, 1, 0
    };
    int tam = 0;
    int colores[4] = {-1, -1, -1, -1};
    voraz(mat, colores, tam);
    for (int i = 0; i < 4; i++) {
        cout << colores[i] << endl;
    }
    return 0;
}





