# include <stdio.h>

//Written for Git workshop by M&R
int sum=0;
int plus(int a,int b){
	
	sum=a+b;
	return sum;
}
int main(){
	
	printf("%d",plus(4,5));
	
	
	return 0;
}
