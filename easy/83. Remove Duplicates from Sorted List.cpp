#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp;
        temp = head;
        if(head == NULL) return head;
        else{
           while(temp->next != NULL){
                if(temp->next->val == temp->val){
                    temp->next = temp->next->next;
                }
                else{
                   temp = temp->next; 
                }
            } 
        }
        
        return head;
    }
};