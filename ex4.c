#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num, heads=0, teils=0;
	
	/*part of asking a name*/
	char name[10];
	printf("Who are you? ");
	scanf("%s",name);
	printf("Hello, %s\n",name);

	/*part of tossing a coin*/
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
	
	/*part of judge if "name" won or lost*/
	if(heads > tails) printf("You won!\n");
	else printf("%s lost.\n", name);

	return 0;
}
