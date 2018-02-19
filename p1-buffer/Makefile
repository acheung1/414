all: guesser1 guesser2 guesser3 exploit1 vuln1

guesser1: guesser1.c
	gcc -fno-stack-protector -z execstack -m32 -g guesser1.c -o guesser1

guesser2: guesser2.c
	gcc -fno-stack-protector -z execstack -m32 -g guesser2.c -o guesser2

guesser3: guesser3.c
	gcc -fno-stack-protector -z execstack -m32 -g guesser3.c -o guesser3

exploit1: exploit1.c
	gcc -m32 exploit1.c -o exploit1

vuln1: vulnerable1.c
	sudo gcc -fno-stack-protector -z execstack -m32 -g vulnerable1.c -o vuln1
	sudo chmod 4755 vuln1
