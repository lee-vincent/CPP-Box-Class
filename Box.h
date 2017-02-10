//
//  Box.h
//  assignment5
//
//  Created by Vincent Lee on 4/29/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#ifndef BOX_HPP
#define BOX_HPP


class Box {


private:
    
    double  length,
            width,
            height;


public:
    
    /*
     Constructor: Box
     Usage: Box boxObject;
            Box boxObject(l, w, h);
     -----------------------------------------------------
     Creates a Box object. The default constructor creates the Box
     with length, width, and height set to 1.
     */
    Box();
    Box(double l, double w, double h);
    
    
    
    /*
     Accessor methods
    */
    void setHeight(double h);
    void setWidth(double w);
    void setLength(double l);
    double getVolume() const;
    double getSurfaceArea() const;


};





#endif
