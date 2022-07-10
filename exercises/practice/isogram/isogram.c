#include "isogram.h"

bool is_character(char c){
    return (c>='a' && z<='z') || (c>='A' && c<='Z');
}

bool is_isogram(const char phrase[]){
    int size = 1024;
    char seen[size] = {0};
    for(int i=0;phrase[i];i++){
        if(is_character(phrase[i]) && !seen[i])
            seen[i] = i;
        else
            return false;
    }
    return true;
}