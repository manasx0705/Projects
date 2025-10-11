#include <iostream>
using namespace std;
int main()
{
    int a=0,days2,days,days1,years,iyears, months;
    cout<<"enter the number of days";
     cin>>days;
    iyears=days/365;
    days1=days%365;  
    
    if((days1-31)>0){
        a++;
    }
       if((days1-59)>0){
        a++;
    }    
       if((days1-90)>0){
        a++;
    }
       if((days1-120)>0){
        a++;
    }
       if((days1-151)>0){
        a=a+1;
    }
       if((days1-181)>0){
        a=a+1;
    }
       if((days1-212)>0){
        a=a+1;
    }
       if((days1-243)>0){
        a=a+1;
    }
       if((days1-273)>0){
        a=a+1;
    }
       if((days1-304)>0){
        a=a+1;
    }
       if((days1-334)>0){
        a=a+1;
    }
       if((days1-365)>0){
        a=a+1;
    }



    if(a==0){
        days2=days1;
    }
    if(a==1){
        days2=days1-31;
    }
    if(a==2){
        days2=days1-59;
    }
    if(a==3){
        days2=days1-90;
    }
    if(a==4){
        days2=days1-120;
    }
    if(a==5){
        days2=days1-151;
    }
    if(a==6){
        days2=days1-181;
    }
    if(a==7){
        days2=days1-212;
    }
    if(a==8){
        days2=days1-243;
    }
    if(a==9){
        days2=days1-273;
    }
    if(a==10){
        days2=days1-304;
    }
    if(a==11){
        days2=days1-334;
    }
    
    cout<<"the days contains "<<iyears<<" years "<<a<<" months and "<<days2<<" days";
    
    return 0;
}
