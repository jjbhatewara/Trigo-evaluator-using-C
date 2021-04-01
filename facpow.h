int fac(int n){
if(n<=1)
return 1;
return n*fac(n-1);
}

float power(float a,float b){
int i;
float z=1;
if(b==0)
return 1;
if(b>0){
    for(i=0;i<b;i++)
    z=z*a;
    return z;
}
if(b<0){
    for(i=0;i<(-1*b);i++)
    z=z*a;
    return (1/z);
}

}

float lnf(float x){
float y=0,p,q,r,s=0;
int i;
p=(x-1)/(x+1);
for(i=0;i<17;i++){
q=power(p,2*i+1);
y=y+q/(2*i+1);
}
for(i=0;i<17;i++){
r=power(1/(2*x),2*i+1);
s=s+r/(2*i+1);
}
if(x>20)
return 2*y+2*s;
else
return 2*y;
}

float logf(float x){
return lnf(x)/lnf(10);
}

float ex(float x){
float y=0,p;
int i;
for(i=0;i<=17;i++){
p=power(x,i);
y=y+p/fac(i);
}
return y;
}

float power1(float x,float n){
return ex(n*lnf(x));
}