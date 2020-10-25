#include <iostream>
using namespace std;
bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int getCenturyValue(int year)
{
    int digits=year/100;
    int remainder=digits%4;
    int result = 3 - remainder;
    result*=2;
    return result;
}

int getYearValue(int year)
{
    int digits=year%100;
    int divide=digits/4;
    int result = divide + digits;
    return result;
}

int getMonthValue(int month, int year)
{
    if(isLeapYear(year))
    {
        if(month==1)
            return 6;
        else if(month==2)
            return 2;
        else if(month==3)
            return 3;
        else if(month==4)
            return 6;
        else if(month==5)
            return 1;
        else if(month==6)
            return 4;
        else if(month==7)
            return 6;
        else if(month==8)
            return 2;
        else if(month==9)
            return 5;
        else if(month==10)
            return 0;
        else if(month==11)
            return 3;
        else
            return 5;
    }
    else
    {
         if(month==1)
            return 0;
        else if(month==2)
            return 3;
        else if(month==3)
            return 3;
        else if(month==4)
            return 6;
        else if(month==5)
            return 1;
        else if(month==6)
            return 4;
        else if(month==7)
            return 6;
        else if(month==8)
            return 2;
        else if(month==9)
            return 5;
        else if(month==10)
            return 0;
        else if(month==11)
            return 3;
        else
            return 5;
    }
}
int isValidDate(int dd, int mm, int yy)
{
     if(yy>0)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            {}
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
            {}
            else if((dd>=1 && dd<=28) && (mm==2))
            {}
            else if(dd==29 && mm==2 && (isLeapYear(yy)==1))
            {}
            else{
                printf("Day is invalid.\n");
                return -1;
            }

        }
        else
        {
            printf("Month is not valid.\n");
            return -1;
        }
    }
    else
    {
        printf("Year is not valid.\n");
        return -1;
    }
    return 1;
}
int main()
{
    int dd,mm,yy;

    printf("Enter date (MM DD YYYY format): ");
    scanf("%d %d %d",&mm,&dd,&yy);

    int checkValid=isValidDate(dd,mm,yy);
    if(checkValid==1)
    {
        int month= getMonthValue(mm,yy);
        int year = getYearValue(yy);
        int century = getCenturyValue(yy);
        int sum = dd+month+year+century;
        int week = sum%7;
        if(week==0)
            printf("\nSunday");
        else if(week==1)
            printf("\nMonday");
        else if(week==1)
            printf("\nTuesday");
        else if(week==1)
            printf("\nWednesday");
        else if(week==1)
            printf("\nThursday");
        else if(week==1)
            printf("\nFriday");
        else
            printf("\nSaturday");
    }
}

