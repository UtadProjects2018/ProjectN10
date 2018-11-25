//
//  main.cpp
//  ProjectN10
//
//  Created by pc-laptop on 11/18/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>
#include "TList.hpp"

int main(int argc, const char * argv[]) {

    
    TListSystem::TList<char *> charValue;
    
    charValue.Push("10");
    
    printf("First value %s, TList Size %d\n", charValue.First(), charValue.Size());
    
    charValue.Push("20");
    printf("TList Size %d\n", charValue.Size());
    
    charValue.Push("30");
    
    printf("TList Size %d\n", charValue.Size());
    
    for (int i = 0; i < charValue.Size() ; i++)
    {
        if (i == 0)
        {
            printf("TList Value %s\n", charValue.First());
        }
        else
        {
            printf("TList Value %s\n", charValue.Next());
        }
    }
    
    charValue.Reset();
    
    
    TListSystem::TList<int> intValue;
    
    intValue.Push(10);
    
    printf("First value %d, TList Size %d\n", intValue.First(), intValue.Size());
    
    intValue.Push(20);
    printf("TList Size %d\n", intValue.Size());
    
    intValue.Push(30);
    
    printf("TList Size %d\n", intValue.Size());
    
    for (int i = 0; i < intValue.Size() ; i++)
    {
        if (i == 0)
        {
            printf("TList Value %d\n", intValue.First());
        }
        else
        {
            printf("TList Value %d\n", intValue.Next());
        }
    }
    
    intValue.Reset();
    
    return 0;
}
