#Plik Makefile


.PHONY: clean
.SUFFIXES: .c .o .a .so



%.o: %.c
	gcc -c $<
lib%.a: %.o
	ar rs $@ $<



Code2: main.o libkwa.a libszes.so
	gcc -o $@ $^



main.o: main.c libkwa.a libszes.so
kwa.o: kwa.c
szes.o: szes.c
	gcc -fPIC -c  $<



libkwa.a : kwa.o	



libszes.so: szes.o
	gcc -shared -o $@ $<
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/lib
