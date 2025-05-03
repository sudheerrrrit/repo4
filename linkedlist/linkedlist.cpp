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
        cout << ptr -> data ;
        ptr = ptr -> next ;
    }
    return start;
    

}
int main()
{
    start=creatnode(start);
    printlist(start);
}