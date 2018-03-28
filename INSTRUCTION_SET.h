#ifndef INSTRUCTION_SET_H
#define INSTRUCTION_SET_H

#include <map>
#include <string>

static const std::string INST[] = {
    "NOP",                //0x00
    "LD BC,d16",          //0x01
    "LD (BC),A",          //0x02
    "INC BC",             //0x03
    "INC B",              //0x04
    "DEC B",              //0x05
    "LD B,d8",            //0x06
    "RLCA",               //0x07
    "LD (a16),SP",        //0x08
    "ADD HL,BC",          //0x09
    "LD A,(BC)",          //0x0A
    "DEC BC",             //0x0B
    "INC C",              //0x0C
    "DEC C",              //0x0D
    "LD C,d8",            //0x0E
    "RRCA",               //0x0F
    "STOP 0",             //0x10
    "LD DE,d16",          //0x11
    "LD (DE),A",          //0x12
    "INC DE",             //0x13
    "INC D",              //0x14
    "DEC D",              //0x15
    "LD D,d8",            //0x16
    "RLA",                //0x17
    "JR r8",              //0x18
    "ADD HL,DE",          //0x19
    "LD A,(DE)",          //0x1A
    "DEC DE",             //0x1B
    "INC E",              //0x1C
    "DEC E",              //0x1D
    "LD E,d8",            //0x1E
    "RRA",                //0x1F
    "JR NZ,r8",           //0x20
    "LD HL,d16",          //0x21
    "LD (HL+),A",         //0x22
    "INC HL",             //0x23
    "INC H",              //0x24
    "DEC H",              //0x25
    "LD H,d8",            //0x26
    "DAA",                //0x27
    "JR Z,r8",            //0x28
    "ADD HL,HL",          //0x29
    "LD A,(HL+)",         //0x2A
    "DEC HL",             //0x2B
    "INC L",              //0x2C
    "DEC L",              //0x2D
    "LD L,d8",            //0x2E
    "CPL",                //0x2F
    "JR NC,r8",           //0x30
    "LD SP,d16",          //0x31
    "LD (HL-),A",         //0x32
    "INC SP",             //0x33
    "INC (HL)",           //0x34
    "DEC (HL)",           //0x35
    "LD (HL),d8",         //0x36
    "SCF",                //0x37
    "JR C,r8",            //0x38
    "ADD HL,SP",          //0x39
    "LD A,(HL-)",         //0x3A
    "DEC SP",             //0x3B
    "INC A",              //0x3C
    "DEC A",              //0x3D
    "LD A,d8",            //0x3E
    "CCF",                //0x3F
    "LD B,B",             //0x40
    "LD B,C",             //0x41
    "LD B,D",             //0x42
    "LD B,E",             //0x43
    "LD B,H",             //0x44
    "LD B,L",             //0x45
    "LD B,(HL)",          //0x46
    "LD B,A",             //0x47
    "LD C,B",             //0x48
    "LD C,C",             //0x49
    "LD C,D",             //0x4A
    "LD C,E",             //0x4B
    "LD C,H",             //0x4C
    "LD C,L",             //0x4D
    "LD C,(HL)",          //0x4E
    "LD C,A",             //0x4F
    "LD D,B",             //0x40
    "LD D,C",             //0x51
    "LD D,D",             //0x52
    "LD D,E",             //0x53
    "LD D,H",             //0x54
    "LD D,L",             //0x55
    "LD D,(HL)",          //0x56
    "LD D,A",             //0x57
    "LD E,B",             //0x58
    "LD E,C",             //0x59
    "LD E,D",             //0x5A
    "LD E,E",             //0x5B
    "LD E,H",             //0x5C
    "LD E,L",             //0x5D
    "LD E,(HL)",          //0x5E
    "LD E,A",             //0x5F
    "LD H,B",             //0x60
    "LD H,C",             //0x61
    "LD H,D",             //0x62
    "LD H,E",             //0x63
    "LD H,H",             //0x64
    "LD H,L",             //0x65
    "LD H,(HL)",          //0x66
    "LD H,A",             //0x67
    "LD L,B",             //0x68
    "LD L,C",             //0x69
    "LD L,D",             //0x6A
    "LD L,E",             //0x6B
    "LD L,H",             //0x6C
    "LD L,L",             //0x6D
    "LD L,(HL)",          //0x6E
    "LD L,A",             //0x6F
    "LD (HL),B",          //0x00
    "LD (HL),C",          //0x71
    "LD (HL),D",          //0x72
    "LD (HL),E",          //0x73
    "LD (HL),H",          //0x74
    "LD (HL),L",          //0x75
    "HALT",               //0x76
    "LD (HL),A",          //0x77
    "LD A,B",             //0x78
    "LD A,C",             //0x79
    "LD A,D",             //0x7A
    "LD A,E",             //0x7B
    "LD A,H",             //0x7C
    "LD A,L",             //0x7D
    "LD A,(HL)",          //0x7E
    "LD A,A",             //0x7F
    "ADD A,B",            //0x80
    "ADD A,C",            //0x81
    "ADD A,D",            //0x82
    "ADD A,E",            //0x83
    "ADD A,H",            //0x84
    "ADD A,L",            //0x85
    "ADD A,(HL)",         //0x86
    "ADD A,A",            //0x87
    "ADC A,B",            //0x88
    "ADC A,C",            //0x89
    "ADC A,D",            //0x8A
    "ADC A,E",            //0x8B
    "ADC A,H",            //0x8C
    "ADC A,L",            //0x8D
    "ADC A,(HL)",         //0x8E
    "ADC A,A",            //0x8F
    "SUB B",              //0x90
    "SUB C",              //0x91
    "SUB D",              //0x92
    "SUB E",              //0x93
    "SUB H",              //0x94
    "SUB L",              //0x95
    "SUB (HL)",           //0x96
    "SUB A",              //0x97
    "SBC A,B",            //0x98
    "SBC A,C",            //0x99
    "SBC A,D",            //0x9A
    "SBC A,E",            //0x9B
    "SBC A,H",            //0x9C
    "SBC A,L",            //0x9D
    "SBC A,(HL)",         //0x9E
    "SBC A,A",            //0x9F
    "AND B",              //0xA0
    "AND C",              //0xA1
    "AND D",              //0xA2
    "AND E",              //0xA3
    "AND H",              //0xA4
    "AND L",              //0xA5
    "AND (HL)",           //0xA6
    "AND A",              //0xA7
    "XOR B",              //0xA8
    "XOR C",              //0xA9
    "XOR D",              //0xAA
    "XOR E",              //0xAB
    "XOR H",              //0xAC
    "XOR L",              //0xAD
    "XOR (HL)",           //0xAE
    "XOR A",              //0xAF
    "OR B",               //0x00
    "OR C",               //0xB1
    "OR D",               //0xB2
    "OR E",               //0xB3
    "OR H",               //0xB4
    "OR L",               //0xB5
    "OR (HL)",            //0xB6
    "OR A",               //0xB7
    "CP B",               //0xB8
    "CP C",               //0xB9
    "CP D",               //0xBA
    "CP E",               //0xBB
    "CP H",               //0xBC
    "CP L",               //0xBD
    "CP (HL)",            //0xBE
    "CP A",               //0xBF
    "RET NZ",             //0xC0
    "POP BC",             //0xC1
    "JP NZ,a16",          //0xC2
    "JP a16",             //0xC3
    "CALL NZ,a16",        //0xC4
    "PUSH BC",            //0xC5
    "ADD A,d8",           //0xC6
    "RST 00H",            //0xC7
    "RET Z",              //0xC8
    "RET",                //0xC9
    "JP Z,a16",           //0xCA
    "PREFIX CB",          //0xCB
    "CALL Z,a16",         //0xCC
    "CALL a16",           //0xCD
    "ADC A,d8",           //0xCE
    "RST 08H",            //0xCF
    "RET NC",             //0xD0
    "POP DE",             //0xD1
    "JP NC,a16",          //0xD2
    "",                   //0xD3
    "CALL NC,a16",        //0xD4
    "PUSH DE",            //0xD5
    "SUB d8",             //0xD6
    "RST 10H",            //0xD7
    "RET C",              //0xD8
    "RETI",               //0xD9
    "JP C,a16",           //0xDA
    "",                   //0xDB
    "CALL C,a16",         //0xDC
    "",                   //0xDD
    "SBC A,d8",           //0xDE
    "RST 18H",            //0xDF
    "LDH (a8),A",         //0xE0
    "POP HL",             //0xE1
    "LD (C),A",           //0xE2
    "",                   //0xE3
    "",                   //0xE4
    "PUSH HL",            //0xE5
    "AND d8",             //0xE6
    "RST 20H",            //0xE7
    "ADD SP,r8",          //0xE8
    "JP (HL)",            //0xE9
    "LD (a16),A",         //0xEA
    "",                   //0xEB
    "",                   //0xEC
    "",                   //0xED
    "XOR d8",             //0xEE
    "RST 28H",            //0xEF
    "LDH A,(a8)",         //0xF0
    "POP AF",             //0xF1
    "LD A,(C)",           //0xF2
    "DI",                 //0xF3
    "",                   //0xF4
    "PUSH AF",            //0xF5
    "OR d8",              //0xF6
    "RST 30H",            //0xF7
    "LD HL,SP+r8",        //0xF8
    "LD SP,HL",           //0xF9
    "LD A,(a16)",         //0xFA
    "EI",                 //0xFB
    "",                   //0xFC
    "",                   //0xFD
    "CP d8",              //0xFE
    "RST 38H"             //0xFF
};

static const unsigned char INST_LEN[] = {
    1,    //0x00
    3,    //0x01
    1,    //0x02
    1,    //0x03
    1,    //0x04
    1,    //0x05
    2,    //0x06
    1,    //0x07
    3,    //0x08
    1,    //0x09
    1,    //0x0A
    1,    //0x0B
    1,    //0x0C
    1,    //0x0D
    2,    //0x0E
    1,    //0x0F
    2,    //0x10
    3,    //0x11
    1,    //0x12
    1,    //0x13
    1,    //0x14
    1,    //0x15
    2,    //0x16
    1,    //0x17
    2,    //0x18
    1,    //0x19
    1,    //0x1A
    1,    //0x1B
    1,    //0x1C
    1,    //0x1D
    2,    //0x1E
    1,    //0x1F
    2,    //0x20
    3,    //0x21
    1,    //0x22
    1,    //0x23
    1,    //0x24
    1,    //0x25
    2,    //0x26
    1,    //0x27
    2,    //0x28
    1,    //0x29
    1,    //0x2A
    1,    //0x2B
    1,    //0x2C
    1,    //0x2D
    2,    //0x2E
    1,    //0x2F
    2,    //0x30
    3,    //0x31
    1,    //0x32
    1,    //0x33
    1,    //0x34
    1,    //0x35
    2,    //0x36
    1,    //0x37
    2,    //0x38
    1,    //0x39
    1,    //0x3A
    1,    //0x3B
    1,    //0x3C
    1,    //0x3D
    2,    //0x3E
    1,    //0x3F
    1,    //0x40
    1,    //0x41
    1,    //0x42
    1,    //0x43
    1,    //0x44
    1,    //0x45
    1,    //0x46
    1,    //0x47
    1,    //0x48
    1,    //0x49
    1,    //0x4A
    1,    //0x4B
    1,    //0x4C
    1,    //0x4D
    1,    //0x4E
    1,    //0x4F
    1,    //0x40
    1,    //0x51
    1,    //0x52
    1,    //0x53
    1,    //0x54
    1,    //0x55
    1,    //0x56
    1,    //0x57
    1,    //0x58
    1,    //0x59
    1,    //0x5A
    1,    //0x5B
    1,    //0x5C
    1,    //0x5D
    1,    //0x5E
    1,    //0x5F
    1,    //0x60
    1,    //0x61
    1,    //0x62
    1,    //0x63
    1,    //0x64
    1,    //0x65
    1,    //0x66
    1,    //0x67
    1,    //0x68
    1,    //0x69
    1,    //0x6A
    1,    //0x6B
    1,    //0x6C
    1,    //0x6D
    1,    //0x6E
    1,    //0x6F
    1,    //0x00
    1,    //0x71
    1,    //0x72
    1,    //0x73
    1,    //0x74
    1,    //0x75
    1,    //0x76
    1,    //0x77
    1,    //0x78
    1,    //0x79
    1,    //0x7A
    1,    //0x7B
    1,    //0x7C
    1,    //0x7D
    1,    //0x7E
    1,    //0x7F
    1,    //0x80
    1,    //0x81
    1,    //0x82
    1,    //0x83
    1,    //0x84
    1,    //0x85
    1,    //0x86
    1,    //0x87
    1,    //0x88
    1,    //0x89
    1,    //0x8A
    1,    //0x8B
    1,    //0x8C
    1,    //0x8D
    1,    //0x8E
    1,    //0x8F
    1,    //0x90
    1,    //0x91
    1,    //0x92
    1,    //0x93
    1,    //0x94
    1,    //0x95
    1,    //0x96
    1,    //0x97
    1,    //0x98
    1,    //0x99
    1,    //0x9A
    1,    //0x9B
    1,    //0x9C
    1,    //0x9D
    1,    //0x9E
    1,    //0x9F
    1,    //0xA0
    1,    //0xA1
    1,    //0xA2
    1,    //0xA3
    1,    //0xA4
    1,    //0xA5
    1,    //0xA6
    1,    //0xA7
    1,    //0xA8
    1,    //0xA9
    1,    //0xAA
    1,    //0xAB
    1,    //0xAC
    1,    //0xAD
    1,    //0xAE
    1,    //0xAF
    1,    //0x00
    1,    //0xB1
    1,    //0xB2
    1,    //0xB3
    1,    //0xB4
    1,    //0xB5
    1,    //0xB6
    1,    //0xB7
    1,    //0xB8
    1,    //0xB9
    1,    //0xBA
    1,    //0xBB
    1,    //0xBC
    1,    //0xBD
    1,    //0xBE
    1,    //0xBF
    1,    //0xC0
    1,    //0xC1
    3,    //0xC2
    3,    //0xC3
    3,    //0xC4
    1,    //0xC5
    2,    //0xC6
    1,    //0xC7
    1,    //0xC8
    1,    //0xC9
    3,    //0xCA
    1,    //0xCB
    3,    //0xCC
    3,    //0xCD
    2,    //0xCE
    1,    //0xCF
    1,    //0xD0
    1,    //0xD1
    3,    //0xD2
    1,    //0xD3
    3,    //0xD4
    1,    //0xD5
    2,    //0xD6
    1,    //0xD7
    1,    //0xD8
    1,    //0xD9
    3,    //0xDA
    1,    //0xDB
    3,    //0xDC
    1,    //0xDD
    2,    //0xDE
    1,    //0xDF
    2,    //0xE0
    1,    //0xE1
    2,    //0xE2
    1,    //0xE3
    1,    //0xE4
    1,    //0xE5
    2,    //0xE6
    1,    //0xE7
    2,    //0xE8
    1,    //0xE9
    3,    //0xEA
    1,    //0xEB
    1,    //0xEC
    1,    //0xED
    2,    //0xEE
    1,    //0xEF
    2,    //0xF0
    1,    //0xF1
    2,    //0xF2
    1,    //0xF3
    1,    //0xF4
    1,    //0xF5
    2,    //0xF6
    1,    //0xF7
    2,    //0xF8
    1,    //0xF9
    3,    //0xFA
    1,    //0xFB
    1,    //0xFC
    1,    //0xFD
    2,    //0xFE
    1,    //0xFF
};   


static const std::string EXT_INST[] = {
    "RLC B",        //0x00
    "RLC C",        //0x01
    "RLC D",        //0x02
    "RLC E",        //0x03
    "RLC H",        //0x04
    "RLC L",        //0x05
    "RLC (HL)",     //0x06
    "RLC A",        //0x07
    "RRC B",        //0x08
    "RRC C",        //0x09
    "RRC D",        //0x0A
    "RRC E",        //0x0B
    "RRC H",        //0x0C
    "RRC L",        //0x0D
    "RRC (HL)",     //0x0E
    "RRC A",        //0x0F
    "RL B",         //0x10
    "RL C",         //0x11
    "RL D",         //0x12
    "RL E",         //0x13
    "RL H",         //0x14
    "RL L",         //0x15
    "RL (HL)",      //0x16
    "RL A",         //0x17
    "RR B",         //0x18
    "RR C",         //0x19
    "RR D",         //0x1A
    "RR E",         //0x1B
    "RR H",         //0x1C
    "RR L",         //0x1D
    "RR (HL)",      //0x1E
    "RR A",         //0x1F
    "SLA B",        //0x20
    "SLA C",        //0x21
    "SLA D",        //0x22
    "SLA E",        //0x23
    "SLA H",        //0x24
    "SLA L",        //0x25
    "SLA (HL)",     //0x26
    "SLA A",        //0x27
    "SRA B",        //0x28
    "SRA C",        //0x29
    "SRA D",        //0x2A
    "SRA E",        //0x2B
    "SRA H",        //0x2C
    "SRA L",        //0x2D
    "SRA (HL)",     //0x2E
    "SRA A",        //0x2F
    "SWAP B",       //0x30
    "SWAP C",       //0x31
    "SWAP D",       //0x32
    "SWAP E",       //0x33
    "SWAP H",       //0x34
    "SWAP L",       //0x35
    "SWAP (HL)",    //0x36
    "SWAP A",       //0x37
    "SRL B",        //0x38
    "SRL C",        //0x39
    "SRL D",        //0x3A
    "SRL E",        //0x3B
    "SRL H",        //0x3C
    "SRL L",        //0x3D
    "SRL (HL)",     //0x3E
    "SRL A",        //0x3F
    "BIT 0,B",      //0x40
    "BIT 0,C",      //0x41
    "BIT 0,D",      //0x42
    "BIT 0,E",      //0x43
    "BIT 0,H",      //0x44
    "BIT 0,L",      //0x45
    "BIT 0,(HL)",   //0x46
    "BIT 0,A",      //0x47
    "BIT 1,B",      //0x48
    "BIT 1,C",      //0x49
    "BIT 1,D",      //0x4A
    "BIT 1,E",      //0x4B
    "BIT 1,H",      //0x4C
    "BIT 1,L",      //0x4D
    "BIT 1,(HL)",   //0x4E
    "BIT 1,A",      //0x4F
    "BIT 2,B",      //0x40
    "BIT 2,C",      //0x51
    "BIT 2,D",      //0x52
    "BIT 2,E",      //0x53
    "BIT 2,H",      //0x54
    "BIT 2,L",      //0x55
    "BIT 2,(HL)",   //0x56
    "BIT 2,A",      //0x57
    "BIT 3,B",      //0x58
    "BIT 3,C",      //0x59
    "BIT 3,D",      //0x5A
    "BIT 3,E",      //0x5B
    "BIT 3,H",      //0x5C
    "BIT 3,L",      //0x5D
    "BIT 3,(HL)",   //0x5E
    "BIT 3,A",      //0x5F
    "BIT 4,B",      //0x60
    "BIT 4,C",      //0x61
    "BIT 4,D",      //0x62
    "BIT 4,E",      //0x63
    "BIT 4,H",      //0x64
    "BIT 4,L",      //0x65
    "BIT 4,(HL)",   //0x66
    "BIT 4,A",      //0x67
    "BIT 5,B",      //0x68
    "BIT 5,C",      //0x69
    "BIT 5,D",      //0x6A
    "BIT 5,E",      //0x6B
    "BIT 5,H",      //0x6C
    "BIT 5,L",      //0x6D
    "BIT 5,(HL)",   //0x6E
    "BIT 5,A",      //0x6F
    "BIT 6,B",      //0x00
    "BIT 6,C",      //0x71
    "BIT 6,D",      //0x72
    "BIT 6,E",      //0x73
    "BIT 6,H",      //0x74
    "BIT 6,L",      //0x75
    "BIT 6,(HL)",   //0x76
    "BIT 6,A",      //0x77
    "BIT 7,B",      //0x78
    "BIT 7,C",      //0x79
    "BIT 7,D",      //0x7A
    "BIT 7,E",      //0x7B
    "BIT 7,H",      //0x7C
    "BIT 7,L",      //0x7D
    "BIT 7,(HL)",   //0x7E
    "BIT 7,A",      //0x7F
    "RES 0,B",      //0x80
    "RES 0,C",      //0x81
    "RES 0,D",      //0x82
    "RES 0,E",      //0x83
    "RES 0,H",      //0x84
    "RES 0,L",      //0x85
    "RES 0,(HL)",   //0x86
    "RES 0,A",      //0x87
    "RES 1,B",      //0x88
    "RES 1,C",      //0x89
    "RES 1,D",      //0x8A
    "RES 1,E",      //0x8B
    "RES 1,H",      //0x8C
    "RES 1,L",      //0x8D
    "RES 1,(HL)",   //0x8E
    "RES 1,A",      //0x8F
    "RES 2,B",      //0x90
    "RES 2,C",      //0x91
    "RES 2,D",      //0x92
    "RES 2,E",      //0x93
    "RES 2,H",      //0x94
    "RES 2,L",      //0x95
    "RES 2,(HL)",   //0x96
    "RES 2,A",      //0x97
    "RES 3,B",      //0x98
    "RES 3,C",      //0x99
    "RES 3,D",      //0x9A
    "RES 3,E",      //0x9B
    "RES 3,H",      //0x9C
    "RES 3,L",      //0x9D
    "RES 3,(HL)",   //0x9E
    "RES 3,A",      //0x9F
    "RES 4,B",      //0xA0
    "RES 4,C",      //0xA1
    "RES 4,D",      //0xA2
    "RES 4,E",      //0xA3
    "RES 4,H",      //0xA4
    "RES 4,L",      //0xA5
    "RES 4,(HL)",   //0xA6
    "RES 4,A",      //0xA7
    "RES 5,B",      //0xA8
    "RES 5,C",      //0xA9
    "RES 5,D",      //0xAA
    "RES 5,E",      //0xAB
    "RES 5,H",      //0xAC
    "RES 5,L",      //0xAD
    "RES 5,(HL)",   //0xAE
    "RES 5,A",      //0xAF
    "RES 6,B",      //0x00
    "RES 6,C",      //0xB1
    "RES 6,D",      //0xB2
    "RES 6,E",      //0xB3
    "RES 6,H",      //0xB4
    "RES 6,L",      //0xB5
    "RES 6,(HL)",   //0xB6
    "RES 6,A",      //0xB7
    "RES 7,B",      //0xB8
    "RES 7,C",      //0xB9
    "RES 7,D",      //0xBA
    "RES 7,E",      //0xBB
    "RES 7,H",      //0xBC
    "RES 7,L",      //0xBD
    "RES 7,(HL)",   //0xBE
    "RES 7,A",      //0xBF
    "SET 0,B",      //0xC0
    "SET 0,C",      //0xC1
    "SET 0,D",      //0xC2
    "SET 0,E",      //0xC3
    "SET 0,H",      //0xC4
    "SET 0,L",      //0xC5
    "SET 0,(HL)",   //0xC6
    "SET 0,A",      //0xC7
    "SET 1,B",      //0xC8
    "SET 1,C",      //0xC9
    "SET 1,D",      //0xCA
    "SET 1,E",      //0xCB
    "SET 1,H",      //0xCC
    "SET 1,L",      //0xCD
    "SET 1,(HL)",   //0xCE
    "SET 1,A",      //0xCF
    "SET 2,B",      //0xD0
    "SET 2,C",      //0xD1
    "SET 2,D",      //0xD2
    "SET 2,E",      //0xD3
    "SET 2,H",      //0xD4
    "SET 2,L",      //0xD5
    "SET 2,(HL)",   //0xD6
    "SET 2,A",      //0xD7
    "SET 3,B",      //0xD8
    "SET 3,C",      //0xD9
    "SET 3,D",      //0xDA
    "SET 3,E",      //0xDB
    "SET 3,H",      //0xDC
    "SET 3,L",      //0xDD
    "SET 3,(HL)",   //0xDE
    "SET 3,A",      //0xDF
    "SET 4,B",      //0xE0
    "SET 4,C",      //0xE1
    "SET 4,D",      //0xE2
    "SET 4,E",      //0xE3
    "SET 4,H",      //0xE4
    "SET 4,L",      //0xE5
    "SET 4,(HL)",   //0xE6
    "SET 4,A",      //0xE7
    "SET 5,B",      //0xE8
    "SET 5,C",      //0xE9
    "SET 5,D",      //0xEA
    "SET 5,E",      //0xEB
    "SET 5,H",      //0xEC
    "SET 5,L",      //0xED
    "SET 5,(HL)",   //0xEE
    "SET 5,A",      //0xEF
    "SET 6,B",      //0xF0
    "SET 6,C",      //0xF1
    "SET 6,D",      //0xF2
    "SET 6,E",      //0xF3
    "SET 6,H",      //0xF4
    "SET 6,L",      //0xF5
    "SET 6,(HL)",   //0xF6
    "SET 6,A",      //0xF7
    "SET 7,B",      //0xF8
    "SET 7,C",      //0xF9
    "SET 7,D",      //0xFA
    "SET 7,E",      //0xFB
    "SET 7,H",      //0xFC
    "SET 7,L",      //0xFD
    "SET 7,(HL)",   //0xFE
    "SET 7,A",      //0xFF
};

static const unsigned char EXT_INST_LEN = 2;

#endif
