class Solution {
  public:
    
    int countNodesinLoop(Node *head) {
        Node *slow = head;
        Node *fast = head;
        bool loop = false;

        
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                loop = true;
                break;
            }
        }

        
        if (loop) {
            int cnt = 1;
            slow = slow->next;
            while (slow != fast) {
                cnt++;
                slow = slow->next;
            }
            return cnt;
        }

        
        return 0;
    }
};