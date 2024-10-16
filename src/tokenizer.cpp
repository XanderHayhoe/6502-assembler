#include "tokenizer.h"
#include <string>
#include <vector>

Tokenizer::Tokenizer(std::string input){
    // Initialize the tokenizer with the input string
    this->tokens = std::vector<std::string>();
    this->input = input;
    this->start = 0;
    this->current = 0;
    this->line = 1;
    this->len = 0;

}
Token Tokenizer::nextToken(){

}
bool Tokenizer::hasNext(){

}
Token Tokenizer::makeToken(TokenType){

}
Token Tokenizer::makeToken(TokenType, std::string){

}
char Tokenizer::advance(){

}
char Tokenizer::peek(){

}
char Tokenizer::peekNext(){

}
bool Tokenizer::match(char){

}
bool Tokenizer::isDigit(char){

}
bool Tokenizer::isAlpha(char){

}
bool Tokenizer::isAlphaNumeric(char){

}
bool Tokenizer::isAtEnd(){

}
void Tokenizer::skipWhitespace(){

}