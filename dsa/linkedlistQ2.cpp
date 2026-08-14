#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;


};

int main() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};

    // insert  at the beginning

Node* newNode = new Node{70, NULL};

newNode->next = head;
head = newNode;

Node* temp = head;



temp = head;
while (temp !=  NULL) {
    cout << temp->data << " ";
    temp = temp->next;

}

return 0;

}
