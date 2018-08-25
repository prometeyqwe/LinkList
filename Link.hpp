//
//  Link.hpp
//  LinkList
//
//  Created by Евгений Киримов on 25.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#ifndef Link_hpp
#define Link_hpp

#include <stdio.h>

class Link{
private:
    int data;
    Link* next;
    
public:
    Link(int data);
    void displayLink();
    Link* getNext();
    void setNext(Link* link);
    int getData();
    void setData(int key);
    
    
    
};


#endif /* Link_hpp */
