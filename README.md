# circular-ring-buffer algo c lang

## Functions
  - enque : adding element to buffer
  - deque : drop and get an element from buffer(changable fifo or lifo)
  - count : get element count
## Notes

  - Check config from cbuffer.h

```
#define FULL_OPERATION OVERWRITE // The operation to be executed when the buffer is full (OVERWRITE / DISCARD)
#define QUEUE_MODE LIFO // deque func lifo or fifo
#define SIZE 5 // Specifying the maximum limit of the queue, max 128 bcs of int8_t tail, int8_t head
```

  - For examples and usage check test.c 
