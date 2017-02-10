//
//  main.cpp
//  assignment5
//
//  Created by Vincent Lee on 4/29/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include "Box.h"

int main(int argc, const char * argv[]) {

    
    Box box1;
    Box box2(6, 10, 10);
    
    std::cout << "Volume: " << box1.getVolume() << "\nSurface Area: " << box1.getSurfaceArea() << "\n" << std::endl;
    std::cout << "Volume: " << box2.getVolume() << "\nSurface Area: " << box2.getSurfaceArea() << std::endl;
    
    return 0;
}
