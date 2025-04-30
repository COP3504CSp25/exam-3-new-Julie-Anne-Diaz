#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        LinkedList newList;
        Node* temp = head;
        int size=0;
        while (temp!=nullptr){
            size++;
            temp=temp->next;
        }
        for (int i = size; i>0; i--){
            temp=head;
            for (int j = 0; j < i-1; j++){
                temp=temp->next;
            }
            newList.addHead(temp->data);
        }
        return newList;
    }

    Node* head = nullptr;
};
