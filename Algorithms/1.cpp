#include <iostream>
#include <cstdlib>
using namespace std;

int y = 100;
struct node {
  int x;
  node *next;
};

node* add_element(node*);
bool is_empty(node*);
void print_list(node*);


bool is_empty(node* temp){
  return temp == NULL;
}
int main()
{
    node *head = NULL;
    for(int i = 0; i < 5; i = i + 1){
        head = add_element(head);
    }
    print_list(head);
}
node* add_element(node* head){
    node *temp;
    node *new_nd;

    new_nd = new node;
    new_nd->next = NULL;
    cout<<"enter element"<<endl;
    new_nd->x = y--;

    if(!head)  // is new node is first node ?
      return new_nd;

    temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = new_nd;
    return head; 
  }

void print_list(node* temp){
    if (is_empty(temp)== false){   
        cout<<"here temp(head)"<<temp->next<<endl;
        while(temp!=NULL){
          cout<<temp->x<<endl;
          temp = temp->next;
        }
    }
}