// File: list.c
#include "list.h"

void initList(LinkedList* list) {
    list->head = NULL;
}

void insertFirst(LinkedList* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}

void insertLast(LinkedList* list, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (list->head == NULL) {
        list->head = newNode;
        return;
    }
    Node* temp = list->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAfter(LinkedList* list, int target, int value) {
    Node* temp = list->head;
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deletepirst(LinkedList* list) {
    if (list->head == NULL) return;
    Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}

void deleteLast(LinkedList* list) {
    if (list->head == NULL) return;
    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
        return;
    }
    Node* temp = list->head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteValue(LinkedList* list, int value) {
    if (list->head == NULL) return;
    if (list->head->data == value) {
        deleteFirst(list);
        return;
    }
    Node* temp = list->head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }
}

void deleteAll(LinkedList* list) {
    while (list->head != NULL) {
        deleteFirst(list);
    }
   
}

void printList(LinkedList* list) {
    Node* temp = list->head;
    
    if (temp == NULL) {
        printf("List kosong, tidak ada angka yang bisa dihapus.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

