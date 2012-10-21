#include <iostream>

using namespace std;

class LinkedList {
  struct node{
    int data;
    node *next;
  }
  public:
    node* head = create_linlist();
    void insert_at_end_linlist(int);
    void delete_element_linlist();
    void delete_linlist();
};

node* LinkedList::create_linlist(){
  node element = new node;
  element->next = NULL;
  return element;
}


int main(int argc, char **argv){
  //create new linked list
  //add element to linked list
  //delete element from linked list
}
