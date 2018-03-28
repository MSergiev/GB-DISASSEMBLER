#ifndef DISASSEMBLER_H
#define DISASSEMBLER_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include "INSTRUCTION_SET.h"

typedef unsigned char BYTE;

#define CI (BYTE)(val[0])

class DISASSEMBLER {
    
public:

	static inline void run( const char* filename ) {
		
		std::ifstream file( filename, std::ios::binary );
		if( !file ) {
			std::cerr << "ERROR: " << filename << " does not exist!" << std::endl;
			return;
		}
		
        unsigned long instNum = 0;
        char val[3];
        unsigned char len;
        
        std::cout << std::setw(80) << std::setfill('-') << "\n";
        std::cout << std::setfill(' ') << std::setw(8) << "NUM" << std::setw(13) << "INST" << std::setw(6) << "HEX" << std::setw(17) << "COMMENT" << std::endl;
        std::cout << std::setw(80) << std::setfill('-') << "\n";
        
        while(1) {
//             switch( instNum ) {
//                 case 0x0000: std::cout << "\n=====   ENTRY POINT   =====\n\n"; break;
//                 case 0x0100: std::cout << "\n=====   HEADER   =====\n\n"; break;
//                 case 0x0150: std::cout << "\n=====   MAIN   =====\n\n"; break;
//                 default: break;
//             }
            
            file.seekg( instNum );
            file.read( val, 1 );
            if( file.eof() ) break;
            
            std::cout << std::hex << "0x" << std::setfill('0') << std::setw(6) << instNum;
            bool isExt = ((BYTE)val[0] == 0xCB);
            
            if( isExt ) {
                len = EXT_INST_LEN;
                file.seekg( instNum+1 );
                file.read( val, len );
                if( file.eof() ) break;
                std::cout << std::setw(13) << std::setfill(' ') << EXT_INST[CI];
                instNum+=EXT_INST_LEN;
            } else {
                len = INST_LEN[CI];
                file.seekg( instNum );
                file.read( val, len );
                std::cout << std::setw(13)  << std::setfill(' ')<< INST[CI];
                instNum+=INST_LEN[CI];
            }
            
            std::cout << std::hex << "   [" << std::setfill('0');
            for( BYTE i = 0; i < len; ++i ) {
                std::cout << std::setw(2) << +(BYTE)val[i] << (i<len-1 ? " " : "");
            }
            std::cout << "]   "; 
            for( BYTE i = 0; i < (3-len); ++i ) std::cout << "   ";
            std::cout << (isExt?EXT_INST_CMNT[CI]:INST_CMNT[CI]) << std::endl;
        }
        
	}
    
};

#endif
