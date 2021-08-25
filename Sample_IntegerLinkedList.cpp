// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

int IntegerLinkedList::getSum() { // COMPLETE THIS FOR PROBLEM 2
SNode* ptr = head;
int sum = 0;
while (ptr != nullptr) {
  sum += ptr->elem;
  ptr = ptr-> next;
}
return sum;
}
/* another way:
int sum = 0;
while(head != nullptr) {
sum += head->elem;
head = head->next;
}
return sum;
*/

int IntegerLinkedList::getSumRecurse (SNode *ptr) {
	if(ptr != nullptr)
	   return ptr->elem + getSumRecurse(ptr->next);
	else
	   return 0;
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::getSumRecurseHelper () {
  return getSumRecurse(head);
}
