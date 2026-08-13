#include<stdio.h>
main(){
	int product_price,discount,final_price,ismember;
	printf("\n Enter the product price :=");
	scanf("%d",&product_price);
	printf("\n Enter the discount :=");
	scanf("%d",&discount);
	printf("\n Are you member ?? (yes for 1 or No for 0) :=");
	scanf("%d",&ismember);
	final_price=product_price-(product_price*discount/100);
	if(ismember==1){
		final_price=final_price-(final_price*5/100);
	}
	printf("\n Your final price is:=%d",final_price);
}
