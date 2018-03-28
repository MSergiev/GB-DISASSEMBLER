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
//             switch( instNum ) {
//                 case 0x0000: std::cout << "\n=====   ENTRY POINT   =====\n\n"; break;
//                 case 0x0100: std::cout << "\n=====   HEADER   =====\n\n"; break;
//                 case 0x0150: std::cout << "\n=====   MAIN   =====\n\n"; break;
//                 default: break;
//             }
            
            file.seekg( instNum );
            file.read( &val, 1 );
            if( file.eof() ) return;
            unsigned char inst = (unsigned char)val;
            std::cout << std::hex << "0x" << std::setfill('0') << std::setw(6) << instNum;
            bool isExt = (inst == 0xCB);
            if( isExt ) {
                file.seekg( instNum+1 );
                file.read( &val, 1 );
                if( file.eof() ) return;
                inst = (unsigned char)val;
                std::cout << std::setw(13) << std::setfill(' ') << EXT_INST[inst];
                instNum+=EXT_INST_LEN;
            } else {
                std::cout << std::setw(13)  << std::setfill(' ')<< INST[inst];
                instNum+=INST_LEN[inst];
            }
            std::cout << std::hex << "   [" << std::setfill('0') << std::setw(2) << +inst << "]   " << (isExt?EXT_INST_CMNT[inst]:INST_CMNT[inst]) << std::endl;
        }
        
	}
    
};

#endif
