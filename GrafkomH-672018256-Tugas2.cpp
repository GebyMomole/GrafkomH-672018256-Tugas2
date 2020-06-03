#include <stdlib.h>
#include <glut.h>



void drawQuads() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.9, 0.1);
    glVertex2d(0, 170);
    glColor3f(1.0, 0.3, 0.5);
    glVertex2d(-175, 40);
    glColor3f(0.3, 0.6, 1.0);
    glVertex2d(0, -200);
    glColor3f(1.0, 0.9, 0.4);
    glVertex2d(175, 40);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    glVertex2f(-175, 40);
    glVertex2f(175, 40);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0, 170);
    glVertex2f(0, -220);
    
    glEnd();
    glFlush();

}

void main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("layang-layang");
    gluOrtho2D(-320.0, 320.0, -240.0, 240.0);
    glutDisplayFunc(drawQuads);
    glutMainLoop();

}