#include <iostream>
#include "DISASSEMBLER.h"

const char* filename = "rom.gb";

int main( int argc, const char* argv[] ) {
    
    if( argc < 2 ) {
        DISASSEMBLER::run( filename );
    }
    else {
        DISASSEMBLER::run( argv[1] );
    }
	

	return 0;
}
