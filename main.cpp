//
//  main.cpp
//  LinkList
//
//  Created by Евгений Киримов on 25.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include <iostream>
#include "LinkList.hpp"

int main(int argc, const char * argv[]) {
    
    LinkList* linkList = new LinkList();
    
    linkList->insertAtHead(3);
    linkList->insertAtHead(2);
    linkList->insertAtHead(1);
    
    linkList->insertAtEnd(4);
    linkList->insertAtEnd(5);
    
    linkList->deleteAtHead();
    linkList->del(4);
    linkList->del(4);
    
    linkList->search(2);
    linkList->search(5);
    linkList->search(4);
    
    linkList->display();

    return 0;
}
