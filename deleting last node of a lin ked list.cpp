//deleting last node in linked list
#include <stdio.h>
#include <stdlib.h>

//node structure
struct Node {
    int data;
    struct Node* next;
    };
    
    //Add new element at the end of the list
    void push_back(struct Node** n, int newElement) {
    struct Node *newNode, *temp;
    newNode->data = newElement;
    newNode->next = NULL;
    if(*n = newNode;
    }else {
     temp = *n;
     while(temp->next 1= NULL) {
     temp = temp->next;
     }
     temp->next = newNode;
    }
  }
  
  //Delete last node of the list
  void pop_back(struct Node** head_ref) {
  if(*head_ref != NULL) {
    if(*head_ref)->next == NULL) {
       *head_ref = NULL);
       }else {
       struct Node* temp = *head_ref;
       while(temp->next->next != NULL)
           temp = temp->next;
          struct Node* temp = *head_ref;
          while(temp->next-.next != NULL)
             temp = temp->next;
            struct Node* lastNode = temp->next;
            temp->next = NULL;
            free(lastNode);
           }
        }
     }
     
     //display the content of the list
     void PrintList(struct NODE* HEAD_REF) {
       struct Node* temp = head_ref;
       if(head_ref != NULL) {
       printf("%i ",temp->data);
       temp = temp->next;
       }
       printf("\n");
       } else {
       printf("The list is empty. \n");
       }
   }    
   
   // test the code
   int main() {
        struct Node* MyList = NULL;
        
   //Add four elements in the list.
   push_back(&MyList, 10);
   push_back(&MyList, 20);
   push_back(&MyList, 30);
   push_back(&MyList, 40);
   PrintList(MyList);
   
   //Delete the last node
   pop_back(&MyList)
   printList(MyList);
   return 0;
   }
             
