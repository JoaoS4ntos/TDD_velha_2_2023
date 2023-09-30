/**
 * \file  velha.cpp
 */

 
#include "catch_amalgamated.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
    // Verificar colunas
    for (int coluna = 0; coluna < 3; coluna++) {
        if (velha[0][coluna] == velha[1][coluna] && velha[1][coluna] == velha[2][coluna] && velha[0][coluna] == 1) {
            return 1;
        } else if (velha[0][coluna] == velha[1][coluna] && velha[1][coluna] == velha[2][coluna] && velha[0][coluna] == 2) {
            return 2;
        }
    }


	return 0; /*!< retorna zero para teste */
}


