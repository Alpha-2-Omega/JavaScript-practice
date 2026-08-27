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

Node* merge(Node* a, Node* b){
    // if(head == NULL || head->next == NULL) return head;
    Node* dummyNode = new Node(0);
    Node* temp = dummyNode;

    while(a != NULL && b != NULL){
        if(a->data < b->data){
            temp->next = a;
            a = a->next;
        }else{
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;

    }
    if(a) temp->next = a;
    else{
        temp->next = b;
    }
    return dummyNode->next;
}

Node* sortLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* fast = head->next;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
    }
    Node* leftHead = head;
    Node* rightHead = slow->next;
    slow->next= NULL;

    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);

    return merge(leftHead, rightHead);
}

int main(){
    int arr[] = {8,3,2,7};
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1 ; i< 4; i++){
        temp->next = new Node(arr[i]);
        temp= temp->next;
    }

    temp = head;
    cout<<"unsorted LL: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    head = sortLL(head);
    temp = head;
    cout<<"sorted LL: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}