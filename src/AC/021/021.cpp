// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

#include <algorithm>

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        for (ListNode* node = list1; node != nullptr; node = node->next) {
            if (node->next == nullptr) {
                node->next = list2;
                break;
            }
        }

        ListNode* head = list1;
        while (head != nullptr) {
            ListNode* minNode = head;
            for (ListNode* node = head; node != nullptr; node = node->next) {
                if (node->val < minNode->val) {
                    minNode = node;
                }
            }

            std::swap(head->val, minNode->val);

            head = head->next;
        }

        return list1;
    }
};