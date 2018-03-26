#ifndef DISASSEMBLER_H
#define DISASSEMBLER_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include "INSTRUCTION_SET.h"


class DISASSEMBLER {
    
public:

	static inline void run( const char* filename ) {
		
		std::ifstream file( filename, std::ios::binary );
		if( !file ) {
			std::cerr << "ERROR: " << filename << " does not exist!" << std::endl;
			return;
		}
		
        unsigned long instNum = 0;
        char val = 0;
        
        while(1) {
            switch( instNum ) {
                case 0x0000: std::cout << "\n=====   ENTRY POINT   =====\n\n"; break;
                case 0x0100: std::cout << "\n=====   HEADER   =====\n\n"; break;
                case 0x0150: std::cout << "\n=====   MAIN   =====\n\n"; break;
                default: break;
            }
            
            file.seekg( instNum );
            file.read( &val, 1 );
            if( file.eof() ) return;
            std::cout << std::hex << "0x" << std::setfill('0') << std::setw(4) << instNum;
            std::cout << std::dec << " (" << instNum  << ")";
            std::cout << " -> " << INST[(unsigned char)val] << std::endl;
            instNum++;
        }
        
	}
    
};

#endif
