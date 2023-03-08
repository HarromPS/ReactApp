package Practice2;

class ListNode{
    public int val;
    public ListNode next;
    ListNode(){}
};
class Solution1 {
    public ListNode removeNodes(ListNode head) {
        if (head.next == null) {
            return head;
        }
        ListNode i = removeNodes(head.next);
        if (i.val > head.val) {
            return i;
        }
        head.next = i;
        return head;
    }
}

public class decendingLL {
    public static void main(String[] args){
    }
}
