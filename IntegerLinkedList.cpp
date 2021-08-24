// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"
#include <stddef.h>
#include <iostream>

//PROBLEM 2
bool IntegerLinkedList::checkList() {
  SNode* current = head;
  // setting up counter, to check how many times 57 appears
  int check = 0;
  while (current != NULL)
  {
    if (current->elem == 57)
    {
      check++;
    }
    current = current->next;
  }
  if (check == 1)
  {
    return true;
  }
  // if 57 doesn't appear or appears more than once, then false
  else if (check < 1 || check > 1)
  {
    return false;
  }

  return false;
}

// COMPLETE THIS FOR PROBLEM 3
bool IntegerLinkedList::checkRecurse (SNode *ptr) {
  if (ptr == NULL)
  {
    return false;
  }

  if(ptr->elem == 57)
  {
    int count = 1;
    if(checkRecurse(ptr->next) == false && count == true)
    {
      return true;
    }
    return false;
  }

  return checkRecurse(ptr->next);// dummy value to stop warnings while doing Problem 2. Remove this line.
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3. You can edit if needed
bool IntegerLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
