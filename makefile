# Project Euler
# 2016

all: mkdirbin 1 2 3 4 5 6 7 8 9 10

# mkdirbin
mkdirbin :
	mkdir bin
	
# Problem1
1: ./1/1.o
	gcc ./1/1.o -o ./bin/1

./1/1.o: ./1/1.c
	gcc -Wall -c ./1/1.c -o ./1/1.o

# Problem2
2: ./2/2.o
	gcc ./2/2.o -o ./bin/2

./2/2.o: ./2/2.c
	gcc -Wall -c ./2/2.c -o ./2/2.o

# Problem3
3: ./3/3.o
	gcc ./3/3.o -o ./bin/3

./3/3.o: ./3/3.c
	gcc -Wall -c ./3/3.c -o ./3/3.o

# Problem4
4: ./4/4.o
	gcc ./4/4.o -o ./bin/4

./4/4.o: ./4/4.c
	gcc -Wall -std=c99 -c ./4/4.c -o ./4/4.o

# Problem5
5: ./5/5.o
	gcc ./5/5.o -o ./bin/5

./5/5.o: ./5/5.c
	gcc -Wall -std=c99 -c ./5/5.c -o ./5/5.o

# Problem6
6: ./6/6.o
	gcc ./6/6.o -o ./bin/6

./6/6.o: ./6/6.c
	gcc -Wall -std=c99 -c ./6/6.c -o ./6/6.o

# Problem7
7: ./7/7.o
	gcc ./7/7.o -o ./bin/7

./7/7.o: ./7/7.c
	gcc -Wall -std=c99 -c ./7/7.c -o ./7/7.o

# Problem8
8: ./8/8.o
	gcc ./8/8.o -o ./bin/8

./8/8.o: ./8/8.c
	gcc -Wall -std=c99 -c ./8/8.c -o ./8/8.o

# Problem9
9: ./9/9.o
	gcc ./9/9.o -lm -o ./bin/9

./9/9.o: ./9/9.c
	gcc -Wall -std=c99 -c ./9/9.c -o ./9/9.o

# Problem10
10: ./10/10.o
	gcc ./10/10.o -o ./bin/10

./10/10.o: ./10/10.c
	gcc -Wall -std=c99 -c ./10/10.c -o ./10/10.o


clean:
	rm -v ./*/*.o
