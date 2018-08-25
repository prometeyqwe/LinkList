//
//  Link.cpp
//  LinkList
//
//  Created by Евгений Киримов on 25.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include "Link.hpp"
#include <iostream>

Link::Link(int data){
    this->data = data;
    this->next = NULL;
}

void Link::displayLink(){
    std::cout << "{" << this->data << "}";
}

Link* Link::getNext(){
    return this->next;
}

void Link::setNext(Link* link){
    this->next = link;
}

int Link::getData(){
    return this->data;
}

void Link::setData(int key){
    this->data = key;
}
