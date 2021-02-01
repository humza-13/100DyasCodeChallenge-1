# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        if l1 == None and l2 == None: return None     
        if l1 == [] and l2 == []: return []            
        if l1 == []:  return l2           
        if l2 == []: return l1
            
        root = ListNode()
        ptr = root
        
        while l1 != None and l2 != None:
            
            if l1.val <= l2.val:
                ptr.next = ListNode(l1.val)
                l1 = l1.next
            else:
                ptr.next = ListNode(l2.val)
                l2 = l2.next             
            ptr = ptr.next

        if l1 == None and l2 != None:
            ptr.next = l2

        if l2 == None and l1 != None:
            ptr.next = l1
        
        root = root.next

        return(root)
