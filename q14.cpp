//Convert array to LinkedList, traverse the LL, calculate the length of Linkedlist and search a number in LL

#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* ConvertArrToLL( vector<int> &arr){
    if(arr.size() == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1 ; i< arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

 void traverseTheLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
}

int lengthOfLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp){       
        temp = temp-> next;
        cnt++;
    }
    return cnt;
}

bool searchAnElement(Node* head, int x){
    Node* temp = head;
    while(temp){
        if(temp->data == x) {
            return true;
        }
        temp = temp->next;
    }
    return false; 
}

int main(){
    vector<int> arr = {4, 3, 8, 12};
    Node* head = ConvertArrToLL(arr);
    cout << "data at head is " << head->data<< endl;

    traverseTheLL(head);
    cout<<endl;

    int length = lengthOfLL(head);
    cout<< "length of LL is "<<length<<endl;   
    
    int x;
    cout<<"enter the number you want to find: ";
    cin>>x;
    if(searchAnElement(head, x)){
        cout<<" Element found!";
    }else{
        cout<<" Element not found!";
    }
    return 0;
}