//
// Created by Robin James on 3/4/2022.
//

#ifndef PLAYGROUNDCPP_LINKEDLIST_H
#define PLAYGROUNDCPP_LINKEDLIST_H

#include <ostream>

template <typename T>
class LinkedList {
private:
    struct Node{
        T value;
        Node *next;
        Node *last;

    };
    Node *head;
    Node *tail;

public:

    explicit LinkedList(T data = 1 ){
        head=Node();
        head->value=data;
    }

    /*void insertATtail(T newdata){
        // insert a new node with value type T at tail
    }
    void insertAThead(T newdata){
        // insert a new node with value type T at head
    }
    int removeAllT(T data);//remove all nodes with data T
    int removeFirstT(T data);
*/
    friend std::ostream &operator<<(std::ostream &os, const LinkedList &list) {
        os << "head: " << list.head << " tail: " << list.tail;
        return os;
    }

};




#endif //PLAYGROUNDCPP_LINKEDLIST_H
