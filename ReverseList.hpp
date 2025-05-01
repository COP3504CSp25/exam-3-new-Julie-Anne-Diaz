#pragma once
#include <iostream>
#include <string>
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
    void print(){
        Node* temp = head;
        while (temp!=nullptr){
            std::cout<<std::to_string(temp->data)<<std::endl;
            temp=temp->next;
        }
    }
    LinkedList reverseList() const {
        LinkedList newList;
        Node* temp = head;
        while (temp!=nullptr){
            newList.addHead(temp->data);
            temp=temp->next;
        }

        return newList;
    }

    Node* head = nullptr;
};
