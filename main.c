#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
    list_t *myList = list_alloc();
    int i;
    for(i=1; i<6; i++){
        list_add_to_front(myList, i+5);
    }
    list_print(myList);
    printf("\nList Length = %d \n", list_length(myList));
    
    printf("\nAdd last element\n");
    list_add_to_back(myList, 4);
    list_print(myList);
    
    printf("\nAdd element at index 2\n");
    list_add_at_index(myList, 23, 2);
    list_print(myList);
    
    printf("\nRemove last element\n");
    list_remove_from_back(myList);
    list_print(myList);
    
    printf("\nRemove first element\n");
    list_remove_from_front(myList);
    list_print(myList);
    
    printf("\nRemove element at index 2\n");
    list_remove_at_index(myList, 2);
    list_print(myList);
    
    printf("\n List Length =  %d", list_length(myList));
    
    printf("\n\nCheck for 23 is in the list: %s\n", list_is_in(myList, 23) ? "true" : "false");
    
    printf("\n%d was found at index 1\n", list_get_elem_at(myList, 1));
    

   

    
  return 0;
}