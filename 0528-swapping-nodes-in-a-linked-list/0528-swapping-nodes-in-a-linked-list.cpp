/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        // lenght of linklist
        int len = 0;
        while (temp) {
            temp = temp->next;
            len++;
        }

        temp = head;
        int i = 1;
        while (i < k) {
            temp = temp->next;
            i++;
        }

        int endk = len - k;
        ListNode* anoth = head;
        i = 0;
        while (i < endk) {
            anoth = anoth->next;
            i++;
        }

        int data = temp->val;
        temp->val = anoth->val;
        anoth->val = data;

        return head;
    }
};