#include <stdbool.h>
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef HANDY_HANDY_QUEUE_H
#define HANDY_HANDY_QUEUE_H

typedef struct _queue_struct * handy_queue;

#ifndef HANDY_QUEUE_OBJ_H
#define HANDY_QUEUE_OBJ_H

typedef struct __handy_queue_obj * _handy_queue_obj;

struct __handy_queue_obj
{
    void  * _data;

    _handy_queue_obj _next;
    _handy_queue_obj _prev;
};
#endif

struct _queue_struct
{
    int (*contain)          ( handy_queue self, void * item );
    bool (*enqueue)         ( handy_queue self, void * item );
    bool (*empty)           ( handy_queue self );

    void   (*reverse)       ( handy_queue self );
    void * (*dequeue)       ( handy_queue self );
    void   (*free)          ( handy_queue self );
    void * (*front)         ( handy_queue self );
    void * (*back)          ( handy_queue self );
    int (*length)           ( handy_queue self );

    void ** _handy_dequeued;

    _handy_queue_obj _first;
    _handy_queue_obj _last;

    int _size;
};

extern handy_queue handy_create_queue();

#endif //HANDY_HANDY_QUEUE_H
