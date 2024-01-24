// Program to perform simple calculations.

#include<stdio.h>
int main()
{
	int i;
	printf("\t\tHEY THERE!\n\t\tHOW CAN I ASSIST YOU\nYOU CAN FIND: ");
	printf("\n->1.ADDITION");
	printf("\n->2.SUBSTRACTION");
	printf("\n->3.MULTIPLICATION");
	printf("\n->4.DIVISION");
	printf("\n->5.TABLE OF ANY NO.");
	printf("\n->6.A TO THE POWER N");
	printf("\n->7.SQUARE OF ANY NO.");
	printf("\n->8.AGE");
	printf("\n->9.AREA OF ANY SHAPE");
	printf("\n->10.VOLUME OF ANY SHAPE");
	
	printf("\n\nchoose an option mentioned above: ");
	scanf("%d",&i);
	
	switch(i)
	{
		 case 1:
		{
			    int num,c,sum=0;
				printf("enter the no. to add: ");
				scanf("%d",&num);
				int arr[num];
				for(c=1;c<=num;c++)
				{
				printf("enter %d the no.: ",c);
				scanf("%d",&arr[c]);
				}
				for (c=1;c<=num;c++)
				{	
			    sum+=arr[c];
				}
				printf("sum of %d no.=%d",num,sum);
				break;
        }
		 case 2:
		 {
		 	    int num1,num2,sub;
				printf("\nEnter First no. to subtract: ");
				scanf("%d",&num1);		
				printf("Enter Second no. to subtract: ");
				scanf("%d",&num2);
				
				if(num1>num2){
				sub=num1-num2;
			    }
				else{
				sub=num2-num1;
			    }
				printf("difference beteween %d & %d is = %d",num1,num2,sub);
				break;
	     }   
	     case 3:
	     	{
	     		int b,a,pro=1;
	     		printf("enter the no. to mulitiply: ");
	     		scanf("%d",&b);
	     		int ar[b];
	     		for(a=1;a<=b;a++)
	     		{
	     			printf("enter the %d no.",a);
	     			scanf("%d",&ar[a]); 
				 }
				 for(a=1;a<=b;a++)
				 {
				 	pro*=ar[a];
				 }
				 printf("product of %d no.= %d",b,pro);
				 break;
			 }
		 case 4:
			 {
			 	int num1,num2;
			 	printf("enter the First No. to divide: ");
			 	scanf("%d",&num1);
			 	printf("enter the Second No. to divide: ");
			 	scanf("%d",&num2);
				printf("Division between %d & %d is: = %d",num1,num2,num1/num2); 
				break;
			 }
			 
		  case 5:
		  {      int num,i;
		  	     printf("enter the no. to find it's table: ");
		  	     scanf("%d",&num);
		  	     printf("table of %d is: \n",num);
		  	     for(i=1;i<=10;i++)
		  	     {
		  	     	printf("\t%d*%d=%d\n",num,i,num*i);
            	}
            	break;
           }
          case 6:
          {
           		 int l,m,n=1;
           		 printf("enter the no. and degree: ");
           		 scanf("%d%d",&l,&m);
           		 for(int p=1;p<=m;p++)
           		 {
           		 	n*=l;
					}
				 printf(" %d to the power %d = %d",l,m,n);
				 break;	
		   }
		   case 7:
		   {
		   	     int num;
		   	     printf("enter the no. to find square: ");
		   	     scanf("%d",&num);
		   	     printf("square of %d is=%d",num,num*num);
		   	     break;
			} 
			case 8:
			{    int date,mon,year,cdat,cmon,cyr,fdat,fmon,fyr;
				 printf("enter your date of birth: ");
				 scanf("%d",&date);if(date>0 && date<32){
				 	
				 printf("enter your month of birth: ");
				 scanf("%d",&mon);if(mon>0 && mon<13){
				 	
				 printf("enter your year of birth: ");
				 scanf("%d",&year);if(year>1500 && year<2024){
				 	
				 printf("enter the current date: ");
				 scanf("%d",&cdat);if(cdat>0 && cdat<32){
				 	
				 printf("enter the current month: ");
				 scanf("%d",&cmon);if(cmon>0 && cmon<13){
				 	
				 printf("enter the current year: ");
				 scanf("%d",&cyr);if(cyr=2024){
				 	
				 fdat=cdat-date;if(fdat<0){ fdat=fdat*-1;}
				 fmon=(12-mon)+1;if(fmon<0){ fmon=fmon*-1;}
				 fyr=cyr-year;if(fyr<0){ fyr=fyr*-1;}
				 printf("your age is %d years,%d months & %d days",fyr,fmon,fdat);
				 break;
		         }}}}}}
				 else{
				 printf("enter the right values");}
            }
			case 9:
			{   int w;
				printf("\n\2 1.SQUARE\n\2 2.RECTANGLE\n\2 3.PARRALELLOGRAM");
				printf("\n\2 4.TRIANGLE\n\2 5.CIRCLE\n");
				printf("choose the figure: ");
				scanf("%d",&w);
				
				switch(w)
				{
					case 1:
					{
						float side;
						printf("enter a side of square: ");
						scanf("%f",&side);
					    printf("Area of square with side %f = %f",side,side*side);
						break;	
					}
					
					case 2:
					{
						float len,bred;
						printf("enter the length and breadth of rectangle: ");
						scanf("%f%f",&len,&bred);
						printf("Area of the rectangle is = %f",len*bred);
						break;
					}
					
					case 3:
					{
						float base,hight;
						printf("enter the base and height of parallelogram: ");
						scanf("%f%f",&base,&hight);
						printf("Area of parralellogram is = %f",base*hight);
						break;
				    }
					case 4:
					{
						int x;
						printf("select the type of triangle: ");
						printf("\n1.EQUILATERAL\n2.RIGHT ANGLED OR ISOSCELLUS TRIANGLE\n");
						scanf("%d",&x);
						
						switch(x)
						{
							case 1:
								{   float side;
									printf("enter a side of triangle: ");
									scanf("%f",&side);
									printf("Area of the given triangle = %f ",1.73205081/4*(side*side));
									break;
								}
							case 2:
								{   float base,hight;
									printf("enter the base and height of triangle: ");
									scanf("%f%f",&base,&hight);
									printf("Area of given triangle = %f ",base*hight/2);
									break;
								}
						} break;
					}
					
					case 5:
					{
					    float radii;
						printf("enter the radius of the circle: ");
						scanf("%f",&radii);
						printf("Area of the circle = %f ",3.14*radii*radii);
						break;	
					}	
					}break;	
				}
				
				case 10:
					{
						int y;
						printf("\n1.CUBE\n2.CUBOIDE\n3.SPHERE\n4.CONE\n5.TRIANGULAR PRISM\n6.CYLINDER");
						printf("\nselect the figure among these: ");
						scanf("%d",&y);
						
						switch (y)
						{
							case 1:
								{
								   float side;
								   printf("enter the side of cube: ");
								   scanf("%f",&side);
								   printf("the volume of the cube = %f ",side*side*side);
								   break;	
								}
							case 2:
								{
									float len,bred,hight;
									printf("enter the length breadth and height of the cuboide: ");
									scanf("%f%f%f",&len,&bred,&hight);
									printf("the volume of the cuboide = %f ",len*bred*hight);
									break;
								}
							case 3:
							    {
								    float radii;
								    printf("enter the radius of the sphere: ");
								    scanf("%f",&radii);
								    printf("Volume of the sphere = %f",4/3*3.14*radii*radii*radii);
								    break;
								}	
							case 4:
							    {
								    float radi,hight;
								    printf("enter the  radius and height of the cone: ");
								    scanf("%f%f",&radi,&hight);
								    printf("Volume of the cone = %f",3.14*radi*radi*hight/3);
								    break;
								}
							case 5:
							    {
							    	float len,bred,hight;
							    	printf("enter the length,breadth and height of the prism: ");
							    	scanf("%f%f%f",&len,&bred,&hight);
							    	printf("Volume of the prism = %f",len*bred*hight/2);
							    	break;
								}
							case 6:
							    {
								     float radii,hight;
								     printf("enter the radius and height of the cylinder: ");
								     scanf("%f%f",&radii,&hight);
								     printf("Volume of the cyliner = %f",3.14*radii*radii*hight);
								     break;
								}			
						}            break;
					}
}	
}
