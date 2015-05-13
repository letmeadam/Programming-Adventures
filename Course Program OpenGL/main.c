//
//  main.c
//  Course Program OpenGL
//
//  Created by Adam Levasseur on 5/12/15.
//  Copyright (c) 2015 Adam Levasseur. All rights reserved.
//
/*
#include <stdio.h>

int main(int argc, const char * argv[]) {
   // insert code here...
   printf("Hello, World!\n");
    return 0;
}
*/
#include <GLUT/glut.h>
#include <OpenGL/glu.h>
#include <OpenGL/gl.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float red=0, blue=1.0, green=1.0;
int onMouse = 0;


void line()
{
   glLineWidth(2.5);
   glBegin(GL_LINES);
   glVertex2i(20,20);
   glVertex2i(400,400);
   glEnd();
}

void rect(int x, int y, int w, int h){
   glRecti(x-w/2, y-h/2, x+w/2, y+h/2); }

void updateDisplay(int x, int y){
   if (onMouse == 1) {
      //do something
   }
   else {
      //do something else
   }
}

void mouseClicks(int button, int state, int x, int y){
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
      if (onMouse == 0) onMouse = 1;
      else onMouse = 0;
      updateDisplay(x, y);
   }
}

void renderScene(void){
   glClear (GL_COLOR_BUFFER_BIT);
   int w, h;
   if (onMouse == 0) {
      glColor3f(0.0, 0.0, blue);
      w = 200; h = 200;
   }
   else if (GLUT_CURSOR_TOP_LEFT_CORNER == (250-w/2)){
      glColor3f(0.0, green, 0.0);
      w = 400; h = 400;
   }
   //line();
   glutMouseFunc(mouseClicks);
   rect(250,250,w,h);
   glFlush();
   
}


void init(void)
{
   
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
   glutInitWindowSize (500,500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Course Program");
   
   glClearColor (1.0, 1.0, 1.0, 0.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0, 500, 0, 500);
}



int main(int argc,char** argv)

{
   
   glutInit(&argc, argv);
   init();
   glutDisplayFunc(renderScene);
   glutIdleFunc(renderScene);
   
   glutMainLoop();
   return 0;
}
