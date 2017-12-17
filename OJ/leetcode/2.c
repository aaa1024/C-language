/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    int sum

    struct ListNode *current1, *current2, *currents;
    struct ListNode *prev, *head = NULL;
    current1 = l1;
    current2 = l2;
    while(current1 != NULL && current2 != NULL)
    {
        currents = malloc(sizeof(struct ListNode));
        if(head == NULL)
            head = currents;
        else
            prev->next = currents;
        currents->next = NULL;

        currents->val = (current1->val + current2->val) % 10;
        prev = currents;
        printf("%d %d\n", current1->val, current2->val);
        current1 = current1->next;
        current2 = current2->next;
    }
    return head;
}
