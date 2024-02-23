#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) 
{
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
  
  /* For struct Queue */
  Que q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
   //int i;

   
   int x,i;

  for(i=1;i<argc;i++)
    {
          
          if(strcmp(argv[i],"x")==0)
          {
            x = dequeue_struct(&q);
           if(x == 0)
           {
            printf("The queue is empty\n");
           }
           
          }
          else
          {
            enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
            i += 1;
          }
    }
        printf("================================================\n");
        printf("There are %d people left in the queue\n", q.size);
        return 0;
     }

