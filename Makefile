
CLASSDIR = ./libfdr
INCLUDE = -I $(CLASSDIR)
CFLAGS = $(INCLUDE)
LIBS = $(CLASSDIR)/libfdr.a

CC = gcc
EXECUTABLES = \
    kripto \

all: $(EXECUTABLES)

clean:
	rm -f kripto encripted decripted

kripto: main.c
	$(CC) $(CFLAGS) -o kripto main.c $(LIBS)
