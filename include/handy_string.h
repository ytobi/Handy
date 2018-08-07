#include <stdbool.h>
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef HANDY_HANDY_STRING_H
#define HANDY_HANDY_STRING_H

typedef struct string_struct  * handy_string;

struct string_struct
{
    bool (*init)            ( handy_string * s, char * data );
    bool (*equal)           ( handy_string * s1, handy_string s2 );
    bool (*equal_str)       ( handy_string * s, char * str );

    bool (*contain_char)    ( handy_string * s, char c );
    bool (*contain_str)     ( handy_string * s, char * str );
    bool (*add_front)       ( handy_string * s, char c );
    bool (*add_back)        ( handy_string * s, char c );
    bool (*add_at)          ( handy_string * s, char c, int at );
    bool (*null)            ( handy_string * s );

    char (*get_front)       ( handy_string * s );
    char (*get_back)        ( handy_string * s );
    char (*get_at)          ( handy_string * s, int at );
    void * (*delete_front)  ( handy_string * s );
    void * (*delete_back)   ( handy_string * s );
    void (*delete_at)       ( handy_string * s, int at );
    void (*reverse)         ( handy_string * s );
    void (*free)            ( handy_string * s );
    int  (*length)          ( handy_string * s );

    handy_string (*concat)  ( handy_string * s1, handy_string * s2 );

    char * data;

    int size;
};

handy_string handy_create_string( char * str );

#endif //HANDY_HANDY_STRING_H