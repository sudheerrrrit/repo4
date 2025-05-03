#include<iostream>
using namespace std ;
struct node{
    int data ;
    struct node * next ;
};
struct node * start = NULL;
struct node * creatnode(struct node * start)
{
    struct node * newnode , *ptr ;
   
    int data ; 
    cout << "enter the data= ";
    cin >> data ;
    while(data != -1)
    {
         newnode = (struct node*)malloc(sizeof(struct node));
         newnode -> data = data ;
        if(start==NULL)
        {
            newnode->next = NULL;
            start=newnode;
        }
        else{
            ptr = start;
            while(ptr->next !=NULL)
            {
                ptr = ptr -> next;
                
            }
            ptr ->next = newnode ;
                newnode ->next = NULL;
           
        }
         cout << "data ";
            cin >> data ;
        
    }
    return start;
}
struct node * printlist(struct node * start)
{
    struct node * ptr ; 
    ptr = start;
    while(ptr!=NULL)
    {
        cout << ptr -> data << " " ;
        ptr = ptr -> next ;
    }
    return start;
    

}
struct node * insertbefore(struct node * start)
{
    struct node * new_node , *ptr , *preptr;
    int data , value ;
    printf("\n enter the value before which the data is to be inserted ");
    scanf("%d",&value);
    printf("enter the data =");
    scanf("%d",&data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data ;
    ptr = start;
    while(ptr->data!=value)
    {
        preptr = ptr ;
        ptr = ptr ->next ;
    }
    new_node -> next = ptr ;
    preptr ->next = new_node ;
    return start;
}
struct node * insertafter(struct node * start)
{
    struct node * insert_node , *ptr , *preptr ;
    int data , val ;
    cout << "enter the value which after the data is to be indrted =";
    cin >> val;
    cout << "enter the data = ";
    cin >> data ;
    insert_node = (struct node * )malloc(sizeof(struct node));
    insert_node->data = data ;
    ptr = start;
    preptr = ptr ;
    while(ptr ->data !=val)
    {
        preptr=ptr ;
        ptr = ptr ->next ;
       
    }
     preptr ->next = insert_node;
        insert_node ->next = ptr ;
    return start;
}
int main()
{
    start=creatnode(start);
    start=printlist(start);
    start=insertbefore( start);
    start=printlist(start);
    start=insertafter(start);
    start=printlist(start);

}