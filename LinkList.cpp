//
//  LinkList.cpp
//  LinkList
//
//  Created by Евгений Киримов on 25.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include "LinkList.hpp"
#include <iostream>

LinkList::LinkList(){
    first = NULL;
}

bool LinkList::isEmpty(){return first==NULL;}

void LinkList::insertAtHead(int key){
    Link* newLink = new Link(key);
    newLink->setNext(first);
    first = newLink;
}

void LinkList::insertAtEnd(int key){
    Link* parent = first;
    Link* current = first;
    while(current!=NULL){
        parent = current;
        current = current->getNext();
    }
    parent->setNext(new Link(key));
}

void LinkList::del(int key){
    Link* parent = first;
    Link* current = first;
    while(current!=NULL && current->getData()!=key){
        parent = current;
        current = current->getNext();
    }
    if(current!=NULL)
        parent->setNext(current->getNext());
    else
        std::cout << "Ошибка удаления. Элемент " << key << " не найден." << std::endl;
}

void LinkList::deleteAtHead(){
    first = first->getNext();
}

void LinkList::search(int key){
    Link* current = first;
    
    while(current!= NULL && current->getData()!=key)
        current = current->getNext();
    
    if(current!=NULL)
        std::cout << "Элемент " << key << " найден" << std::endl;
    else
        std::cout << "Элемент " << key << " не найден" << std::endl;
}

void LinkList::display(){
    if(!isEmpty()){
        Link* current = first;
        while(current!=NULL){
            std::cout << current->getData() << " ";
            current = current->getNext();
        }
        std::cout << std::endl;
    }else std::cout << "Список пуст" << std:: endl;
}
