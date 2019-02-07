//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Bowen, Tanner on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();  //Virtual so it can be overridden.
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getfront();
    LinearNode<Type> * getEnt();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //    Type setAtIndex(int index, Type item);
    //    bool contains(Type item);
};

#endif /* LinkedList_hpp */
