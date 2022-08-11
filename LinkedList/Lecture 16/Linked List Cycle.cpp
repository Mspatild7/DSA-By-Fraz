/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/* To detect LinkedList Cycle, we will use the concept of Slow and Fast pointer.
We will make our Fast Pointer move with a Speed twice to that of our Slow Pointer.
If there's a Cycle in the LinkedList, then eventually our Fast Pointer will catch our Slow pointer.
Otherwise, if there's no Cycle in the LinkedList, we come out of the While Loop and return false
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
     
    // Initally, both Fast and Slow pointer will point to Head
        
    ListNode *fast = head ;
    ListNode *slow = head ;
      
    // While Loop runs till our Fast Pointer doesn't become NULL or our Fast pointer doesn't point to the Last Node of the LinkedList
        
    while(fast != NULL && fast -> next != NULL)
    {
        // Slow pointer will move by a Single Node everytime
        
        slow = slow -> next ;
        
        // Fast Pointer will move with a speed twice to that of Slow Pointer
        
        fast = fast -> next -> next ;
        
        // If there's a Cycle in the LinkedList, then Fast and Slow pointer will eventually meet
        
        if(fast == slow)
            return true ;
    }
        
    // If we come out of the While Loop, it implies there's no Cycle present in the LinkedList, so we return false
        
    return false ;
}
};

/*
Time Complexity:  O(N)
Space Complexity: O(1)
*/
