//add two linked list which is in the reverse manner and after adding them link in the reverse manner

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int value1 = 0, value2 = 0, i = 0, j = 0;

        while (l1 != nullptr)
        {
            value1 += l1->val * pow(10, i);
            l1 = l1->next;
            i++;
        }

        while (l2 != nullptr)
        {
            value2 += l2->val * pow(10, j);
            l2 = l2->next;
            j++;
        }

        int value3 = value1 + value2;

        ListNode dummy(0);
        ListNode *current = &dummy;

        if(value3==0)
        {
            
            current->next = new ListNode(0);
             current = current->next;
        }

        else{
        while (value3 > 0 )
        {
            int digit = value3 % 10;
            current->next = new ListNode(digit);
            current = current->next;
            value3 /= 10;
        }
        }


        return dummy.next;
    }
};