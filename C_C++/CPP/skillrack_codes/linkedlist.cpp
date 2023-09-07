#include<bits/stdc++.h>
using namespace std;

template<typename T> class LinkedList
{
    private:
        typedef class Node
        {
            public:
                T data;
                Node *next;
                Node(T data)
                {
                    this->data = data;
                    this->next = nullptr;
                }
        }* node;
    public:

        node head = nullptr, tail = nullptr;

        void insert(T data)
        {
            node temp = new Node(data);
            if(head == nullptr)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }

        void print()
        {
            while(head != nullptr)
            {
                cout << head->data << " ";
                head = head->next;
            }
        }

        node get_middle_element(node head)
        {
            node slow = head;
            for(node fast = head; fast != nullptr && fast->next != nullptr; fast = fast->next->next)
            {
                slow = slow->next;
            }
            return slow;
        }
};

class solution
{
    private:
        LinkedList<int> int_arr;
        LinkedList<char> char_arr;
    public:
        void sol()
        {
            int i = 1;
            char c = 'a';
            while(i <= 26)
            {
                int_arr.insert(i);
                char_arr.insert(c);
                i++;
                c++;
            }

            int_arr.print();
            cout << endl;
            char_arr.print();
        }
};

int main(int argc, char** argv)
{
    solution sl;
    sl.sol();
    return 0;
}
