#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

void deleteNode(struct ListNode *node) {
	if(node == NULL || node->next == NULL) return;

	node->val = node->next->val;
	node->next = node->next->next;
}

void printList(struct ListNode *head) {
	while(head) {
		printf("%d->",head->val);
		head = head->next;
	}
	printf("N\n");
}

int main(void) {
	struct ListNode *list = (struct ListNode *)calloc(3,sizeof(struct ListNode));
	
	list->val = 1;
	list->next = list + 1;

	list->next->val = 2;
	list->next->next = list + 2;

	list->next->next->val = 3;
	list->next->next->next = NULL;

	printList(list);
	deleteNode(list->next);
	printList(list);

	return 0;
}
