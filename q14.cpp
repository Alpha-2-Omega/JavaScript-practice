//Convert array to LinkedList

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

int main(){
    vector<int> arr = {4, 3, 8, 12};
    Node* head = ConvertArrToLL(arr);
    cout << head->data;
}