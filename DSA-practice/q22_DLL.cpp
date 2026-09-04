//delete all occurences of a key in a DLL
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

Node* deleteAllOccurrences(Node* head, int key){

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            //if node is the key
            if(temp == head){
                head = head->next;

                if(head != NULL){
                    head->prev = NULL;
                }
                delete temp;
                temp= head;
            }
            else{
                Node* nextNode = temp->next;
                Node* prevNode = temp->prev;
                prevNode->next = nextNode;
                if(nextNode != NULL){
                    nextNode->prev = prevNode;
                }
                Node* nextNode = temp->next;
                delete temp;
                temp = nextNode;
            }
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    Node* head = NULL;

    // Creating the DLL
    head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(10);
    Node* fourth = new Node(30);
    Node* fifth = new Node(10);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    cout << "Original DLL: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    int key;
    cout << "\nEnter the key to delete: ";
    cin >> key;

    head = deleteAllOccurrences(head, key);

    cout << "DLL after deleting all occurrences of " << key << ": ";
    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}