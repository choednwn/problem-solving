using System.ComponentModel;
using Internal;

public class ListNode
{
    public int val;
    public ListNode next;
    public ListNode(int val = 0, ListNode next = null)
    {
        this.val = val;
        this.next = next;
    }
}

public class Solution
{
    public ListNode MergeTwoLists(ListNode list1, ListNode list2)
    {
        if (list1 == null) return list2;
        if (list2 == null) return list1;

        List<int> values = new();

        while (list1 != null)
        {
            values.Add(list1.val);
            list1 = list1.next;
        }
        while (list2 != null)
        {
            values.Add(list2.val);
            list2 = list2.next;
        }

        values.Sort();
        ListNode result = new();
        ListNode current = result;

        foreach (int value in values)
        {
            ListNode temp = new(value);
            current.next = temp;
            current = current.next;
        }

        return result.next;
    }
}

ListNode list1 = new(1, new(2, new(4)));
ListNode list2 = new(1, new(3, new(4)));

Solution solution = new();
ListNode result = solution.MergeTwoLists(list1, list2);

while (result.next != null)
{
    Console.Write($"{result.val} -> ");
    result = result.next;
}
Console.Write($"{result.val}");