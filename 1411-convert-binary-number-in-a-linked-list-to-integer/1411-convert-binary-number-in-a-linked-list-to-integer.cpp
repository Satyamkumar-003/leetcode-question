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
    int getDecimalValue(ListNode* head) {
        vector<int>value;
        ListNode * temp=head;
        while(temp!=NULL){
            value.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        int n=value.size();
        reverse(value.begin(),value.end());
        for(int i=0;i<n;i++){
            int k=pow(2,i)*value[i];
            sum+=k;
        }
        return sum;
    }
};