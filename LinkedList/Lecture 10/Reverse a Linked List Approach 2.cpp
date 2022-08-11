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

/* To reverse a LinkedList recursively, we need to design a Recursive function reverse(head) which takes the head of the Head of the intial LinkedList and returns the Head of the Reversed LinkedList
We will just reverse Two Nodes & ask recursion to do rest of the Task
We will just change Reverse Two Nodes: head and the Node next to head
To reverse, we will make head -> next -> next to point to head
After that, we will return the Reversed-Head given to us by LinkedList
We will stop when we are at the Last Node because a Single Node cannot be Reversed
*/

class Solution {
    
private:
    
ListNode *reverse(ListNode *head)
{
    // Base Condition
    
    if(head -> next == NULL)
        return head ;
    
    // Ask recursion to return the Reversed Head
    
    ListNode *reverseHead = reverse(head -> next) ;
    
    // Reverse the Adjacent Nodes that is, Head & Head's Next Node
    
    head -> next -> next = head ;
    
    head -> next = NULL ;
    
    // Return the Reversed Head at the end
    
    return reverseHead ;
}
public:
    ListNode* reverseList(ListNode* head) {
    
    // If head is Equal to NULL, we don't have a LinkedList to reverse, so we directly return NULL
        
    if(head == NULL)
        return NULL ;
      
    // Otherwise we return the Reversed-Head given to us by the Recursive function reverse()
        
    return reverse(head) ;
}
};

/*
Time Complexity:  O(N)
Space Complexity: O(N) { Auxillary Stack Space of Recursion }
*/
