# Project Euler
# 2016

CC=gcc
COMPLIE_TARGETS=2 3 4 5 6 7 8 9 10
COMPLIE_CHECK_TARGETS=1

FRAMAC=frama-c
FRAMAC_OPT=-wp -rte

all: bin compile compile_with_check

compile:
	for i in $(COMPLIE_TARGETS);			\
	do						\
		echo -e " CC  $$i/$$i.o";		\
		$(CC) -Wall -c $$i/$$i.c -o $$i/$$i.o;	\
		echo -e " CC  bin/$$i";			\
		$(CC) -o bin/$$i $$i/$$i.o;		\
	done

compile_with_check:
	for i in $(COMPLIE_CHECK_TARGETS);				\
	do								\
		echo -e " FRAMAC  $$i/$$i.c";				\
		$(FRAMAC) $(FRAMAC_OPT) $$i/$$i.c |tee $$i/proof.log;	\
		echo -e " CC  $$i/$$i.o";				\
		$(CC) -Wall -DPROOF_ASSUMES -c $$i/$$i.c -o $$i/$$i.o;	\
		echo -e " CC  bin/$$i";					\
		$(CC) -o bin/$$i $$i/$$i.o;				\
	done


# mkdirbin
bin:
	mkdir -p bin

clean:
	rm -v ./*/*.o


.PHONY: compile compile_with_check
