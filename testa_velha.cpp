
/**
 * \file testa_velha.cpp
 */

#include "catch_amalgamated.hpp"
#include "velha.cpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };

	int teste2[3][3]={    { 2, 2, 2 }, 
	                      { 1, 0, 1 },
						  { 1, 2, 1 }

					};
    REQUIRE( VerificaVelha(teste1) == 1 );
	REQUIRE( VerificaVelha(teste2) == 2 );


}
 
