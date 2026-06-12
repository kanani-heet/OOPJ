 //WAP that calculates area of circle, triangle and square using methods.
 #include<stdio.h>
 void circle()
 {
  	float r,area,pie=3.14;
	printf("enter the value of r \n");
	scanf("%f",&r);	
	
	area=pie*r*r;
	printf("%f",area);
 }
 void triangle()
 {
 	float b,h,area;
 	printf("enter the value of b \n");
 	scanf("%f",&b);
 	
 	printf("enter the value of h \n");
 	scanf("%f",&h);
 	
 	area=0.5*b*h;
 	printf("%f",area);
 }
 void square()
 {
 	float s,area;
 	printf("enter the value of s \n");
 	scanf("%f",&s);
 	
 	area=s*s;
 	printf("%f",area);
 }
 
 float main()
 {
 	circle();
 	triangle();
 	square();
 }
	
	
	
	
	
	

