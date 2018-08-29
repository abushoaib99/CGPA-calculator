#include<bits/stdc++.h>
using namespace std;
vector<float>gpa;
vector<float>credit;
int countsemester[9];
void firstsemseter()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 1st semester\n\n");
    for(int i=111; i<=116; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==113)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 1st semester is: %.2f\n",totalpoint/16.5);
}
void secondsemseter()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 2nd semester\n\n");
    for(int i=121; i<=127; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }
        if(i==122 || i==124)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 2nd semester is: %.2f\n",totalpoint/18.0);
}

void thirdsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 3rd semester\n\n");
    for(int i=211; i<=219; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==212 || i==215 || i==218)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 3rd semester is: %.2f",totalpoint/22.5);
}

void forthsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 4th semester\n\n");
    for(int i=221; i<=227; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==222 || i==224)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 4th semester is: %.2f",totalpoint/18.0);
}

void fifthsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 5th semester\n\n");
    for(int i=311; i<=316; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==313)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 5th semester is: %.2f",totalpoint/16.5);
}

void sixthsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 6th semester\n\n");
    for(int i=321; i<=328; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==322|| i==325 || i==327)
            point*=1.5;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 6th semester is: %.2f",totalpoint/19.5);
}

void seventhsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 7th semester\n\n");
    for(int i=411; i<=417; i++)
    {
        printf("\nEnter the letter grade of %d: ",i);
        cin>>grade;
        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }

        if(i==412)
            point*=1.5;
        else if(i==416)
            point*=1;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 7th semester is: %.2f",totalpoint/17.5);
}

void eightsemester()
{
    float point,totalpoint=0.00;
    string grade;
    printf("\n\nEnter the letter grade of all subject of 8th semester\n\n");
    for(int i=421; i<=425; i++)
    {
        if(i==424)
        {
            printf("\nEnter the letter grade of 42X: ");
            cin>>grade;
        }
        else if(i==425)
        {
            printf("\nEnter the letter grade of 499: ");
            cin>>grade;
        }
        else
        {
            printf("\nEnter the letter grade of %d: ",i);
            cin>>grade;
        }

        if(grade=="A+" || grade =="a+")
            point=4.00;
        else if(grade=="A" || grade=="a")
            point=3.75;
        else if(grade=="A-" || grade=="a-")
            point=3.5;
        else if(grade=="B+" || grade=="b+")
            point=3.25;
        else if(grade=="B" || grade=="b")
            point=3.00;
        else if(grade=="B-" || grade=="b-")
            point=2.75;
        else if(grade=="C+" || grade=="c+")
            point=2.5;
        else if(grade=="C" || grade=="c")
            point=2.25;
        else if(grade=="D" || grade=="d")
            point=2.00;
        else if(grade=="F" || grade=="f")
            point=0.00;
        else
        {
            point=0;
            printf("\nYou have wrong choice. Please enter again\n");
            i--;
        }
        if(i==422)
            point*=1.5;
        else if(i==425)
            point*=6;
        else
            point*=3.00;
        totalpoint+=point;
    }
    gpa.push_back(totalpoint);
    printf("\n\nThe GPA of 8th semester is: %.2f\n",totalpoint/16.5);
}
void CGPA()
{
    int choice=1;
    float GPA=0.0,credit1=0.0;
    float totalcredit=0.0,totalCGPA=0.0,totalGPA=0.0;
    float GPATC=0.0;
    while(1)
    {
        printf("\nPress 1. CGPA of you calculated the GPA just now\n");
        printf("Press 2. Calculate the CGAP\n");
        printf("Press 0. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(!choice)
            break;
        int sz=credit.size();
        totalcredit=0.0;
        for(int i=0; i<credit.size(); i++)
        {
            totalcredit+=credit[i];
        }
        for(int i=0; i<gpa.size(); i++)
        {
            GPATC+=gpa[i];
        }
        if(choice==1)
        {
            if(sz==0)
            {
                printf("\nYou are not calculated any GPA of any semester\n\n");
                break;
            }

        else
        {
            if(sz==8)
            {
                printf("\nCGPA of all semester is: %.2f",GPATC/totalcredit);
            }
            else
            {
                printf("\nCGPA of ");
                for(int i=1; i<=8; i++)
                {
                    if(i==sz)
                        printf("& ");
                    if(countsemester[i]!=0)
                        printf("%d ",i);
                }
                printf("semester is: %.2f\n\n",GPATC/totalcredit);
            }

        }

        }
        else if(choice==2)
        {
            int n;
            printf("\nEnter the semester that you want to calculate CGPA 1st semester to up to it\nPlease Enter: ");
            scanf("%d",&n);
            totalcredit=0.0;
            GPATC=0.0;
            for(int i=1; i<=n; i++)
            {
                printf("\nEnter the GPA of %d",i);
                if(i==1)
                {
                    credit1=16.5;
                    printf("st ");
                }

                else if(i==2)
                {
                    credit1=18.0;
                    printf("nd ");
                }

                else if(i==3)
                {
                    credit1=22.5;
                    printf("rd ");
                }

                else if(i==4)
                {
                    credit1=18.0;
                    printf("th ");
                }
                else if(i==5)
                {
                    credit1=16.5;
                    printf("th ");
                }
                else if(i==6)
                {
                    credit1=19.5;
                    printf("th ");
                }
                else if(i==7)
                {
                    credit1=17.5;
                    printf("th ");
                }
                else if(i==8)
                {
                    credit1=16.5;
                    printf("th ");
                }
                printf("semester: ");
                scanf("%f",&GPA);
                if(GPA>=0.00 && GPA<=4.00)
                {
                    totalcredit+=credit1;
                    GPATC+=credit1*GPA;
                }
                else
                {
                    printf("\nPlease enter the GPA between 0.00 and 4.00\n");
                    i--;
                }


            }
            printf("\n\nCGPA of %d semester is: %.2f\n\n",n,GPATC/totalcredit);
        }
        else
        {
            printf("\nWrong Choice. Please try again\n\n");
        }
        totalcredit=0.0,totalCGPA=0.0,totalGPA=0.0;
        GPA=0.0,credit1=0.0;
        GPATC=0.0;
    }
    credit.clear();
    gpa.clear();
    memset(countsemester,0,sizeof countsemester);

}

int main()
{
    int semester,gread;
    while(1)
    {
        printf("\n\nChoice the option for calculate GPA of any semester:\n\n");
        printf("Press 1. 1st semester\nPress 2. 2nd semester\nPress 3. 3rd semester\nPress 4. 4th semester\n");
        printf("Press 5. 5th semester\nPress 6. 6th semester\nPress 7. 7th semester\nPress 8. 8th semester\n");
        printf("Press 9. CGPA\nPress 0. Exit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d",&semester);
        countsemester[semester]++;
        int c=0;
        switch(semester)
        {
        case 0:
            exit(0);
        case 1:
            credit.push_back(16.5);
            firstsemseter();
            break;
        case 2:
            credit.push_back(18.0);
            secondsemseter();
            break;
        case 3:
            credit.push_back(22.5);
            thirdsemester();
            break;
        case 4:
            credit.push_back(18.0);
            forthsemester();
            break;
        case 5:
            credit.push_back(16.5);
            fifthsemester();
            break;
        case 6:
            credit.push_back(19.5);
            sixthsemester();
            break;
        case 7:
            credit.push_back(17.5);
            seventhsemester();
            break;
        case 8:
            credit.push_back(16.5);
            eightsemester();
            break;
        case 9:
            CGPA();
            break;
        default:
            printf("\nYou have the wrong choice. Please try again\n");
        }

    }
    return 0;
}
