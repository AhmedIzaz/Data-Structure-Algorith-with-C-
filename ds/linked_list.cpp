#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *nextNode;
        Node(int d){
            this->data = d;
            this->nextNode = nullptr;
        };
};

class LinkedList {
    public:
        Node *head;
        LinkedList(int data){
            Node *temp = new Node(data);
            this->head = temp;
        };
        // display all nodes
        void displayList(){
            Node *temp = head;
            while(temp != nullptr){
                cout << temp->data << " -> ";
                temp = temp->nextNode;
            };
        };
        // add new node
        void insertNode (int data){
            Node *newNode = new Node(data);
            Node *temp = this->head;
            while(temp->nextNode != nullptr){
                temp = temp->nextNode;
            };
            temp->nextNode = newNode;
        };
        // delete a node depend on a value eqaulity
        void deleteNode (int data){
            Node *temp = this->head;
            while(temp->nextNode != nullptr){
                if(temp->nextNode->data == data){
                    Node *temp2 = temp->nextNode;
                    temp->nextNode = temp2->nextNode;
                    delete temp2;
                    break;
                }else{
                    temp = temp->nextNode;
                };

            };
        };
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LinkedList *my_list = new LinkedList(10);

    my_list->insertNode(20);
    my_list->insertNode(30);
    my_list->insertNode(40);
    my_list->insertNode(50);
    my_list->insertNode(60);

    my_list->deleteNode(40);


    my_list->displayList();


    return 0;
};
