#include "list.h"

int main() {
    LinkedList list;
    initList(&list);
    
    insertFirst(&list, 7);
    printList(&list);
    insertLast(&list, 11);
    printList(&list);
    insertAfter(&list, 7, 9);
    printList(&list);
    insertFirst(&list, 5);
    printList(&list);
    insertLast(&list, 13);
    printList(&list);
    deleteLast(&list);
    printList(&list);
    deleteValue(&list, 7);
    printList(&list);
    deleteFirst(&list);
    printList(&list);
    deleteAll(&list);
    printList(&list);

    return 0;
}
