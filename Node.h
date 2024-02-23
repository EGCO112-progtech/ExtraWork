//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct order{
   struct order* nextPtr;
   int order_number;
   int quantity;
};

typedef struct order Node;
typedef struct order* NodePtr;

typedef struct Queue{
   NodePtr headPtr,tailPtr;
    int size;
}Que;




#endif
