float dtr(float x){
return (3.1415926536*x)/180;
}


float sinf(float x){
if(x==180||x==360)
return 0.0;
if(x==270)
return -1.0;
if(x==90)
return 1.0;
if(x>90&&x<180)
x=180-x;
if(x>180&&x<270)
x=180-x;
if(x>270&&x<360)
x=x-360;
x=dtr(x);
int i;
float y=0,p,q;
for(i=1;i<=17;i++){
p=power(x,2*i-1);
q=power(-1.0,i+1);
y=y+p*q/fac(2*i-1);
}
return y;
}

float cosf(float x){
if(x==180)
return -1.0;
if(x==360)
return 1.0;
if(x==90||x==270)
return 0.0;
float a;
a=x;
if(x>90&&x<180)
a=x-180;
if(x>180&&x<270)
a=180-x;
if(x>270&&x<360)
a=360-x;
a=dtr(a);
int i;
float y=0,p,q;
for(i=1;i<=17;i++){
p=power(a,2*i-2);
q=power(-1.0,i+1);
y=y+p*q/fac(2*i-2);
}


if((x>90&&x<180)||(x>180&&x<270))
return (-1.0*y);
else
return y;
}

float tanf(float x){
return sinf(x)/cosf(x);
}

float cosecf(float x){
return 1/sinf(x);
}

float secf(float x){
return 1/cosf(x);
}

float cotf(float x){
return 1/tanf(x);
}
