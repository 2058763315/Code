#include "LinkList.h"
#include <iostream>
using namespace std;


LinkNode::LinkNode(int value) {
    this->data = value;
}

LinkList::LinkList() {
    //  为了实现方便，List在构造时就初始化了一个head节点。
    head = new LinkNode();
    size = 0;
}

LinkList::~LinkList() {
    /*
    创建当前指针，指向头节点
    如果当前指针的下一个节点不为空
    创建临时节点为当前节点
    当前指针指向下一个节点
    删除临时指针
    */
    LinkNode* cur = head;
    while (cur != nullptr) {
        LinkNode* tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}

void LinkList::pushBack(int value) {
    LinkNode* cur = head;
    //  cur->next == nullptr，cur指向最后一个节点
    while (cur->next != nullptr) {
        cur = cur->next;
    }
    //  新建节点并将cur->next指向新建的节点
    cur->next = new LinkNode(value);
    size++;
}

void LinkList::pushFront(int value) {
    LinkNode* p = new LinkNode(value);
    p->next = head->next;
    head->next = p;
    size++;
}

void LinkList::insert(int idx, int value) {
    if (idx < 0 || idx > size) throw "非法位置";
    LinkNode* cur = head;
    for (int i = 0; i < idx; i++) {
        cur = cur->next;
    }
    LinkNode* p = new LinkNode(value);
    p->next = cur->next;
    cur->next = p;
    size++;
}

void LinkList::popBack() {
    if (size == 0) throw "列表为空";
    LinkNode* cur = head;
    while (cur->next->next != nullptr) {
        cur = cur->next;
    }
    LinkNode* tmp = cur->next;
    cur->next = nullptr;
    delete tmp;
    size--;
}

void LinkList::popFront() {
    if (size == 0) throw "链表为空";
    LinkNode* tmp = head->next;
    head->next = tmp->next;
    delete tmp;
    size--;
}

void LinkList::erase(int idx) {
    if (idx < 0 || idx >= size) throw "非法位置";
    LinkNode* cur = head;
    for (int i = 0; i < idx; i++) {
        cur = cur->next;
    }
    LinkNode* tmp = cur->next;
    cur->next = tmp->next;
    delete tmp;
    size--;
}

LinkNode* LinkList::findNode(int idx) {
    if (idx < 0 || idx >= size) throw "非法位置";
    LinkNode* cur = head->next;
    for (int i = 0; i < idx; i++) {
        cur = cur->next;
    }
    return cur;
}

int LinkList::getValue(int idx) {
    if (size == 0) throw "链表为空";
    return findNode(idx)->data;
}

void LinkList::print() {
    if (size == 0) throw "链表为空";
    LinkNode* cur = head->next;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int LinkList::getSize() {
    return size;
}

void LinkList::popMax() {
    if (size == 0) throw "链表为空";
    LinkNode* cur = head->next;
    int max = cur->data;
    while (cur != nullptr) {
        if (cur->data > max) {
            max = cur->data;
        }
        cur = cur->next;
    }
    cout << max << endl;
    int idx = 0;
    LinkNode* cur1 = head->next;
    while (cur1 != nullptr) {
        if (cur1->data == max) {
            break;
        }
        else {
            idx++;
        }
        cur1 = cur1->next;
    }
    cout << idx << endl;
    erase(idx);
}