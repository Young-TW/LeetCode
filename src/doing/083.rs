// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
//
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }

impl Solution {
    pub fn delete_duplicates(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut head = head;
        let mut current = &mut head;
        while let Some(node) = current {
            let next = &mut node.next;
            if let Some(next_node) = next {
                if node.val == next_node.val {
                    node.next = next_node.next.take();
                } else {
                    current = &mut node.next;
                }
            } else {
                break;
            }
        }

        head
    }
}