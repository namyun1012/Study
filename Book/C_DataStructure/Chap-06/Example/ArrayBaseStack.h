#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arraystack {
    Data stackArr[STACK_LEN];
    int topIndex;


}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *pstack);







#endif