
#include <stdio.h>
#include <stdlib.h>

struct order {char *name; int price;};
struct order example();
int change(struct order *y, char *input, int input2);
int show(struct order *x);
