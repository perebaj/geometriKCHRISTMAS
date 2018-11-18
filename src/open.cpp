#include "GL/freeglut.h"
#include "GL/gl.h"
#include "time.h"   // time
#include "stdlib.h" //rand srand
#include "iostream"
#include "cmath"

using namespace std;

#define WINSIZE_HEIGTH 900
#define wINSIZE_WIGTH 1600
#define PI 3.1415926535
typedef struct color
{
    double RED;
    double GREEN;
    double BLUE;
} RGB;

/*
        SORTEIA UM NÚMERO ENTRE 0.0 E 1.0
*/
double random_color()
{
    return ((double)rand() / (RAND_MAX)) + 0;
}

void drawTriangle()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    color RGB;// INSTACIAÇÃO DA ESTRUTURA DE CORES RGB
    glColor3f(RGB.RED = random_color(), RGB.GREEN = random_color(), RGB.BLUE = random_color()); // COLORAÇÃO DO OBJETO
    
    glBegin(GL_TRIANGLES); //DELIMITA O VÉRTICE DO TRIÂNGULO
        glVertex2f(0.1, 0.1);   // ESPECIFICA O VÉRTICE 2D DO TRIANGULO
        glVertex2f(-0.1, 0.1);
        glVertex2f(0.0, -0.1);
    glEnd(); //FINALIZA O VÉRTICE

    glFlush();
}
void drawPentagono(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT); //LIMPA A TELA

    color RGB;// INSTACIAÇÃO DA ESTRUTURA DE CORES RGB
    glColor3f(RGB.RED = random_color(), RGB.GREEN = random_color(), RGB.BLUE = random_color()); // COLORAÇÃO DO OBJETO
     glBegin(GL_POLYGON);
        glVertex2f(-0.07, -0.1);
        glVertex2f(-0.1, 0.03);
        glVertex2f(0.00, 0.1);
        glVertex2f(0.1, 0.03);
        glVertex2f(0.07,-0.1);
    glEnd();

    glFlush();
}

void drawRetangle(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    color RGB;
    glColor3f(RGB.RED = random_color(), RGB.GREEN = random_color(), RGB.BLUE = random_color());
    glBegin(GL_QUADS);
        glVertex2f(0.1, 0.6); 
        glVertex2f(-0.1, 0.6); 
        glVertex2f(-0.1, 0.4); 
        glVertex2f(0.1, 0.4); 
    glEnd();

    glFlush();
}

void drawSquare(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    color RGB;
    glColor3f(RGB.RED = random_color(), RGB.GREEN = random_color(), RGB.BLUE = random_color());
    glBegin(GL_QUADS);
        glVertex2f(0.0, 0.1); 
        glVertex2f(-0.1, 0.1); 
        glVertex2f(-0.1, 0.0); 
        glVertex2f(0.0, 0.0); 
        
    glEnd();

    glFlush();
    
}



void drawHexagono(){

}

int main(int argc, char **argv)
{
    srand(time(NULL));
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,wINSIZE_WIGTH,WINSIZE_HEIGTH,0.0,0.0,1.0);
    glutInitWindowSize(wINSIZE_WIGTH, WINSIZE_HEIGTH);
    // glutInitWindowPosition(0, 0);
    glutCreateWindow("ARVORE DE NATAL GEOMETRICA");
    glutDisplayFunc(drawPentagono);

    glutMainLoop();
    return 0;
}