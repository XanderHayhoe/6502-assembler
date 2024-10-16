#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <string>
#include <vector>
class Token{
    public:
        Token();
        Token(std::string);
        Token(std::string, std::string);
        std::string type;
        std::string lexeme;
};

enum TokenType{
    // single character tokens
    LEFT_PAREN, RIGHT_PAREN, COMMA,

    // literals
    IDENTIFIER, STRING, NUMBER,

    // opcodes
    ADC, AND, ASL, BCC, BCS, BEQ, BIT, BMI, BNE, BPL, BRK, BVC, BVS, CLC,
    CLD, CLI, CLV, CMP, CPX, CPY, DEC, DEX, DEY, EOR, INC, INX, INY, JMP,
    JSR, LDA, LDX, LDY, LSR, NOP, ORA, PHA, PHP, PLA, PLP, ROL, ROR, RTI,
    RTS, SBC, SEC, SED, SEI, STA, STX, STY, TAX, TAY, TSX, TXA, TXS, TYA
};

class Tokenizer{
    public:
        std::vector<std::string> tokens;
        std::string input;
        int start;
        int current;
        int line;
        int len;
        Tokenizer(std::string input);
        Token nextToken();
        bool hasNext();

        Token makeToken(TokenType);
        Token makeToken(TokenType, std::string);
        char advance();
        char peek();
        char peekNext();
        bool match(char);
        bool isDigit(char);
        bool isAlpha(char);
        bool isAlphaNumeric(char);
        bool isAtEnd();
        void skipWhitespace();
};


#endif