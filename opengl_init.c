#include <GL/glut.h>
#include <stdio.h>

void displayCallback(void);

int main(int argc, char **argv) {

    const char *windowName = "OpenGL Window";

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1280, 1024);
    glutInitWindowPosition(200, 200);
    glutCreateWindow(windowName);
    glutDisplayFunc(displayCallback);
    glutMainLoop();
    return 0;
}

void displayCallback(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.75, 0.75);
        glVertex2f(-0.75, -0.75);
        glVertex2f(0.75, -0.75);
    glEnd();
    glFlush();
}
