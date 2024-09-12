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
 ListNode* splitList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow; 
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr; 
        return slow;  
    }
 ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;  
            curr->next = prev;            
            prev = curr;                
            curr = next;                 
        }
        return prev;  
    }
    int pairSum(ListNode* head) {
         if (head == nullptr || head->next == nullptr) return 0;
        ListNode* secondHalf = splitList(head);// spilt from second half
        secondHalf = reverseList(secondHalf);//reverse the second half
        ListNode* firstHalf = head;
        int result = INT_MIN;
        while (firstHalf != nullptr && secondHalf != nullptr) {
            int sum = firstHalf->val + secondHalf->val;
            result = max(result, sum);           
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return result;
    }
};