#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

struct order example() {
    srand(time(NULL));
    struct order test;
    int amount = rand() % 10;
    char* choices[4];
    choices[0] = "Hamburger";
    choices[1] = "Pizza";
    choices[2] = "Soup";
    choices[3] = "Sushi";
    choices[4] = "Fruit";
    test.name = choices[rand() % 5];
    test.price = amount;
    return test;
}

int change(struct order *y, char *input, int input2) {
  y->name = input;
  y->price = input2;
  return 0;
}

int show(struct order *x) {
   printf("Order ID: %s  Price of Item:%d\n", x->name, x->price);
   return 0;
}

int main() {
    struct order run = example();
    show(&run);
    change(&run, "Ice Cream", 9);
    printf("After modification:\n");
    show(&run);
    return 0;
 }
