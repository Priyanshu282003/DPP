class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        if(head==NULL || head->next==NULL){
            return -1;
        }
        vector<int>arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int mid=arr.size()/2;
        
       
        return arr[mid];
        
        
    }
};