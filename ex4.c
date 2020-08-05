#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num, heads=0, teils=0;

	printf("Tossing a coin...\n");

	for(i=0;i<3;i++){
		num = rand();
		if(num%2==0){
			printf("Round %d: Head\n",i+1);
			heads++;
		}
		else{
			printf("Round %d: Tail\n",i+1);
			tails++;
		}
	}

	printf("Heads: %d, Tails: %d", heads, tails);

	return 0;
}
