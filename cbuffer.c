#include <stdio.h>
#include "cbuffer.h"

uint8_t buff[SIZE];
int8_t tail = 0;
int8_t head = 0;
bool is_full = false;

void enque(uint8_t value, bool* is_success){
    printf("----enque----\n");
    if(is_full == true){
        if(FULL_OPERATION != OVERWRITE){
            *is_success = false;
            printf("----buffer is full, discard mode----\n");
            return;
        } 
        head = ++head%SIZE;
    }
    buff[tail] = value;
    tail = ++tail%SIZE;
    if(tail == head) is_full=true;
    *is_success = true;
    display();
}
void deque(uint8_t* value, bool* is_success){
    printf("----deque----\n");
    *is_success = (tail == head && is_full == false) ? false : true;
    
    if(!*is_success){
        printf("----empty buffer----\n");
        return;
    }
    is_full=false;
    if(QUEUE_MODE == FIFO){
        *value = buff[head];
        head = ++head%SIZE;
    }else{
        if(--tail<0) tail = SIZE-1;
        *value = buff[tail];
    }
    display();
}
uint8_t count(){
    printf("----count----\n");
    uint8_t count;
    if(tail>head){
        count = tail-head;
    }else{
        if(tail == head){
            count = (is_full == false) ? 0 : SIZE;
        }else{
            count = SIZE-head+tail;
        }
    }
    printf("count : %d\n",count);
    return count;
}
void display(){
    int8_t temp_head = head;
    int8_t temp_tail = tail;
    uint8_t temp_buff[SIZE];
    for(int i=0; i<SIZE; i++){
        temp_buff[i] = 0;
    }
    if(is_full || temp_head != temp_tail){
        while(1){
            printf("..%d..",temp_head);
            temp_buff[temp_head] = buff[temp_head];
            temp_head = ++temp_head%SIZE;
            if(temp_tail == temp_head) break;
        }
    }
    printf("\n");
    for(int i=0; i<SIZE; i++){
        printf("%d:%d, ",i,temp_buff[i]);
    }
    printf("\nis_full : %d",is_full);
    printf("\n\n\n");
}
