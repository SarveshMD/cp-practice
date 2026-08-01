#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node *copyRandomList(Node *head)
{
    if (head == nullptr)
        return nullptr;
    unordered_map<Node *, Node *> hashmap;
    Node *res = nullptr;
    Node *tmp = head;
    Node *tmp2 = res;
    tmp2 = new Node(tmp->val);
    hashmap[tmp] = tmp2;
    tmp = tmp->next;
    while (tmp)
    {
        tmp2->next = new Node(tmp->val);
        hashmap[tmp] = tmp2->next;
        tmp2 = tmp2->next;
        tmp = tmp->next;
    }
    tmp = head;
    tmp2 = res;
    while (tmp)
    {
        tmp2->random = hashmap[tmp->random];
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return res;
}