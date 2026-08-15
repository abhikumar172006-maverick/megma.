#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

}; 
int main() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    int pos = 3;
    int value = 77;

    Node* newNode = new Node{value, NULL};
    Node* temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head; 
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;

    }

    return 0;

}

