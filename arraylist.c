#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

typedef struct arraylistTYPE {
	int cEC;
	int max;
	int* data;
}arraylist;

arraylist* create(int n) {
	arraylist* ret;
	ret = (arraylist*)malloc(sizeof(arraylist));
	ret->data = (int*)malloc(n * sizeof(int));
	ret->cEC = 0;
	ret->max = n;
	return ret;
}

void insert(arraylist* al, int pos, int data) {
	if (al->cEC == al->max) {
		printf("ERROR\n");
		return;
	}
	for (int i = al->cEC - 1; i >= pos; i--) {
		al->data[i + 1] = al->data[i];
	}
	al->data[pos] = data;
	al->cEC++;
}

int delete(arraylist* al, int pos) {
	if (al->cEC == 0) {
		printf("EMPTY\n");
		return -2143000000;
	}
	int ret = al->data[pos];
	for (int i = pos; i < al->cEC; i++) {
		al->data[i - 1] = al->data[i];
	}
	al->cEC--;
	return ret;
}

void print(arraylist* al) {
	for (int i = 0; i < al->cEC; i++) {
		printf("%d ", al->data[i]);
	}
	printf("\n");
}

int main() {
	arraylist* al1;
	al1 = create(8);
	insert(al1, 0, 3);
	print(al1);
	insert(al1, 1, 4);
	print(al1);
	insert(al1, 0, 8);
	print(al1);
	insert(al1, 2, 5);
	print(al1);
	delete(al1, 0);
	delete(al1, 1);
	delete(al1, 2);
	delete(al1, 3);
	print(al1);
	delete(al1, 1);
}
