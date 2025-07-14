/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
// Node* insertnodes(Node* newhead){
//    Node* temp=newhead;
//    Node* rhead=new Node(temp->val);
//    Node* rtemp=rhead;
//    temp=temp->next;
//    while(temp!=NULL){
//     Node* newnode=new Node(temp->val);
//     rtemp->next=newnode;
//     rtemp=newnode;
//     temp=temp->next;
    
//    }
//    return rhead;
// }

// Node* handlerandom(Node* nhead,Node* oldhead){
//     Node* oldtemp=oldhead;
//     Node* temp=nhead;
//     Node* ttemp=nhead;
//    while(temp!=NULL){
//     Node* tofind=oldtemp->random;
//     if(tofind!=NULL){
//         cout<<"random"<<tofind->val<<" ";
//     }
    
//     if(tofind==NULL){
//         temp->random=NULL;
//         cout<<"yes"<<" ";
//     }else{
//         ttemp=nhead;
//         int k=tofind->val;
//         cout<<"k"<<k<<" ";
//         while(k && ttemp!=NULL){
//           ttemp=ttemp->next;
//           k--;
//         }
//         cout<<temp->val<<" "<<endl;
//      temp->random=ttemp;

//     }
    
//     temp=temp->next;
//     oldtemp=oldtemp->next;
//    }
//     return nhead;
// }

class Solution {
public:
    Node* copyRandomList(Node* head) {
    //    Node* newhead=head;
    //    Node* temp=newhead;
    //    Node* ans=insertnodes(newhead);
    //    Node* fans=handlerandom(ans,head);
    //    return fans;

    if (!head) return NULL;
        
        unordered_map<Node*, Node*> mp;

        // Step 1: Create all nodes and store mapping
        Node* curr = head;
        while (curr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Step 2: Assign next and random pointers
        curr = head;
        while (curr) {
            mp[curr]->next = mp[curr->next];       // handle NULL too
            mp[curr]->random = mp[curr->random];   // handle NULL too
            curr = curr->next;
        }

        return mp[head];
    }
};