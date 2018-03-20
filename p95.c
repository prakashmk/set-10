include<stdio.h>
 int main()
{
int P,T,R;
printf("Enter the Amount,Rate,Time:");
scanf("%d%d%d",&P,&T,&R);
printf("Floor value is: %d",(P*T*R)/100);
return 0;
}
