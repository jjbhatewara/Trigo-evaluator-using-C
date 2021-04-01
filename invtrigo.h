float rtd(float y){
return (180*y)/3.1415926536;
}

float sini(float x){
float y=x,z,p=1,q=1,r;
int i;
for(i=1;i<=16;i++){
p=p*(2*i-1);
q=q*(2*i);
r=power(x,2*i+1);
y=y+(p*r)/(q*(2*i+1));
}
z=rtd(y);
if(z>-70&&z<70)
return z+0.000024*z/100; //Error approximation
else
return z+9.56707800*z/100; //Error approximation
}


float cosi(float x){
return 90-sini(x);
}

float tani(float x){
return sini(x/power1(1+(x*x),0.5));
}

float coseci(float x){
return sini(1/x);
}

float seci(float x){
return cosi(1/x);
}

float coti(float x){
return 90-tani(x);
}


