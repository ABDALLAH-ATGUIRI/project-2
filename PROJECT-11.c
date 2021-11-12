#include<stdio.h>
#include<math.h>
int main()
{
	int A,C,B,i;
	int P;
	char X;
	C=0;
	printf("Enter la valeure A = \n");
	scanf("%d",&A);
	printf("Enter the process = \n");
	scanf("%s",&X);
//	printf("Enter la valeur B = \n");
//	scanf("%d",&B);
//	for(j=1;j<=5;j++){

    //switch (j){
    	//case 1:{

		for(i=1;i<=5;i++){
			switch (i){
				case 1:{
				if (X=='+' ){
				printf("Enter la valeur B = \n");
				scanf("%d",&B);
			C=A+B;
			printf("Total %d %c %d = %d\n",A,X,B,C);
			}
			break;
		}
			case 2:{
			if(X=='-'){
				printf("Enter la valeur B = \n");
				scanf("%d",&B);
			C=A-B;
			printf("Total %d %c %d = %d\n",A,X,B,C);
			}
			break;
		}
			case 3:{
			if(X=='*'){
				printf("Enter la valeur B = \n");
				scanf("%d",&B);
		    C=A*B;
			printf("Total %d %c %d = %d\n",A,X,B,C);
		}	
			break;
		}
			case 4:{
			if(X=='/'){
				do {	printf("Enter la valeur B = \n");
					scanf("%d",&B);
		
			if(B!=0){
			
			C=A/B;
			printf("Total %d %c %d = %d\n",A,X,B,C);
			B-=B;}
			else{
				printf("Can not be divided at zero tried again : \n");
			}
			}while(B==0);
			
		}	
			break;
		}
		case 5:{
			if(X=='^'){
				printf("Entre type the power : \n");
				scanf("%d",P);
			
				for (i=0;i<=P;i++){
					A=A*A;
				
				}
				printf("Solution :%d\n",C=+A );
			}
			
			break;
		}
		
		
	}
	}

		//break;
//		}
//		case 2:{
//			
//			
//			break;
//		}
//}
//}
	return 0;
}