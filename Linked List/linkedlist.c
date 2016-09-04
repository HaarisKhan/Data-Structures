/* Linked List Implementation in C */
/* Represented using struct, contains strings (but can be expanded to hold other types) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
  struct node *next;
  struct node *prev;
  int index;
  char string[80];
};

void addNode() {
  struct node *newNode = malloc(sizeof(struct node));
  char *string;
  printf("Enter a string\n");
  scanf("%s", string);
}

void removeNode() {

}

char * getItem() {
  return "Hi";
}

char * removeItem() {
  return "Hi";
}

void printList() {

}

int main() {
  struct node root;
  char string[80];
  printf("Enter a string for your 'root' node\n");
  scanf("%s", string);
  strcpy(root.string, string);
  root.index = 0;

  bool exit = 0;
  int choice;

  while (!exit) {
    printf("\nWhat would you like to do to your linked list?");
    printf("\n1. Add a new element");
    printf("\n2. Remove the most recent element");
    printf("\n3. Get item at index");
    printf("\n4. Remove an item at index");
    printf("\n5. Print the contents of your linked list");
    printf("\n6. Exit");
    printf("\n\n");

    scanf("%d", choice);
  }
}
