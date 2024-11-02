#ifndef LIST_H
#define LIST_H
struct ListNode {
    short data;
    ListNode *next;
    ListNode(short x) : data(x), next(nullptr) {}
};
struct List {
  ListNode *head;
    List() : head(nullptr) {}
    void addBack(short value);

};
inline bool hasNext(ListNode* element) {
        return element != nullptr && element->next != nullptr;
    }
#endif //LIST_H