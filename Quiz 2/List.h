#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

// Struktur Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} LinkedList;


void initList(LinkedList* list);
void insertFirst(LinkedList* list, int value);
void insertLast(LinkedList* list, int value);
void insertAfter(LinkedList* list, int target, int value);
void deleteFirst(LinkedList* list);
void deleteLast(LinkedList* list);
void deleteValue(LinkedList* list, int value);
void deleteAll(LinkedList* list);
void printList(LinkedList* list);

#endif