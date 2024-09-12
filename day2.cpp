class Solution {
  public:
    
    int getMiddle(Node* head) {
        //CodeGenius
        Node* slow=head;
        Node* fast=head;
        if(!head) return -1;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
};