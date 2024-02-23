

void enqueue_struct(Que* q, int x , int amount)
{
     Node *new_node = (Node*)malloc(sizeof(Node));
  if(new_node!=NULL)
  {
    new_node->order_number = x;
    new_node->quantity = amount;
    new_node->nextPtr = NULL;
    if (q->headPtr == NULL)
    {
      q->headPtr = new_node;
    }
    else
    {
      q->tailPtr->nextPtr = new_node;
    }
    q->tailPtr = new_node;
    printf("My order is %d\n",x);
      
  }
  q->size++;
}


int dequeue_struct(Que *q)
{
  NodePtr t = q->headPtr;
  char name[50];
  int price =0;
  int value = 0;
  int pay = 0;
  int count = 1;

   if(t != NULL){
   int value = t->order_number;
   switch(value)
   {
    case 1 : price = t->quantity*100; strcpy(name,"Ramen"); break;
    case 2 : price = t->quantity*20; strcpy(name,"Somtam"); break;
    case 3 : price = t->quantity*50; strcpy(name,"Fried Chicken"); break;
    default : printf("Wrong Selection\n");
   }
   if (value == 1 || value == 2 || value == 3)
  {
    printf("Customer No.%d\n", count++);
    printf("%s\n",name);
    printf("You have to pay %d\n", price);
    while (1)
    {
      printf(":");
      scanf("%d", &pay);
      if (pay == price)
      {
        printf("Thank you\n");
        break;
      }
      else if (pay > price)
      {
        printf("Thank you\n");
        printf("Change is = %d\n", pay - price);
        break;
      }
    }
      q->headPtr=t->nextPtr;
    
      q->size--;
     
      
   
      free(t);
      return (value);
  }

    return 0;
}
}

