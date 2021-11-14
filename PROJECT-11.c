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
		do {
  printf("Enter the process = \n");
	scanf("%s",&X);

		//for(i=1;i<=5;i++){
			switch (X){
				case '+':{

				printf("Enter la valeur B = \n");
				scanf("%d",&B);
			C=A+B;
			printf("Total %d %c %d = %d\n",A,X,B,C);

			break;
		}
			case '-':{

				printf("Enter la valeur B = \n");
				scanf("%d",&B);
			C=A-B;
			printf("Total %d %c %d = %d\n",A,X,B,C);

			break;
		}
			case '*':{

				printf("Enter la valeur B = \n");
				scanf("%d",&B);
		    C=A*B;
			printf("Total %d %c %d = %d\n",A,X,B,C);

			break;
		}
			case '/':{

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


			break;
		}
		case '^':{

				printf("Entre type the power : \n");
				scanf("%d",&P);
				C=1;
				for (i=0;i<=P;i++){
				C*=A;

				}
				printf("Solution :%d ^ %d = %d\n",A,P,C );


			break;
		}
		case '!':{
       printf("hi");

		break;
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
A=C;
}while(A==C);

	return 0;
}
