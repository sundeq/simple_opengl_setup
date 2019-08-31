CC=gcc
CFLAGS=-I

opengl_init_make: opengl_init.c
	$(CC) -o opengl_init.o opengl_init.c -lglut -lGLU -lGL
