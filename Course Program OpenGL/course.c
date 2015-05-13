//
//  course.c
//  Course Program OpenGL
//
//  Created by Adam Levasseur on 5/13/15.
//  Copyright (c) 2015 Adam Levasseur. All rights reserved.
//

#include "course.h"
#include <stdbool.h>

//void isInBox(struct box b, int x, int y);

struct box {
   int x1;
   int y1;
   int x2;
   int y2;
   bool active;
};

void isInBox(struct box b, int x, int y) {
   if (x >= b.x1 && x <= b.x2)
      if (y >= b.y1 && y <= b.y2)
         b.active = true;
   b.active = false;
}

struct box b;