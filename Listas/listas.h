#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED
class Nodo{
    public:
        int data;
        Nodo *next;
        Nodo(int data = 0,Nodo * next = NULL){
            this->data = data;
            this-> next = next;
        }
};

class ListaEnlazada{
private:
    Nodo * head;
public:
    ListaEnlazada(){
        head = NULL;
    }
    void createnode(int value){
      /*Nodo *temp=new Nodo;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL){
        head->next = temp;
        temp->next=NULL;
      }
      else{
        Nodo *pre=new Nodo;
        Nodo *cur=new Nodo;
        pre->next = head;
        cur->next = head;
        while(pre->next != nullptr){
            pre->next = cur->next->next;
        }
      }*/
        if(head == NULL){
            head = new Nodo(value);
        }
        else{
            Nodo* t = head;
            while(t -> data < value){
                t = t -> next;
            }
            t = new Nodo(value);
        }
    }
};
#endif // LISTAS_H_INCLUDED
