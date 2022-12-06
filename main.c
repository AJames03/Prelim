#include <stdio.h>
#include <stdlib.h>

#define p printf
#define sc scanf

int main()
{
    //Frame 1 - Names
    char name[50];
    int age;

    //Scan for Frame 1
    p("PLEASE INDICATE YOUR INFORMATION \n\n");
    p("Enter Your Name : ");
    sc(" %50[^\n]", &name);
    p("Enter Your Age  : ");
    sc("%i", &age);

    //Next Frame
    system("cls");

    //Frame 2 - Birthday
    char mm[9];
    int dd;
    int yy;

    p("\'Your Birthday\' \n\n");

    p("Month : ");
    sc(" %9[^\n]", &mm);
    p("Date  : ");
    sc("%i", &dd);
    p("Month : ");
    sc(" %i", &yy);

    //Next Frame
    system("cls");

    //Frame 3 - Address
    int blk;
    int lot;
    char ph[5];
    char vil[50];
    char brgy[50];
    char city[50];
    char pv[50];

    p("\'Your Address\' \n\n");

    p("Block    : ");
    sc("%i", &blk);
    p("Lot      : ");
    sc(" %i", &lot);
    p("Phase    : ");
    sc(" %5[^\n]", &ph);
    p("Village  : ");
    sc(" %50[^\n]", &vil);
    p("Barangay : ");
    sc(" %50[^\n]", &brgy);
    p("City     : ");
    sc(" %50[^\n]", &city);
    p("Province : ");
    sc(" %50[^\n]", &pv);

    //Next Frame
    system("cls");

    //Frame 4 - Personal Information
    char con[50];
    char em[100];
    char cs[20];
    char Fn[50];
    char Mn[50];

    p("\'Your Address\' \n\n");

    p("Contact Number : ");
    sc(" %50[^\n]", &con);
    p("Email          : ");
    sc(" %100[^\n]", &em);
    p("Citizenship    : ");
    sc(" %20[^\n]", &cs);
    p("Father's Name : ");
    sc(" %50[^\n]", &Fn);
    p("Mother's Name : ");
    sc(" %50[^\n]", &Mn);

    //Next Frame
    system("cls");

    char pri[100];
    char sec[100];
    char ter[100];

    char Oc[100];
    char Sc[100];
    char Tc[100];

    p("\"Educational Background\"\n\n");
    p("Primary   : ");
    sc(" %100[^\n]", &pri);
    p("Secondary : ");
    sc(" %100[^\n]", &sec);
    p("Tertiary  : ");
    sc(" %100[^\n]", &ter);
    p("\n");
    p("1st Choice  : ");
    sc(" %100[^\n]", &Oc);
    p("2nd Choice  : ");
    sc(" %100[^\n]", &Sc);
    p("3rd Choice  : ");
    sc(" %100[^\n]", &Tc);

    //Show All Information
    system("cls");

    //Output
    p("==================== Registration Form ==================== \n\n");
    p("Your Name     : %s \n", name);
    p("Age           : %i \n", age);
    p("Birthday      : %s %i, %i \n", mm,dd,yy);
    p("Address       : Blk %i Lot %i Phase %s %s, %s, %s, %s \n", blk,lot,ph,vil,brgy,city,pv);
    p("Contact No.   : %s \n", con);
    p("Email         : %s \n", em);
    p("Citizenship   : %s \n", cs);
    p("Father's Name : %s \n", Fn);
    p("Mother's Name : %s \n\n", Mn);

    p("==================== Educational Attainment ==================== \n\n");
    p("PRIMARY       : %s \n", pri);
    p("SECONDARY     : %s \n", sec);
    p("TERTIARY      : %s \n", ter);

    p("1st Choice    : %s \n", Oc);
    p("2nd Choice    : %s \n", Sc);
    p("3rd Choice    : %s \n", Tc);
}
