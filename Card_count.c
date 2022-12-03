#include <stdio.h>

int main(){
	
	char array_card[3], again, count;
	int val=0;
	do{
		fflush(stdin);
		printf("Enter the card name: ");
		fgets(array_card,sizeof(array_card),stdin);
		
		if(array_card[0]=='K'){
			val=10;
		}
		else if(array_card[0]=='Q'){
			val=10;
		}
		else if(array_card[0]=='J'){
			val=10;
		}
		else if(array_card[0]=='A'){
			val=11;
		}
		else{
			val=atoi(array_card);
		}
		if ((val>2)&&val<7){
			count++;
		}
			else if(val==10){
			count--;
		}
		printf("The card value is : %i\n",val);
		printf("Current count : %i\n",count);
		printf("Wanna go again (y/n) : ");
		fflush(stdin);
		scanf("%c",&again);
	}
	while((again=='y')||(again=='Y'));
	
	
	return 0;
}
