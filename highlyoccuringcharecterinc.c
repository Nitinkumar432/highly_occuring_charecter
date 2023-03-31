#include<stdio.h>
int arm(int arr[],int d){
	int max=0;
	int f_ask;
	for(int i=0;i<d;i++){
		int count=0;
		for(int j=0;j<d;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>max){
			max=count;
			f_ask=arr[i];
			
		}
	}
	return f_ask;
}

int main(){
	int n[10]={1,2,6,3,4,5,6,6,8,9};
	int d=sizeof(n)/sizeof(n[0]);
	printf("%d",arm(n,d));
	
}
