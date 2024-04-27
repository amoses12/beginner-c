/*
REQUIREMENTS:
    - Creates a struct pointer and passes it to a function
    - struct item
        - itemName = pointer
        - quantity = int
        - price = float
        - amount = float (stores quantity * price)
    Function readItem
        - INPUT: scruct pointer
        - Takes in name, price, and quantity and stores them to pointer argument
    Function printItem
        - INPUT: struct pointer
        - prints contents of parameter
    Function main
        - declare an item and pointer to the item
        - allocate memory for the itemName pointer (any arbitrary size, no need
to calculate)
        - item pointer should be passed into both the readItem and printItem
functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item
{
  char *name;
  int quantity;
  float price;
  float amount;
};

int readItem(struct item *rItem);
int printItem(struct item *pItem);

int main()
{
  struct item aItem, *aItemPtr;
  aItemPtr = &aItem;
  readItem(aItemPtr);
  printItem(aItemPtr);
  return 0;
};

int readItem(struct item *rItem)
{
  int limit = 50;
  char temp[limit];

  printf("Enter item name:\n");
  fgets(temp, limit, stdin);
  rItem->name = (char *)malloc(strlen(temp + 1));
  strcpy(rItem->name, temp);

  printf("Enter the item quantity:\n");
  scanf("%d", &rItem->quantity);

  printf("Enter the item price:\n");
  scanf("%f", &rItem->price);

    rItem->amount = rItem->price * rItem->quantity;

  return 0;
  };

  int printItem(struct item *pItem)
  {
  printf("Name: %s \n", pItem->name);
  printf("Quantity: %d\n", pItem->quantity);
  printf("Price: %.2f\n", pItem->price);
  printf("Amount: %.2f\n", pItem->amount);
  return 0;
  };
