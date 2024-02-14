#include "Rectangle.h"

Rectangle::Rectangle() {}

void Rectangle::size(float vertical, float beside) { area = vertical * beside; }

void Rectangle::draw() { printf("‹éŚ`‚Ě–ĘĎ‚Í%f\n", area); }
