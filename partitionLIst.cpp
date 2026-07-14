Problems
Contest
Discuss
More


2
2Streaks
Miss me yet?
DCC Badge

avatar
Avatar
Himanshi_Pawar
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Submissions Detail -
Partition List
Accepted
168 / 168 testcases passed
Himanshi_Pawar
Himanshi_Pawar
submitted at Jul 15, 2026 00:54

Solution
Runtime
0
ms
Beats
100.00%
Memory
15.02
MB
Beats
11.17%
Code
C++
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);

        ListNode* smallP = small;
        ListNode* largeP = large;

        while(head != NULL){
            if(head->val < x){
                smallP->next = head;
                smallP = smallP->next;
            }
            else{
                largeP->next = head;
                largeP = largeP->next;
            }
            head = head->next;
        }
        largeP->next = NULL;
        smallP->next = large->next;

        return small->next;
    }
};
View less
 
Write your notes here
Select related tags
0/5
Back to Problem
Copyright © 2026 LeetCode
Download App
Help Center
Bug Bounty
Assessment
Terms
Privacy Policy

India
