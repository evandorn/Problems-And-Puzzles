//
//  SumLinkedList.cpp
//  
//
//  Created by Evan Dorn on 5/26/16.
//
//

/*
 * You have two numbers represented by linked list, where each node contains
 * a single digit. Digits are stored in reverse order.(1's digit is at the head)
 * Write a function that adds two such numbers and returns a number in similar
 * list format.
 * example:
 * 7-->1-->6 + 5-->9-->2 = 2-->1-->9
 * which is (617 + 295  = 912)
 * What if digits are not stored in reverse order(i.e 1's digit is at tail)
 * (6--1-->7) + (2-->9-->5) = (9-->1-->2)
 *
 * Approach:
 * We will solve the problem recursively and iteratively.
 * Add numbers at same digits place, store the 1's digit of the output in new list
 * and add carry in next place's addition.
 *
 * Finally, we will solve the follow up.
 */

#include <iostream>

struct Node {
    int data;
    Node *next;
    Node (int d) : data{ d }, next{ nullptr } { }       // Node initalization list
};

// Insert a new node at the head of the list
void insert(Node * &head, int data)  {
    Node *newNode = new Node(data);                     // Allocate space for a new node
    newNode->next = head;
    head = newNode;
}

// Solving the problem iterative. Adding 2 lists
Node * listAdd_iter(Node *list1, Node *list2) {

    // Base case: If list 1 or list 2 are empty,
    //             then return the other nonempty list.
    if(list1 == nullptr) {
        return list2;
    }
    
    if(list2 == nullptr) {
        return list1;
    }
    
    // making a new list 3 to store the result of list 1 and 2
    Node *list3 = nullptr;
    Node *list3Tail = nullptr;      // new nodes will be added to the tail of list3
    
    int value = 0;
    int additionCarry = 0;
    
    while(list1 || list 2) {
        // Add the values, if one of the lists has already been traversed, add 0.
        value = carry + (list1 ? list1->data : 0) + (list2 ? list2->data : 0);
        
        // get the value from addition and take
        // into account the carry from addition
        if(value > 9) {
            carry = 1;
            value = value % 10;
        } else {
            carry = 0;
        }
        
        // Create a new node as a temp holder
        Node *temp = new Node(value);
        
        // if this is the first node,
        // populate the result, else add to the tail
        if ( list3 == nullptr ) {
            list3 = temp;
        } else {
            list3Tail->next = temp;
        }

        // Make a new tail node
        list3Tail = temp;
        
        if(list1) {
            list1 = list1->next;
        }
        
        if(list2) {
            list2 = list2->next;
        }
    }
    
    if(additionCarry > 0) {
        list3Tail->next = new Node(additionCarry);
    }
    return list3;
}

Node *listAdd_recursive( Node * list1, Node * list2, int carry) {
    if ( list1 == nullptr && list2 == nullptr && carry == 0 ) {
        return nullptr;
    }
    
    int value = carry;
    
    if(list1) {
        value += list1->data;
    }
    
    if(list2) {
        value += list2->data;
    }
    
    Node *resultNode = new Node(value % 10);
    
    resultNode->next = listAdd_recursive( list1 ? (list1->next) : nullptr,
                                          list2 ? (list2->next) : nullptr,
                                          value > 0 ? 1  : 0);
    return resultNode;
}

// Print the list starting from the head
void printList(Node *head) {
    while(head) {
        std::cout << head->data << "-->";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Get list lengt
int getLength(Node *head) {
    int length = 0;
    while(head) {
        length++;
        head = head->next;
    }
    return length;
}


// Delete the entire list
void deleteList(Node * &head) {
    Node *nextNode;
    while(head) {
        nextNode = head->next;
        delete(head);
        head = nextNode;
    }
}

int main() {
    // making list 1 for number 617
    Node * list1 = nullptr;
    insert(list1, 6);
    insert(list1, 1);
    insert(list1, 7);
    std::cout << "List1:  ";
    printList(list1);
    
    // making list2 for number 295
    Node * list2 = nullptr;
    insert(list2, 2);
    insert(list2, 9);
    insert(list2, 5);
    std::cout << "List2:  ";
    printList(list2);
    
    Node * list3 = listAdd_iter(list1, list2);
    std::cout << "Iterative Solution: \n";
    std::cout << "List3:  ";
    printList(list3);
    
    Node * list4 = add_recursive(list1, list2, 0);
    std::cout << "Recursive Solution: \n";
    std::cout << "List4:  ";
    printList(list4);
    
    deleteList(list1);
    deleteList(list2);
    deleteList(list3);
    deleteList(list4);
    
/*
    std::cout << "\n\nNow follow up case, lists are stored such that 1's digit is at the tail of list\n";
    //Node * listx = nullptr;
    insert(list1, 4);
    insert(list1, 3);
    insert(list1, 2);
    insert(list1, 9);
    std::cout << "List1:  ";
    printList(list1);
    
    insert(list2, 9);
    insert(list2, 9);
    insert(list2, 8);
    std::cout << "List2:  ";
    printList(list2);
    
    list3 = add_followup(list1, list2);
    std::cout << "Adding two above lists\n";
    std::cout << "List3:  ";
    printList(list3);
    
    deleteList(list1);
    deleteList(list2);
    deleteList(list3);
*/
    
    return 0;
}
