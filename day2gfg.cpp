class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node *slow = head;
        Node *fast = head;
        bool loop = false;

        // Detecting the loop using Floyd’s Cycle-Finding Algorithm
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                loop = true;
                break;
            }
        }

        // If loop is found, count the number of nodes in the loop
        if (loop) {
            int cnt = 1;
            slow = slow->next;
            while (slow != fast) {
                cnt++;
                slow = slow->next;
            }
            return cnt;
        }

        // If no loop is found, return 0
        return 0;// Code here
    }
};