/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel {

    public:
    double h, s, l , a;

    HSLAPixel(double h, double s, double l=1.0, double a=1.0) //parametrized constructor 
    { //initialize values of hue, stuaration, luminance, alpha channel
      this->h = h;
      this->s = s;
      this->l = l;
      this->a = a;

    }
    HSLAPixel(){
      this->h = 1.0;
      this->s = 1.0;
      this->l = 1.0;
      this->a = 1.0;

    }
  };

}
