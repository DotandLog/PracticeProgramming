#include<stdio.h>

int main(void){
    int birth_year,age;
    float height,weight,BMI;
    scanf("%d%f%f",&birth_year,&height,&weight);
    age = (2020-birth_year)+1;
    BMI = weight/((height/100)*(height/100));
    printf("Age = %d\n",age);
    printf("Height = %.0fcm\n",height);
    printf("Weight = %.0fkg\n",weight);
    printf("BMI = %.1f\n",BMI);
    if( (BMI >= 17)&& (BMI <= 31) ){
        if ((age>=19)&&(age<28)){
            printf("Physical Status of Regular Service Draftees\n");
            printf("4 months of Regular Service");
        }
        else if ((age>=28)&&(age<=36)){
            printf("Physical Status of Regular Service Draftees\n");
            printf("1 year of Regular Service");
        }
        else{
            printf("Not a Draftee (age < 19 or age > 36 years old)\n");
            printf("No need to perform Military Service");
        }
    }
    else if (((BMI>=16.5)&&(BMI<17))||((BMI>31)&&(BMI<=31.5))){
        if ((age >=28)&&(age<=36)){
            printf("Physical Status of Substitute Service Draftees\n");
            printf("Substitute Services");
        }
        else if (((age>=19)&&(age<28))){
            printf("Physical Status of Substitute Service Draftees\n");
            printf("Replacement Service");
        }
        else{
            printf("Not a Draftee (age < 19 or age > 36 years old)\n");
            printf("No need to perform Military Service");
        }
    }
    else{
        if((age<19)||(age>36)) {
        printf("Not a Draftee (age < 19 or age > 36 years old)\n");
        printf("No need to perform Military Service");
        }
        else {
        printf("Physical Status of Military Service Exemption\n");
        printf("Exemption from Military Service");
        }
    }
    
return 0 ;
}