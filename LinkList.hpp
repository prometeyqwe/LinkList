//
//  LinkList.hpp
//  LinkList
//
//  Created by Евгений Киримов on 25.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp
#include "Link.hpp"
#include <stdio.h>

class LinkList{
private:
    Link* first;
public:
    LinkList();
    bool isEmpty();
    void insertAtHead(int key);
    void insertAtEnd(int key);
    void del(int key);
    void deleteAtHead();
    void search(int key);
    void display();
};

#endif /* LinkList_hpp */
