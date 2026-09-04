//ADD two LL and the linked lists store digits in reverse order (ones digit first).

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* add2LL(Node* l1, Node* l2 ){
    int carry =0;
    Node* dummy = new Node(0);
    Node* temp = dummy;
    
    while(l1 != NULL || l2 != NULL || carry != 0){
        int sum = carry;
        if(l1 != NULL){
            sum += l1->data;
            l1 = l1->next;
        }
        if(l2 != NULL){
            sum += l2->data;
            l2 = l2->next;
        }
        
        temp->next = new Node(sum % 10);
        carry = sum/ 10;
        temp= temp->next;
    }
    return dummy->next;
}

int main() {
    Node* l1 = NULL;
    Node* l2 = NULL;
    Node* temp = NULL;

    int n1, n2;

    // First number
    cout << "Enter number of digits in first number: ";
    cin >> n1;

    cout << "Enter digits in reverse order: ";

    for (int i = 0; i < n1; i++) {
        int digit;
        cin >> digit;

        Node* newNode = new Node(digit);

        if (l1 == NULL) {
            l1 = newNode;
            temp = l1;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Second number
    cout << "Enter number of digits in second number: ";
    cin >> n2;

    cout << "Enter digits in reverse order: ";

    temp = NULL;

    for (int i = 0; i < n2; i++) {
        int digit;
        cin >> digit;

        Node* newNode = new Node(digit);

        if (l2 == NULL) {
            l2 = newNode;
            temp = l2;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Add the two linked lists
    Node* result = add2LL(l1, l2);

    cout << "Result: ";

    temp = result;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}