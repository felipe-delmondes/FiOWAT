#include <stdio.h>
#define FALSE 0
#define TRUE 1
#define NUMELEMS 100

int Array[NUMELEMS];


void BubbleSort(int Array[]) {
	int Sorted = FALSE;
	int Temp, Index, i;

	for (i = 0; i < NUMELEMS; i++) { //@100
		Sorted = TRUE;
		for (Index = 0; Index < NUMELEMS; Index++) {//@5050
			if (Index >= NUMELEMS - i -1)
				break;
			if (Array[Index] > Array[Index + 1]) {
				Temp = Array[Index];
				Array[Index] = Array[Index + 1];
				Array[Index + 1] = Temp;
				Sorted = FALSE;
			}
		}
		if (Sorted)
			break;
	}
}

int main(void) {
	for(int i = 0; i < NUMELEMS; i++){//@100
		printf("Input\n");
		scanf("%d", &Array[i]);
	}
	BubbleSort(Array);
	return 0;
}



