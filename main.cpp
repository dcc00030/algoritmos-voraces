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

#include <cstdlib>

using namespace std;

/*
 * 
 */
void seleccion(int horario[][4], int charlas[],int tam){
    if(tam == 0){
        horario[1][0]=charlas[0];
    }else{
        
    }
}
void organizar(int horario[][4], int charlas[]){
    int tam = 0;
    while(tam < 8){
        seleccion(horario,charlas,tam);
        tam++;
    }
}
int main(int argc, char** argv) {
    int horario[4][4]={
        0,1,2,3,
        -1,-1,-1,-1,
        -1,-1,-1,-1,
        -1,-1,-1,-1};//en la primera fila insertaremos las distintas aulas en el resto haremos como un horario
    int charlas[8]={3,8,9,2,3,3,9,8};
    organizar(horario,charlas);
    return 0;
}

