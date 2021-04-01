#define e 2.7182818285

float sinhf(float x){
float y;
y=(power1(e,x)-power1(e,-1*x))/2;
return y;
}

float coshf(float x){
float y;
y=(power1(e,x)+power1(e,-1*x))/2;
return y;
}

float tanhf(float x){
return sinhf(x)/coshf(x);
}

float cosechf(float x){
return 1/sinhf(x);
}

float sechf(float x){
return 1/coshf(x);
}

float cothf(float x){
return 1/tanhf(x);
}
