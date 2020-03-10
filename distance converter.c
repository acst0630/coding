#include <stdio.h>
#include <stdlib.h>

void funcM(float km);
void funcFt(float km);
void funcIn(float km);
void funcCm(float km);


int main(){

    float km;
    void (*unit[4])(float);
    char choice;

    printf("Distance converter\nI will convert km into m/ ft/ in/ cm\n\n");

    printf("Enter a distance in km (NUMBERS ONLY!!!): \n");
    scanf("%f",&km);

    printf("Select the unit you want me to convert into (0 = m, 1 = ft, 2= in, 3 = cm): \n");
    scanf(" %c", &choice);





    if(choice == '0' || choice == '1' || choice == '2' || choice == '3')
        {
            unit['0'] = funcM;
            unit['1'] = funcFt;
            unit['2'] = funcIn;
            unit['3'] = funcCm;
            unit[choice](km);
        }




    return 0;

}


void funcM(float km){
    float m = km*1000;
    printf("it is equal to %0.2f metres\n", m);
}

void funcFt(float km){
    float ft = km*3300;
    printf("it is equal to %0.2f feets\n", ft);
}

void funcIn(float km){
    float in = km*39000;
    printf("it is equal to %0.2f inches\n", in);
}

void funcCm(float km){
    float cm = km*100000;
    printf("it is equal to %0.2f centimetres\n", cm);
}

