#ifndef TEMP_H
#define TEMP_H
#include <stdio.h>

float c_fahren(float x){
        return ((1.8 * x) + 32);
}
float f_celcuis(float x){
        float y;
        y = 5/(float)9 *(x - 32);
        return y;
}
float c_kelvin(float x){
        return (x + 273);
}
float f_kelvin(float x){
        float y;
        y = (5/(float)9 * (x - 32));
        y += 273.15;
        return y;
}
float k_celcius(float x){
        return (x - 273.15);
}
float k_fahren(float x){
        return (x - 273.15) * 1.8 + 32\
;
}
#endif
