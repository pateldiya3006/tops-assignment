#include<stdio.h>
main(){
	float amount,final_amount,discount;
	printf("\n Enter Your Amount := ");
	scanf("%f",&amount);
	if(amount>2000){
		discount=amount*20/100;
		final_amount=amount-discount;
	}
	else{
		if(amount>1000){
			discount=amount*10/100;
			final_amount=amount-discount;
		}
		else{
			final_amount=amount;
		}
	}
	printf("\n Your Final Amount Is = %.2f",final_amount);
}
