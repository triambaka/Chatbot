a.exe:c.o hi.o q2.o q3.o q4.o joke.o append.o
	gcc c.o hi.o q2.o q3.o q4.o joke.o append.o
c.o:c.c header1.h
	gcc -c c.c
hi.o:hi.c header1.h
	gcc -c hi.c
q2.o:q2.c header1.h
	gcc -c q2.c
q3.o:q3.c header1.h
	gcc -c q3.c
q4.o:q4.c header1.h
	gcc -c q4.c
joke.o:joke.c header1.h
	gcc -c joke.c
append.o:append.c header1.h
	gcc -c append.c
