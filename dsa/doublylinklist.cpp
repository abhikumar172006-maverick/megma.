#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

};

int main() {
    Node*head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;

    }

    return 0;
}