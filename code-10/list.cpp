#include <iostream>
#include "list.h"

List::List()
{
    index = -1;
}

void List::add_data(Item item)
{
    if (is_empty())
    {
        items[++index] = item;
    }
    else
    {
        std::cout << "items alerady full!\n";
    }
}

bool List::is_empty()
{
    return index == -1;
}

bool List::is_full()
{
    return index == MAX - 1;
}

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i <= this->index; i++)
    {
        (*pf)(this->items[i]);
    }
}