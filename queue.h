#include <bits/stdc++.h>
#include "node.h"
using namespace std;

class Queue{
    node* front = nullptr;
    node* rear = nullptr;
    int counter = 0;

    bool empty(){
        return (front == nullptr);
    }

    bool found(int item){
        bool find_item = false;
        node* curr_ptr = front;
        while (curr_ptr != nullptr){
            if (curr_ptr->get_data() == item){
                find_item = true;
                break;
            }
            curr_ptr = curr_ptr->get_next();
        }
        return find_item;
    }

public:
    Queue(){
        //  This is constructor
    }

    void enqueue(int item){
        node* new_node = new node(item);
         if(!empty()){
            rear->set_next(new_node);
        }else {
            front = new_node;
        }
        rear = new_node;
        counter++;
    }

    void create(int num){
        int item;
        for (int i = 0; i < num; ++i) {
            cout << "Enter item " << i+1 << " : ";
            cin >> item;
            enqueue(item);
        }
    }

    void dequeue(){
        if(empty()){
            cout << "Can't dequeue, Queue is empty." << endl;
        }else{
            node* curr_ptr = front;
            front = front->get_next();
            delete curr_ptr;
            counter--;
        }
    }

    void get_size(){
            cout << "The size of queue is : " << counter << endl;
    }

    void get_front(){
        if(empty())
            cout << "No front, Queue is empty." << endl;
        else
            cout << "The front is ==> " << front->get_data() << endl;
    }

    void get_rear(){
        if(empty())
            cout << "No rear, Queue is empty." << endl;
        else
            cout << "The rear is ==> " << rear->get_data() << endl;
    }

    void search(int item) {
        if (empty()) {
            cout << "No " << item << " isn't found, " <<"Queue is empty" << endl;
        }else if(found(item)){
            cout << "Yes " << item << " is found" << endl;
        }else {
            cout << "No " << item << " isn't found, " <<"item don't in it" << endl;
        }
    }

    void is_empty(){
        string s = empty() ? "Queue is empty" : "Queue isn't empty";
        cout << s << endl;
    }

    void join(Queue q){
        node* curr_ptr = q.front;
        while (curr_ptr != nullptr){
            enqueue(curr_ptr->get_data());
            curr_ptr = curr_ptr->get_next();
        }
    }

    void reverse(){
        node* pre = nullptr;
        node* curr = front;
        node* next;
        rear = front;
        while (curr != nullptr){
            next = curr->get_next();
            curr->set_next(pre);
            pre = curr;
            curr = next;
        }
        front = pre;
    }

    void display(){
        if(empty()){
            cout << "Can't display, Queue is empty" << endl;
        }else{
            cout << "The Queue is ==> ";
            node* curr_ptr = front;
            while (curr_ptr != rear){
                cout << curr_ptr->get_data() << " ---> ";
                curr_ptr = curr_ptr->get_next();
            }
            cout << curr_ptr->get_data() << endl;
        }
    }

    void clear(){
        if (empty()){
            cout << "Can't clear, Queue is empty" << endl;
        }else{
            while (!empty()){
                dequeue();
            }
        }
    }
};
