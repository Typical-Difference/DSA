#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node *next1){
        data = data1;
        next = next1;
    }
};

Node *removeHead(Node *head){
    if(head == NULL){
        return head;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    while(head->next != NULL){
        head = head->next;
    }
    delete head;
}

Node *printList(Node *head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return head;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    Node *head = new Node(arr[0]);
    Node *mover = head;
    //Create LL from Array
    for(int i = 1; i < length; i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    cout << endl;
    printList(head);

    return 0;
}