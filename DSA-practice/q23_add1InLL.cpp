#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    
    return prev;
}
Node* add1(Node* head){
    Node* newHead = reverseLL(head);
    Node* temp = newHead;
    int carry =1;
    while(temp != NULL){
        temp->data++;
        if(temp->data < 10){
            carry =0;
            break;
        }
        else{
            temp->data = 0;
            carry =1;
        }
        if(temp->next == NULL && carry == 1){
            temp->next = new Node(1);
            carry =0;
            break;
        }
        temp = temp->next;
    }
    newHead = reverseLL(newHead);
    return newHead;
}


int main() {
    Node* head = NULL;
    Node* temp = NULL;

    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    cout << "Enter the digits: ";

    for (int i = 0; i < n; i++) {
        int digit;
        cin >> digit;

        Node* newNode = new Node(digit);

        if (head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    head = add1(head);

    cout << "Number after adding 1: ";

    temp = head;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }

    return 0;
}

