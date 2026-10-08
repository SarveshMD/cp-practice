#include <iostream>
#include <unordered_map>

using namespace std;

class Node
{
public:
    Node *next;
    Node *prev;
    int key;
    int val;
    Node(int key, int val, Node *next = nullptr, Node *prev = nullptr)
    {
        this->key = key;
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
};

class LRUCache
{
public:
    unordered_map<int, Node *> cache;
    Node *head = nullptr;
    Node *tail = nullptr;
    int capacity;
    int listLen = 0;

    LRUCache(int capacity)
    {
        this->capacity = capacity;
    }

    int get(int key)
    {
        auto it = cache.find(key);
        if (it == cache.end())
        {
            // miss
            return -1;
        }
        else
        {
            // hit
            Node *node = it->second;
            if (node == tail)
            {
                return node->val;
            }
            Node *ahead = node->next;
            Node *behind;
            if (node == head)
            {
                head = head->next;
                behind = nullptr;
            }
            else
            {
                behind = node->prev;
                behind->next = ahead;
            }
            ahead->prev = behind;
            tail->next = node;
            node->next = nullptr;
            node->prev = tail;
            tail = tail->next;
            return node->val;
        }
    }

    void put(int key, int value)
    {
        auto it = cache.find(key);
        if (it == cache.end())
        {
            // miss
            Node *node = new Node(key, value, nullptr, tail);
            cache[key] = node;
            // first insert
            if (head == nullptr || tail == nullptr)
            {
                head = node;
                tail = node;
            }
            else
            {
                tail->next = node;
                tail = tail->next;
            }
            listLen++;
            if (listLen > capacity)
            {
                Node *tmp = head;
                head = head->next;
                if (head != nullptr)
                    head->prev = nullptr;
                if (tail == tmp)
                {
                    tail = nullptr;
                }
                cache.erase(tmp->key);
                delete tmp;
                listLen--;
            }
        }
        else
        {
            // hit
            Node *node = it->second;
            node->val = value;
            if (node == tail)
            {
                return;
            }
            Node *ahead = node->next;
            Node *behind;
            if (node == head)
            {
                head = head->next;
                behind = nullptr;
            }
            else
            {
                behind = node->prev;
                behind->next = ahead;
            }
            ahead->prev = behind;
            tail->next = node;
            node->next = nullptr;
            node->prev = tail;
            tail = tail->next;
        }
    }
};

int main()
{
    int testCase;
    cout << "Enter test case number (1, 2, or 3): ";
    if (!(cin >> testCase))
    {
        cerr << "Test case number must be 1, 2, or 3.\n";
        return 1;
    }

    if (testCase == 1)
    {
        LRUCache cache(2);
        cache.put(1, 10);
        cout << cache.get(1) << '\n';
        cache.put(2, 20);
        cache.put(3, 30);
        cout << cache.get(2) << '\n';
        cout << cache.get(1) << '\n';
    }
    else if (testCase == 2)
    {
        LRUCache cache(3);
        cache.put(1, 1);
        cache.put(2, 2);
        cache.put(3, 3);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(4) << '\n';
        cache.put(4, 4);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(2) << '\n';
        cache.put(1, 8);
        cache.put(3, 7);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(5) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cache.put(1, 9);
        cache.put(6, 6);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(5) << '\n';
        cout << cache.get(6) << '\n';
    }
    else if (testCase == 3)
    {
        LRUCache cache(4);
        cache.put(1, 1);
        cache.put(2, 2);
        cache.put(3, 3);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(4) << '\n';
        cache.put(4, 4);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(2) << '\n';
        cache.put(5, 5);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(5) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cache.put(6, 6);
        cout << cache.get(1) << '\n';
        cout << cache.get(2) << '\n';
        cout << cache.get(3) << '\n';
        cout << cache.get(4) << '\n';
        cout << cache.get(5) << '\n';
        cout << cache.get(6) << '\n';
    }
    else
    {
        cerr << "Test case number must be 1, 2, or 3.\n";
        return 1;
    }

    return 0;
}
