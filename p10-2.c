#include <stdio.h>
void decrement_date(int *y,int *m,int *d){
	switch(*d){
		case 28:{
			if(*y%4 != 0 && *m == 2){
				*m += 1;
				*d = 0;
			}
		break;
		}
		case 29:{
			if(*y%4 == 0 && *m == 2){
				*m += 1;
				*d = 0;
			}
		}
		case 30:{
			if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
				*m += 1;
				*d = 0;
			}
		}
		case 31:{
			*m += 1;
			*d = 0;
		}
		default: ; break;
	}
	*d +=1 ;
}		
void increment_date(int *y,int *m,int *d){
	
}
int main(){
	int y1;
	int m1;
	int d1;
	printf("y:");
	scanf("%d",&y1);
	printf("m:");
	scanf("%d",&m1);
	printf("d:");
	scanf("%d",&d1);
	int *y = &y1;
	int *m = &m1;
	int *d = &d1;
	decrement_date(y,m,d);
	printf("%d.%d.%d\n", *y, *m, *d);
}