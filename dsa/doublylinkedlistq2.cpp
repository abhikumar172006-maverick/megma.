#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;


};

int main() {
    Node* head = new Node{10, NULL, NULL};
    head->next = new Node{20, NULL, NULL};

    Node* newNode = new Node{5, NULL, head};
    head->prev = newNode;
    head = newNode;

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
    


}