#include <stdio.h>
#include "io-ports.h"
#include "tick-counter.h"
#define FALSE 0
#define TRUE 1
#define NUMELEMS 30

int Array[NUMELEMS];

void BubbleSort(int Array[]) {
	int Sorted = FALSE;
	int Temp, Index, i;

	for (i = 0; i < NUMELEMS; i++) { //@30
		Sorted = TRUE;
		for (Index = 0; Index < NUMELEMS; Index++) {//@465
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
	InitIO();
	for(int i = 0; i < NUMELEMS; i++){//@30
		printf("Input\n");
		scanf("%d", &Array[i]);
	}
	InitTickCounter_Overflow();
	ResetTickCounter();
	BubbleSort(Array);
	StopTickCounter();

	printf("#cycles %"PRIu32"\n", GetTick_Overflow());
    printf("Bye Bye!\n");
	return 0;
}



