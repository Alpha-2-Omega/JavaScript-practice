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

Node* intersectionOfLL(Node* headA, Node* headB){
    if(headA == NULL || headB == NULL) return NULL;

    Node* temp1 = headA;
    Node* temp2 = headB;

    while(temp1 != temp2){
        if(temp1 == NULL){
            temp1 = headB;
        }else{
            temp1 = temp1->next;
        }

        if(temp2 == NULL){
            temp2 = headA;
        }else{
            temp2 = temp2->next;
        }
    }
    return temp1;
}

// T.C = O(len(listA) + len(listB));
// S.C = O(1);