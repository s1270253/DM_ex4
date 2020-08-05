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
	
	/*part of judge if you won or lost*/
	if(heads > tails) printf("You won!\n");
	else printf("You lost.\n");

	return 0;
}
