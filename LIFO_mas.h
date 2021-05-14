#pragma once

template <class Item>
class LIFO_mas
{
private:
    Item* stack;
    int numberOfItem = -1, maxNumber;
public:
    LIFO_mas()
    {
        maxNumber = 50;
        stack = new Item[maxNumber];
    }
    LIFO_mas(int maxNumber)
    {
        this->maxNumber = maxNumber;
        stack = new Item[maxNumber];
    }
    bool empty();
    void push(Item);
    Item pop();
};

template <class Item>
bool LIFO_mas<Item>::empty()
{
    return numberOfItem == -1;
}

template <class Item>
void LIFO_mas<Item>::push(Item item)
{
    if ((numberOfItem + 1) == maxNumber)
    {
        Item* temp = new Item[maxNumber * 2];
        for (int i = 0; i < numberOfItem; i++)
        {
            temp[i] = stack[i];
        }
        maxNumber *= 2;
        delete[] stack;
        stack = temp;
    }
    stack[++numberOfItem] = item;
}

template <class Item>
Item LIFO_mas<Item>::pop()
{
    if (numberOfItem * 2 < maxNumber / 2 && maxNumber > 50)
    {
        Item* temp = new Item[maxNumber / 2];
        for (int i = 0; i < numberOfItem; i++)
        {
            temp[i] = stack[i];
        }
        maxNumber /= 2;
        delete[] stack;
        stack = temp;
    }
    return stack[numberOfItem--];
}