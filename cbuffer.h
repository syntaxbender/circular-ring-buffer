#ifndef cbuffer
#define cbuffer

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define FULL_OPERATION OVERWRITE
#define QUEUE_MODE LIFO
#define SIZE 5 // Specifying the maximum limit of the queue, max 128 bcs of int8_t tail, int8_t head

#define FIFO true
#define LIFO false
#define OVERWRITE true
#define DISCARD false

extern void enque(uint8_t value, bool* is_success);
extern void deque(uint8_t* value, bool* is_success);
extern uint8_t count();
extern void display(); 

#endif
