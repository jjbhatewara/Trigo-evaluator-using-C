#include <stdio.h>
#include "facpow.h"
#include "trigo.h"
#include "invtrigo.h"
#include "hyper.h"
#include "invhyper.h"


float z[5];   //Global variables
int j=0;

struct fun{
char y[10];
char o;
}x[5];

float cal(int);
void pass(char [],float,int);

int main(){
printf("\n WELCOME TO WORLD OF C ");
printf("\n ________________________________________________________________________________________________________________________________ ");
printf("\n ________________________________________________________________________________________________________________________________ ");
printf("\n \t\t\t\t\t\tTHE MEMBERS OF OUR GROUPS ARE \n");
printf("\n \t\t \t\t\t\t1] BHATEWARA JINESH ");
printf("\n \t\t \t\t\t\t3] CHILWAR YASH ");

printf("\n ________________________________________________________________________________________________________________________________ ");
printf("\n ________________________________________________________________________________________________________________________________ ");
int i,ji;
printf("\n \t\t IF YOU WANT TO RUN THE PROGRAM TYPE 1\n ");
printf(" \t\t IF YOU WANT TO STOP THE PROGRAM TYPE 0 OR PRESS (CTRL C)\n ");
printf("\n \t\t \t\t\t\t YOUR INPUT : ");
scanf("%d",&ji);
printf("\n");
if (ji==1)
{
printf("\n \t\t\t\t\t GREAT !! \n \t\t\t\t\t LETS GET STARTED ");
printf("\n \t\t\t\t\t TYPE YOUR EXTRESSION IN FORM OF : \n  \t\t\t\t\t[sin^a b + cos^c d = ] \n\t\t\t\t\t WHERE a,c ARE POWERS AND b,d ARE ANGLES \n \t\t\t\t\tYOU CAN TYPE YOUR EXPRESSION ENDING WITH '=' SIGN \n");
printf("\t\t\t\t\t");
float a[5];
for(i=0;i<5;i++){
scanf("%s %f %c",x[i].y,&a[i],&x[i].o);
pass(x[i].y,a[i],i);
if(x[i].o=='=')
break;
}
printf("\t\t\t\t\t %f\n",cal(j));
printf("\n \t\t\t\t\t HOPE YOU LIKED OUR PROGRAM IF YOU WANT TO RUN AGAIN TYPE ./a.out \n ");
}
return 0;
}
 

void pass(char a[10],float b,int i){

//trigo
if(a[0]=='s'&&a[1]=='i'&&a[2]=='n')//sin
z[i]=sinf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s')//cos
z[i]=cosf(b);
if(a[0]=='t'&&a[1]=='a'&&a[2]=='n')//tan
z[i]=tanf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='e')//cosec
z[i]=cosecf(b);
if(a[0]=='s'&&a[1]=='e'&&a[2]=='c')//sec
z[i]=secf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='t')//cot
z[i]=cotf(b);
//invtrigo
if(a[0]=='s'&&a[1]=='i'&&a[2]=='n'&&a[3]=='^'&&a[4]=='-')//sini
z[i]=sini(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='^'&&a[4]=='-')//cosi
z[i]=cosi(b);
if(a[0]=='t'&&a[1]=='a'&&a[2]=='n'&&a[3]=='^'&&a[4]=='-')//tani
z[i]=tani(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='e'&&a[6]=='-')//coseci
z[i]=coseci(b);
if(a[0]=='s'&&a[1]=='e'&&a[2]=='c'&&a[3]=='^'&&a[4]=='-')//seci
z[i]=seci(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='t'&&a[3]=='^'&&a[4]=='-')//coti
z[i]=coti(b);
//hyper
if(a[0]=='s'&&a[1]=='i'&&a[2]=='n'&&a[3]=='h')//sinh
z[i]=sinhf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='h')//cosh
z[i]=coshf(b);
if(a[0]=='t'&&a[1]=='a'&&a[2]=='n'&&a[3]=='h')//tanh
z[i]=tanhf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='e'&&a[5]=='h')//cosech
z[i]=cosechf(b);
if(a[0]=='s'&&a[1]=='e'&&a[2]=='c'&&a[3]=='h')//sech
z[i]=sechf(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='t'&&a[3]=='h')//coth
z[i]=cothf(b);
//invhyper
if(a[0]=='s'&&a[1]=='i'&&a[2]=='n'&&a[3]=='h'&&a[5]=='-')//sinhi
z[i]=sinhi(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='h'&&a[5]=='-')//coshi
z[i]=coshi(b);
if(a[0]=='t'&&a[1]=='a'&&a[2]=='n'&&a[3]=='h'&&a[5]=='-')//tanhi
z[i]=tanhi(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='s'&&a[3]=='e'&&a[5]=='h'&&a[7]=='-')//cosechi
z[i]=cosechi(b);
if(a[0]=='s'&&a[1]=='e'&&a[2]=='c'&&a[3]=='h'&&a[5]=='-')//sechi
z[i]=sechi(b);
if(a[0]=='c'&&a[1]=='o'&&a[2]=='t'&&a[3]=='h'&&a[5]=='-')//cothi
z[i]=cothi(b);
//square
if(a[4]=='2'||a[5]=='2'||a[6]=='2'||a[7]=='2')
z[i]=z[i]*z[i];
//cube
if(a[4]=='3'||a[5]=='3'||a[6]=='3'||a[7]=='3')
z[i]=z[i]*z[i]*z[i];


}


float cal(int j){
switch(x[j].o){
case '+': return z[j]+cal(j+1);
          break;
case '-': return z[j]-cal(j+1);
          break;
case '*': return z[j]*cal(j+1);
          break;
case '/': return z[j]/cal(j+1);
          break;
case '=': return z[j];
          break;

}
}

