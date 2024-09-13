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
    ListNode* oddEvenList(ListNode* head) {
        if ( head == NULL || head->next == NULL ){
            return head;
        }

        ListNode* current=head;
        ListNode* evenhead=head->next;
        ListNode* temp = evenhead;
        
        while( current->next != NULL ){
          if ( temp->next == NULL ){
            current->next=NULL;
          }
          else{
          current->next=temp->next;
          current=current->next; 
          }   
          temp->next=current->next;           
          temp=temp->next ;

        }

        current->next = evenhead;
        return head;        
    }
};