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
        let mut node = head.clone();
        for mut current in &mut node {
            let mut next = current.next.as_mut();
            while let Some(n) = next {
                if current.val == n.val {
                    current.next = n.next.take();
                } else {
                    current = current.next.as_mut().unwrap();
                }

                next = current.next.as_mut();
            }
        }

        node
    }
}
