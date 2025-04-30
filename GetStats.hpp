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

    int* getStats() const{
        int* arr = new int[3];
        Node* temp = head;
        if (temp==nullptr){
            arr[0]=0;
            arr[1]=0;
            arr[2]=0;
            return arr;
        }

        arr[0]=temp->data;
        arr[1]=temp->data;
        double avg = temp->data;
        arr[2]=1;
        temp->next;
        while(temp!=nullptr){
            if (temp->data<arr[0]){
                arr[0]=temp->data;
            }
            if (temp->data>arr[1]){
                arr[1]=temp->data;
            }
            avg+=temp->data;
            arr[2]++;
        }
        arr[2]=static_cast<int>(avg/arr[2]);
        return arr;
    }
    

private:
    Node* head = nullptr;
};
