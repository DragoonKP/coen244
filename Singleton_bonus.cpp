//
//  main.cpp
//  bonus_singleton
//
//  Created by Kishanlal on 2017-02-17.
//  Copyright © 2017 Kishanlal. All rights reserved.
//

/* 
 Using private /protected constructor using
 
 Rectangular  coordinates
 Creating two types of points
 
 Point {
 
 Private :
 Point (float , float) ;
 
 Public :
 Point rectangle (float,float)  ;
 Point polar (float,float) ;
 } ;
 
*/



#include <iostream>
// singleton implementation of Point .

class Point {
public:
    static Point* Instance();
    Point Rectangle (float ,float ) ;
    Point Polar(float,float) ;
private:
    static Point* _instance;
    Point (float,float) ;
    float a;
    float b; // constructor  for a point .
};

// Implementation
Point* Point::_instance =0;

Point* Point::Instance() {
    if (_instance == 0) {
        _instance = new Point(10.5,0.6) ;
    }
    return _instance;
}

Point ::Point(float a, float b){ // private constructor point
    this->a = a ;
    this->b = b ;
}
Point Point :: Rectangle(float length, float widht) {
    return Point (length,widht) ;
    
}

Point Point::  Polar(float radius,float angle) { // assuming radius and angle
   
    return Point(radius,angle);
}





