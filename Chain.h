#include <iostream>
#include <any>

template <typename T>
struct Node
    {
        T value;
        Node* next = nullptr;
        Node* prev = nullptr;
    };

// fetch
template <typename T>
class Chain
{
    private:
    Node<T>* start;
    Node<T>* end;

    public:
    Chain()
    {
        start = nullptr;
        end = nullptr;
    }

    bool isNull()
    {
        return start->next == nullptr;
    }

    void add(T value)
    {
        Node<T>* node = new Node<T>;
        node->value = value;
        if(start==nullptr) {
            start = node;
            end = node;
            return;
        }
        node->prev = end;
        end->next = node;
        end = node;
    }

    T pop()
    {
        T value;
        value = end->value;
        end = end->prev;
        // free(end->next);
        end->next = nullptr;
        return value;
    }

    friend std::ostream &operator <<(std::ostream &os, Chain &c)
    {
        os << "( ";
        Node<T>* currentNode = c.start;
        while (currentNode->next!=nullptr)
        {
            os << currentNode->value << " = ";
            currentNode = currentNode->next;
        }
        os << currentNode->value << " )";
        delete currentNode;
        return os;
    }
};