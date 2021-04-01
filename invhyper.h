
float sinhi(float x){
return lnf(x+power1(x*x+1,0.5));
}

float coshi(float x){
return lnf(x+power1(x*x-1,0.5));
}

float tanhi(float x){
return lnf((1+x)/(1-x))/2;
}

float cosechi(float x){
return lnf((1+power1(1+x*x,0.5))/x);
}

float sechi(float x){
return lnf((1+power1(1-x*x,0.5))/x);
}

float cothi(float x){
return lnf((x+1)/(x-1))/2;
}
