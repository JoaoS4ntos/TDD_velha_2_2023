/**
 * \file  velha.cpp
 */

 
#include "catch_amalgamated.hpp"
#include <iostream>
#include <vector>
#include <algorithm>


/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{   
    int xis = 0 ;
    int bola = 0;
    for (int linha = 0; linha < 3;linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            if (velha[linha][coluna]==1) {
                xis = xis+1;
            } else if (velha[linha][coluna]==2) {
                bola = bola+1;  
            }
        }
    }
    if (xis+bola<5){
        return -1;
    } else if (xis > bola+1 || bola>xis){
        return -2;
    } else {
            // Verificar colunas
            for (int coluna = 0; coluna < 3; coluna++) {
                if (velha[0][coluna] == velha[1][coluna] && velha[1][coluna] == velha[2][coluna] && velha[0][coluna] == 1) {
                    return 1;
                } else if (velha[0][coluna] == velha[1][coluna] && velha[1][coluna] == velha[2][coluna] && velha[0][coluna] == 2) {
                    return 2;
                }
            }
            // verificar linhas
            for (int linha = 0; linha < 3; linha++) {
                if (velha[linha][0] == velha[linha][1] && velha[linha][1] == velha[linha][2] && velha[linha][0] == 1) {
                    return 1;
                } else if (velha[linha][0] == velha[linha][1] && velha[linha][1] == velha[linha][2] && velha[linha][0] == 2) {
                    return 2;
                }
            }
            // Verificar diagonais
            if ((velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] && velha[0][0] == 1) || (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] && velha[0][2] == 1)) {
                return 1;
            } else if ((velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] && velha[0][0] == 2) || (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] && velha[0][2] == 2)) {
                return 2;
            }


            return 0; /*!< retorna zero para teste */}
}

// Link do repositório git:https://github.com/JoaoS4ntos/TDD_velha_2_2023.git
