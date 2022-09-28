#include <bits/stdc++.h>
#include "queue.h"
using namespace std;

int main() {

    cout << "welcome to Queue" << endl;

    cout << "To add ==> enqueue" <<endl;
    cout << "To create ==> create" <<endl;
    cout << "To delete ==> dequeue" <<endl;
    cout << "To know size ==> get_size" << endl;
    cout << "To get front ==> get_front" <<endl;
    cout << "To get rear ==> get_rear" <<endl;
    cout << "To search  ==> search" << endl;
    cout << "To check if empty ==> is_empty" << endl;
    cout << "To add Queue to another ==> join" << endl;
    cout << "To reverse ==> reverse" << endl;
    cout << "To display ==> display" <<endl;
    cout << "To end ==> clear" << endl;

    cout << "==============================" << endl;

//    check empty Queue

    Queue q1;

    q1.display();
    q1.get_front();
    q1.get_rear();
    q1.get_size();
    q1.is_empty();
    q1.search(5);
    q1.dequeue();
    q1.clear();
    q1.create(5);    // 1 2 3 4 5
    q1.display();

//    check not empty Queue

    Queue q2;

    q2.create(5);    // 1 2 3 4 5
    q2.enqueue(6);
    q2.enqueue(7);
    q2.display();
    q2.search(1);
    q2.search(7);
    q2.search(4);
    q2.search(99);
    q2.get_size();
    q2.get_front();
    q2.get_rear();
    q2.enqueue(8);
    q2.enqueue(9);
    q2.dequeue();
    q2.display();
    q2.is_empty();
    q2.get_size();
    q2.get_front();
    q2.get_rear();
    q2.join(q1);
    q2.display();
    q1.display();
    q2.get_size();
    q2.reverse();
    q1.reverse();
    q2.display();
    q1.display();
    q2.clear();
    q1.clear();

    return 0;
}
