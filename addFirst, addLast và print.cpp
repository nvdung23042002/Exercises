// addFirst, addLast và print.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

struct Node
{
    int str;
    Node* next;
    Node()
    {
        str = 0;
        next = NULL;
    }
};

struct Linked
{
    Node* head;
    Linked()
    {
        head = NULL;
    }

    void addFirst(int s)
    {
        Node* newnode = new Node;
        newnode->str = s;
        newnode->next =head;
        head = newnode;
    }

    void addLast(int s)
    {
        Node* newNode = new Node;
        newNode->str = s;
        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else
        {
            for (Node* tail = head; tail != NULL; tail = tail->next)
            {
                if (tail->next == NULL)
                {
                    tail->next = newNode;
                    break;
                }
            }
        }
    }

    void print()
    {
        for (Node* p = head; p != NULL; p = p->next)
        {
            cout << p->str << " ";
        }
        cout << endl;
    }

    void Reverse()
    {
        Node* Next = NULL;
        Node* cur = head;
        Node* prev = NULL;
        while (cur != NULL)
        {
            Next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = Next;
        }
        head = prev;
    }
    
    void printLast(Linked List, int k)
    {
        Node* Pos = List.head;
        int count = 0;
        for (Node* p = List.head; p != NULL; p = p->next)
        {
            count ++;
        }
        int pos;
        if (count > k)
            pos = count - k;
        // gán vị trí thứ i
        for (int i = 1; i <= pos; i++)
            Pos = Pos->next;

        for (Node* p = Pos; p != NULL; p = p->next)
        {
            cout << p->str << " ";
        }
    }

    Node* deleteSingle()
    {
        // node cần xóa
        int check = 0;
        Node* tail = head;
        while (tail->next->next != NULL) tail = tail->next;
        Node* pos = new Node;
        Node* p = head;
        for (p = head; p != tail; p = p->next)
        {
            if (p->str != p->next->str and p->next->str != p->next->next->str)
            {
                pos = p->next;
                check++;
                break;
            }
        }
        if (check == 0)
        {
            if (p->str != tail->next->str)
                pos = tail->next;
            else
                pos = head;
        }
        //xóa node
        if (pos == head)
        {
            head = head->next;
            return head;
        }
        else
        {
            for (Node* p = head; p != NULL; p = p->next)
            {
                if (p->next == pos)
                {
                    p->next = pos->next;
                    delete pos;
                    return head;
                }
            }
        }
    }

    Node* deleteDuplicates()
    {
        if (head == NULL)
            return head;
        int Bool[100] = { 0 };
        Node* pre = head;
        Node* p = head->next;
        while (p != NULL)
        {
            if (Bool[p->str] == 0)
            {
                Bool[p->str] ++;
                pre = pre->next;
                p = p->next;
            }
            else
            {
                Node* tmp = p->next;
                pre->next = tmp;
                p = tmp;
            }
        }
        return head;
    }

    void convert()
    {
        int count = 0;
        for (Node* p = head; p != NULL; p = p->next)
            count++;
        int n = count / 2;
        Node* Pa = head;
        Node* Pb = head;
        while (n > 0)
        {
            Pb = Pb->next;
            n --;
        }
        while (Pb != NULL)
        {
            Node* tmpA = Pa->next;
            Node* tmpB = Pb->next;
            if (Pb->next == NULL)
            {
                Pa->next = Pb;
            }
            else
            {               
                Pa->next = Pb;   
                Pb->next = tmpA;  
            }
            Pa = tmpA;
            Pb = tmpB;
        }
    }
};



int main()
{
    Linked list;
    ///*testA1(list);*/  
    //int k;
    //cin >> k;
    for (int i = 1; i <= 6; i++)
    {
        int s;
        cin >> s;
        //list.addFirst(s);
        list.addLast(s);
    }
    /*list.Reverse();*/
    /*list.deleteSingle();*/
    /*list.deleteDuplicates();*/
    list.convert();
    list.print();
    return 0;
}

