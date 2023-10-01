
/**
 * \file testa_velha.cpp
 */

#include "catch_amalgamated.hpp"
#include "velha.cpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, //testando coluna
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };

	int teste2[3][3]={    { 2, 2, 2 }, //testando linha
	                      { 1, 0, 1 },
						  { 1, 2, 1 }

					};
	int teste3[3][3]={    { 2, 2, 1 }, //testando diagonal
	                      { 1, 2, 1 },
						  { 1, 1, 2 }

					};
	int teste4[3][3]={    { 2, 0, 1 }, //testando empate
	                      { 0, 2, 0 },
						  { 1, 0, 1 }

					};
	int teste5[3][3]={    { 0, 0, 0 }, //testando indefinição
	                      { 0, 0, 0 },
						  { 0, 0, 1 }

					};
	int teste6[3][3]={    { 1, 1, 1 }, //testando jogo impossível
	                      { 1, 1, 1 },
						  { 1, 1, 1 }

					};
	
    REQUIRE( VerificaVelha(teste1) == 1 );
	REQUIRE( VerificaVelha(teste2) == 2 );
	REQUIRE( VerificaVelha(teste3) == 2);
	REQUIRE( VerificaVelha(teste4) == 0);
	REQUIRE( VerificaVelha(teste5) == -1);
	REQUIRE( VerificaVelha(teste6) == -2);

}
 
