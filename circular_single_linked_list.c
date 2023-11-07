#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node *next;
                     };
struct node *head, *tail = NULL;
                     
 void create(int data){
                               
                               struct node *newnode = (struct node *)malloc(sizeof(struct node));
                               newnode -> data = data;
                               newnode -> next = NULL;
                               if (head == NULL)
                               {
                               head = newnode;
                               tail = newnode;
                               }
                               else
                               {
                               tail->next = newnode;
                               newnode -> next = head;
                               tail = tail -> next;
                               
                               }
                               
                       }
void linear_search(int key){
	                    struct node *current = head;
	                    int length=0;
	                    do{
	                    length++;
						current = current -> next ;
	                        }while (current != head);
	                   
	                   printf("length:%d\n",length);
					current = head;
					int i ;
					for (i = 1; i<=length; i++){
					   if (current -> data == key){
					   	printf("element found at %d pos\n",i);
					   	break;
					   }
					   else{
					   	current = current->next;
					   }	
					}
					if (i > length) {
                        printf("Element not found in the linked list.\n");
    }					
}
                                
                       
void display(){
              struct node *current = head;
              if (head == NULL){  // list is null
              printf("Empty Linked List");
              }
              else {//list is not null
              printf("Elements of Linked list are:\n");
              do{
              printf("%5d\t", current->data);
              printf("%5ld\t",(long)current->next);
              printf("%5ld\t",(long)current);
              printf("\n");
              current = current->next;
             }while(current!=head);
              
              
              }
              }
void insert(int pos){
	                struct node *newnode = (struct node *)malloc(sizeof(struct node));
                    printf("enter a new node value:");
                    scanf("%d",&newnode->data);
                    struct node *current = head;             
	                if (pos == 1){
	                	newnode->next = head;
                        head = newnode;
                        tail -> next = head;
					}
					else {
						int i;               
                        for (i= 1; i< pos-1; i++)
                        { 
                           current = current -> next ;
                        }
                    newnode -> next = current -> next;
                    current -> next = newnode;
						
				}
				
}
void delete(int pos)
{
	                struct node *temp = head;
	                struct node *current = head;
	                int length=0;
	                int i;
	               
					do{
						length++;
						current = current -> next ;
					}while(current != head);
	                if (pos == 1){
	                	head = head -> next;
	                	tail -> next = head;
					}
					else if (pos == length){
					                        current = head;
					                        int i = 1;
                                            while (i<pos-1) {
                                             current = current -> next;
                                             }
                                            current->next = head;
                                            tail = current; 
											return; 	
					                       }
					else{
						temp = head;
						for(i= 1; i< pos-1; i++)
                       { 
                        temp = temp -> next;
                       }
                      temp->next = temp -> next -> next; 
					}
	
}
int main(){
            int ch=0;
            int item;
            int pos;
            while (ch != 6){	
            printf("1.Create 2.Insert 3.Delete 4.Display 5.Searching 6.Exit\n");
            printf("enter choice:");
            scanf("%d",&ch);            
            switch(ch){
            	case 1: printf("enter:");
				        scanf("%d",&item);
            	        create(item);
            	        break;
            	case 2: printf("enter pos:");
            	        scanf("%d",&pos);
            	        insert(pos);
            	        break;
			    case 3: printf("enter pos:");
            	        scanf("%d",&pos);
			        	delete(pos);
			            break;
			    case 4: display();
			            break;
			    case 5: printf("enter key:");
			            scanf("%d",&item);
				        linear_search(item);
				        break;
			    case 6: exit(0);
            		
			}
		}

          return 0;
          
          }
          
