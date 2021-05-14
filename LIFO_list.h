#pragma once

template <class Item>
class LIFO_list
{
private:
    struct node
    {
        Item item;
        node* next;
        node(Item item, node* next)
        {
            this->item = item;
            this->next = next;
        }
    };
    node* head;
public:
    LIFO_list() : head(nullptr) {}
    bool empty();
    void push(Item);
    Item pop();
};

template <class Item>
bool LIFO_list<Item>::empty()
{
    return head == nullptr;
}

template <class Item>
void LIFO_list<Item>::push(Item item)
{
    head = new node(item, head);
}

template <class Item>
Item LIFO_list<Item>::pop()
{
    Item result = head->item;
    node* temp = head->next;
    delete head;
    head = temp;
    return result;
}