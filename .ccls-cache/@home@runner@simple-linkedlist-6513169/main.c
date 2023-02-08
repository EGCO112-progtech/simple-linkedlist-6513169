//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node *head ;
  typedef struct node Node;
  typedef struct node* NodePtr;

  NodePtr p=(NodePtr) malloc (sizeof(Node));
    p->value = c; //a
    head=p;
   int i,n=4;
  for(i=0;i<n;i++)
    {
      
      p->next=(NodePtr) malloc (sizeof(Node));
      p=p->next;
      p->value=c+1+i;
      p->next=NULL;
    /*   p->next=(NodePtr) malloc (sizeof(Node));
    p->next->value=head->value+3; //b

  //struct node d;
   p->next->next=(NodePtr) malloc (sizeof(Node));
   p->next->next->value=11; //c
 p->next->next->next=NULL;
      */
    }
   
 

  //  printf("%d\n", head ->value ); //what value for 5
 //  printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
  
 // printf("%d\n", d.value);
//  printf("%d\n", b.next->value);
 // printf("%d\n", a.next->next->value);
 // printf("%d\n", head->next->next->value);
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
 /* struct node z;
  head=&z;
  z.next=p;
  z.value=2;*/
//  printf("%d->", head->value);
//  printf("%d->", head->next->value);
// printf("%d->", head->next->next->value);
// printf("%d->NULL", head->next->next->next->value);
    
  
  
  //typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate ชี้ที่เดียวกัน
        
    // Exercise III Use loop to print everything
       // int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d ->", tmp->value);
          tmp=tmp->next;
          // What is missing???
        }
  printf(" NULL\n");
    
  
    
   // Exercise IV change to while loop!! (you can use NULL to help)
       tmp=head;
         while(1){
            printf("%3d ->", tmp->value);
           tmp=tmp->next;
           if(tmp==NULL)
             break;
            
           // What is missing???
        }
  printf(" NULL\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */

  tmp=head;
         while(tmp!=NULL){
           printf("deleting %d \n",tmp->value);
           head=head->next;
           free(tmp); 
           tmp=head;
        }
    return 0;
}
