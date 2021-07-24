#include <stdio.h>
#include "cbuffer.h"


uint8_t main(){
    bool is_success;
    uint8_t callback_value;
    enque(2,&is_success);
    count();
    enque(3,&is_success);
    count();
    enque(4,&is_success);
    count();
    enque(5,&is_success);
    count();
    enque(6,&is_success);
    count();
    enque(7,&is_success);
    count();
    deque(&callback_value, &is_success);
    count();
    deque(&callback_value, &is_success);
    count();
    deque(&callback_value, &is_success);
    count();
    deque(&callback_value, &is_success);
    count();
    deque(&callback_value, &is_success);
    count();
    enque(8,&is_success);
    count();
    enque(9,&is_success);
    count();
    enque(10,&is_success);
    count();
    enque(11,&is_success);
    count();
    enque(12,&is_success);
    count();
    enque(13,&is_success);
    count();
    enque(14,&is_success);
    enque(15,&is_success);
    enque(16,&is_success);
    deque(&callback_value, &is_success);
    enque(17,&is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
    deque(&callback_value, &is_success);
}

