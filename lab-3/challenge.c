#include <stdio.h>
int main()
{
    float cal,phys,compro,tgradecal,tgradephys,tgradecompro;
    char gradecal,gradephys,gradecompro;
    printf("Calculus: ");
    scanf("%f",&cal);
    printf("Physics: ");
    scanf("%f",&phys);
    printf("Compro: ");
    scanf("%f",&compro);
    if(cal>=80 & cal<=100)
        gradecal='A';
    else if(cal>=70 & cal<80)
        gradecal='B';
    else if(cal>=60 & cal<70)
        gradecal='C';
    else if(cal>=50 & cal<60)
        gradecal='D';
    else if(cal>=0 & cal<50)
        gradecal='F';
    if(phys>=80 & phys<=100)
        gradephys='A';
    else if(phys>=70 & phys<80)
        gradephys='B';
    else if(phys>=60 & phys<70)
        gradephys='C';
    else if(phys>=50 & phys<60)
        gradephys='D';
    else if(phys>=0 & phys<50)
        gradephys='F';
    if(compro>=80 & compro<=100)
        gradecompro='A';
    else if(compro>=70 & compro<80)
        gradecompro='B';
    else if(compro>=60 & compro<70)
        gradecompro='C';
    else if(compro>=50 & compro<60)
        gradecompro='D';
    else if(compro>=0 & compro<50)
        gradecompro='F';
    switch(gradecal){
        case 'A':
            tgradecal = 4.0;
            break;
        case 'B':
            tgradecal = 3.0;
            break;
        case 'C':
            tgradecal = 2.0;
            break;
        case 'D':
            tgradecal = 1.0;
            break;
        default:
            tgradecal = 0.0;
    }
    switch(gradephys){
        case 'A':
            tgradephys = 4.0;
            break;
        case 'B':
            tgradephys = 3.0;
            break;
        case 'C':
            tgradephys = 2.0;
            break;
        case 'D':
            tgradephys = 1.0;
            break;
        default:
            tgradephys = 0.0;
    }
    switch(gradecompro){
        case 'A':
            tgradecompro = 4.0;
            break;
        case 'B':
            tgradecompro = 3.0;
            break;
        case 'C':
            tgradecompro = 2.0;
            break;
        case 'D':
            tgradecompro = 1.0;
            break;
        default:
            tgradecompro = 0.0;
    }
    printf("\nSubject     Score     Grade     Grade");
    printf("\n--------------------------------------");
    printf("\nCal%13.1f%7c%12.1f",cal,gradecal,tgradecal);
    printf("\nPhysics%9.1f%7c%12.1f",phys,gradephys,tgradephys);
    printf("\nCompro%10.1f%7c%12.1f",compro,gradecompro,tgradecompro);
    printf("\n\nGPA = %.1f\n",(tgradecal+tgradecompro+tgradephys)/3.0);
}