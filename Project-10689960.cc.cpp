#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(){

   int edStaffL=0,stdMenu=0,editS,editS1,p=0,m,mm=0,h=0,e,del,z=0,x=0, i=0,j=0,r=0,c=0,cNo[10],print,addStaff=0,v0=0,v=0, eSLoop=0;
   char addStd, stdToMain;
   double totGpt[10],totCredit[10], GPA[10];
   string editS1L,bk, staffIntro, intro,stdIntro;


   class student{
       public:
  string name[10];
  string LName[10];
  string dob[10];
  string ID[10];
  string sex[10];
  string courses[10][10];
  double gpt[10][10];
  int credit[10][10];
  double score[10][10];
  string gpa[10][10];
};

   class staff{
        public:
    string FName[10];
    string LName[10];
    int age[10];
    string courses[10][10];
    string ID[10];
    string sex[10];
    int CNum[10];
};

 staff t;
 student k;


 while(p<=100){
 cout << "\n";
 cout << "                                      SCHOOL MANAGEMENT SYSTEM \n";
 cout << "=======================================================================================================================\n\n";


cout<<"Enter 1 for STUDENT.\n";
cout<<"Enter 2 for STAFF.\n\n";

cout << "Option:";
cin>>intro;




         // choosing option 1 from the main section.......records about students.
    if(intro=="1"){
 while(stdMenu<=10){

     system("color 07");
     system("cls");

  cout<<"[1]To add a new student and assign.\n";
  cout<<"[2]To edit a student's details and courses.\n";
  cout<<"[3]To delete a student from the records.\n";
  cout<<"[4]To print the Academic Record of a student.\n\n";
  cout<<"Enter any other key to go back.\n\n";
  cout<<" NOTE!: At least a student record must be added before";
  cout<<"\n it can be edited or deleted or printed.\n\n";
  cout<<"Option:";
  cin>>stdIntro;






                  // choosing option 1.....adding student of record.
  if(stdIntro=="1")
    {while (z<=10)
        {
    system("cls");
    i++;
    cout<<"First student added is saved as STUDENT 1\n";
    cout<<"Second student added is saved as STUDENT 2 \n";
    cout<<"And so on\n\n";

    cout<<"Enter student "<<i<<"'s first name: ";
    cin>>k.name[i-1];
    cout<<"Enter student "<<i<<"'s last name: ";
    cin>>k.LName[i-1];
    cout<<"Enter student "<<i<<"'s date of birth (dd/mm/yy): ";
    cin>>k.dob[i-1];
    cout<<"Enter student "<<i<<"'s ID number: ";
    cin>>k.ID[i-1];
    cout<<"Enter student "<<i<<"'s sex (M, F): ";
    cin>>k.sex[i-1];
    if((k.sex[i-1])=="m"||(k.sex[i-1])=="M")
        k.sex[i-1]="MALE";
    else if ((k.sex[i-1])=="f"||(k.sex[i-1])=="F")
        k.sex[i-1]="FEMALE";
    cout<<"Number of courses offering (max 7): ";
    cin>>cNo[i-1];
    cout<<"Enter the course codes\n";
    for(r=0;r<cNo[i-1];r++)
      cin>>k.courses[r][i-1];
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][i-1]<<endl;
    cin>>k.credit[v][i-1];
    cout<<"Enter the exam score for "<<k.courses[v][i-1]<<endl;
    cin>>k.score[v][i-1];
    if((k.score[v][i-1])>=80&&(k.score[v][i-1])<=100)
     {(k.gpa[v][i-1])= "A";
     (k.gpt[v][i-1])=12; }
    else if((k.score[v][i-1])>=75&&(k.score[v][i-1])<80)
          {(k.gpa[v][i-1])="B+";
          (k.gpt[v][i-1])=10.5;}
    else if((k.score[v][i-1])>=70&&(k.score[v][i-1])<75)
           {(k.gpa[v][i-1])="B";
           (k.gpt[v][i-1])=9;}
    else if((k.score[v][i-1])>=65&&(k.score[v][i-1])<70)
           {(k.gpa[v][i-1])="C+";
           (k.gpt[v][i-1])=7.5;}
    else if((k.score[v][i-1])>=60&&(k.score[v][i-1])<65)
           {(k.gpa[v][i-1])="C";
           (k.gpt[v][i-1])=6;}
    else if((k.score[v][i-1])>=55&&(k.score[v][i-1])<60)
           {(k.gpa[v][i-1])="D";
           (k.gpt[v][i-1])=3;}
    else if((k.score[v][i-1])>=50&&(k.score[v][i-1])<55)
            {(k.gpa[v][i-1])="E";
            (k.gpt[v][i-1])=1.5;}
    else if((k.score[v][i-1])>=45&&(k.score[v][i-1])<50)
            {(k.gpa[v][i-1])="F";
            (k.gpt[v][i-1])=0.0;}
else cout << "Enter a right figure";
            totGpt[i-1]+=k.gpt[v][i-1];
            totCredit[i-1]+=k.credit[v][i-1];
      }
      GPA[i-1]=totGpt[i-1]/totCredit[i-1];
    cout<<"\n Details of "<<k.name[i-1]<<" successfully stored\n\n";
    cout<<"Do you want to add another student or print "<<k.name[i-1]<<"'s academic record?\n";
    cout<<"Enter 'a', to add another student or 'p' to print a student's academic record\n\n";
    cout<<"Enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
         cout<<"                                              ACADEMIC RECORD                                                     \n";
         cout << "                                            =============== \n ";
cout<<"Student number: "<<k.ID[i-1]<<"                                                                   DOB: "<<k.dob[i-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[i-1]<<endl;
cout<<"Name: "<<k.name[i-1]<<" "<<k.LName[i-1]<<"                                                                          Date printed:\n";
cout<<"________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019           Semester:                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[i-1]<<"          \n";
cout<<"COURSE                                                              CREDIT     GRADE      GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][i-1]<<"                                                    \t          "           <<k.credit[r][i-1]<<"     \t "    <<k.gpa[r][i-1]<<"   \t "    <<k.gpt[r][i-1]<<endl;
     cout << "\n\n";
     cout<<"Enter any key to return to student menu\n";
     cout << "Option:";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     }
    else if(addStd=='a')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }//end stdIntro1 if







    // choosing option 2......editing student of record.
    else if(stdIntro=="2")
    { while(x<=10)
          { system("cls");
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-99 to go back\n";
           cin>>editS;
           if (editS==-99)
            break;
           else
           { system("cls");
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n\n";
             cout << "Option;";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout << "\n\n";
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");

                    cout<<"(Correcting any mistakes you had made prior\n\n)";
                    cout<<"Number of courses(max 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][editS-1];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][editS-1]<<endl;
    cin>>k.credit[v][editS-1];
    cout<<"Enter the exam score for "<<k.courses[v][editS-1]<<endl;
    cin>>k.score[v][editS-1];
    if((k.score[v][editS-1])>=80)
     {(k.gpa[v][editS-1])= "A";
     (k.gpt[v][editS-1])=12; }
    else if((k.score[v][editS-1])>=75&&(k.score[v][editS-1])<80)
          {(k.gpa[v][editS-1])="B+";
          (k.gpt[v][editS-1])=10.5;}
    else if((k.score[v][editS-1])>=70&&(k.score[v][editS-1])<75)
           {(k.gpa[v][editS-1])="B";
           (k.gpt[v][editS-1])=9;}
    else if((k.score[v][editS-1])>=65&&(k.score[v][editS-1])<70)
           {(k.gpa[v][editS-1])="C+";
           (k.gpt[v][editS-1])=7.5;}
    else if((k.score[v][editS-1])>=60&&(k.score[v][editS-1])<65)
           {(k.gpa[v][editS-1])="C";
           (k.gpt[v][editS-1])=6;}
    else if((k.score[v][editS-1])>=55&&(k.score[v][editS-1])<60)
           {(k.gpa[v][editS-1])="D";
           (k.gpt[v][editS-1])=3;}
    else if((k.score[v][editS-1])>=50&&(k.score[v][editS-1])<55)
            {(k.gpa[v][editS-1])="E";
            (k.gpt[v][editS-1])=1.5;}
    else if((k.score[v][editS-1])>=45&&(k.score[v][editS-1])<50)
            {(k.gpa[v][editS-1])="F";
            (k.gpt[v][editS-1])=0.0;}
            totGpt[editS-1]+=k.gpt[v][editS-1];
            totCredit[editS-1]+=k.credit[v][editS-1];
      }
      GPA[editS-1]=totGpt[editS-1]/totCredit[editS-1];
      cout << "\n\n";
      cout<<"Data of "<<k.name[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end stdIntro 2 while
    } //end stdIntro 2 if









            //choosing option 3....deleting student of record.
     else if(stdIntro=="3"){
        while(p<=10){
           system("cls");
           cout<<"Enter the student's number whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;

           totGpt[del-1]=0;
           totCredit[del-1]=0;
           GPA[del-1]=0;
           k.name[del-1]=" ";
           k.LName[del-1]=" ";
           k.dob[del-1]=" ";
           k.ID[del-1]=" ";
           k.sex[del-1]=" ";
           for(int d=0;d<cNo[del-1];d++)
            {
              k.courses[d][del-1]=" ";
              k.gpt[d][del-1]=0;
              k.credit[d][del-1]=0;
              k.score[d][del-1]=0;
              k.gpa[d][del-1]=" ";
            }
              cout << "\n\n";
              cout<<"Student's records successfully deleted\n\n";
              cout<< "Enter any key to go back\n";
              cin>>bk;
              break;
              e++;
             } //end stdIntro 3 loop
          }//end stdIntro 3 if







                   // choosing option 4.... printing of student record
          else if(stdIntro=="4")
           {system("cls");
           while(h<=10)
                {
            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
           cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[print-1]<<"                                                                   DOB: "<<k.dob[print-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[print-1]<<endl;
cout<<"Name: "<<k.name[print-1]<<" "<<k.LName[print-1]<<"                                                                          Date printed:\n";
cout<<"________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[print-1]<<"          \n";
cout<<"COURSE                                                              CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][print-1]<<"                                                    \t             "<<k.credit[r][print-1]<<"    \t    "<<k.gpa[r][print-1]<<"  \t "<<k.gpt[r][print-1]<<endl;
    cout << "\n\n";
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
           else
            { system("cls");
                break;
            }
            stdMenu++;}
   }//end stdMenu if









           // choosing option from the main section.....records about the staffs
   else if(intro=="2")
         {

          while(mm<=10)
        {system("cls");
            system("color 07");
         cout<<"[1] To add a staff\n";
         cout<<"[2] To edit staff record\n";
         cout<<"[3] To delete staff record\n";
         cout<<"[4] To print the details of a particular staff member\n\n";
         cout<<"Enter any other key to go back\n\n";
         cout<<"NOTE! Add a staff before you can edit or delete or print a staff record\n";
         cout<<"Option:";
         cin>>staffIntro;



              // choosing option 1.....adding of records.
         if (staffIntro=="1")
            { while(addStaff<=10)
                { system("cls");
                    v0++;
    cout<<"First staff added is saved as staff 1\n";
    cout<<"Second staff added is saved as staff 2\n";
    cout<<"And so on \n\n";
    cout<<"Enter staff "<<v0<<"'s first name: ";
    cin>>t.FName[v0-1];
    cout<<"Enter staff "<<v0<<"'s last name: ";
    cin>>t.LName[v0-1];
    cout<<"Enter staff "<<v0<<"'s age: ";
    cin>>t.age[v0-1];
    cout<<"Enter staff "<<v0<<"'s ID number: ";
    cin>>t.ID[v0-1];
    cout<<"Enter staff "<<v0<<"'s sex(M, f): ";
    cin>>t.sex[v0-1];
    if((t.sex[v0-1])=="m"||(t.sex[v0-1])=="M")
        t.sex[v0-1]="MALE";
    else if ((t.sex[v0-1])=="f"||(t.sex[v0-1])=="F")
        t.sex[v0-1]="FEMALE";
    cout<<"Number of courses the staff will lecture (max 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes\n";
    for(r=0;r<t.CNum[v0-1];r++)
      cin>>t.courses[r][v0-1];
        system("cls");
       cout<<"Details of "<<t.FName[v0-1]<<" stored successfully\n\n ";
    cout<<"Do you want to add another staff member or print "<<t.FName[v0-1]<<"'s details?\n";
    cout<<"Enter 'a', to add another staff or 'p' to print the details of a staff\n\n";
    cout<<"Enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
     cout << "                              STAFF RECORD\n";
     cout << "                              ============\n";

        cout<<"Name: "<<t.FName[v0-1]<<" "<<t.LName[v0-1]<<"       Age: "<<t.age[v0-1]<< "                    ID: "<<t.ID[v0-1]<<endl;
        cout<<"Sex: "<<t.sex[v0-1]<<"\n\n";
        cout<<"Courses lecturing:\n";
          for(r=0;r<t.CNum[v0-1];r++)
        cout<<t.courses[r][v0-1]<<"\n";

     cout << "\n";
     cout<<"Enter any key to return to staff menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='a')
          continue;
    else
    {   system("cls");
        break;
    }
       addStaff++;
        } //end add staff loop
            } //end staff intro 1 if





            //choosing option 2.....editing staff records.
            else if(staffIntro=="2")
            {
            while(edStaffL<=10)
          { system("cls");
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n\n";
           cout<<"Enter the staf's number to be edited ( e.g.enter 1 for staff member 1 and so on....)\n";
           cout<< "Option:";
           cout <<"\n\n";
           cout<<"Enter-55 to go back\n";
           cin>>editS;
           if (editS==-55)
            break;
           else
           { system("cls");
             cout<<"What details of staff "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cout<< "Option:";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=100)
                    {cout<<"Enter staff "<<editS<<"'s new first name: ";
                     cin>>t.FName[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name: ";
                     cin>>t.LName[editS-1];
                     cout << "\n\n";
                     cout<<"Name edit successfully done, the staff member is now referred to as "<<t.FName[editS-1]<<" "<<t.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"You are to enter all the courses the staff lectures at fresh again\n";
                    cout<<"How many courses will "<<t.FName[editS-1]<<" be lecturing now?(max 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes\n";
    for(r=0;r<t.CNum[v0-1];r++)
      {cin>>t.courses[r][editS-1];
      }

      cout<<"Data of "<<t.FName[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end staffIntro 2 2 while


            }//end staff intro 2 if






            // choosing option 3.... deleting staff records.
         else if(staffIntro=="3")
            { while(p<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           t.FName[del-1]=" ";
           t.LName[del-1]=" ";
           t.ID[del-1]=" ";
           t.sex[del-1]=" ";
           t.age[del-1]=0;
           for(int d=0;d<t.CNum[del-1];d++)
             t.courses[d][del-1]=" ";

              cout<<"staff member's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             e++;
            } //end staffIntro 3 loop
          }//end staffIntro 3 if






              // choosing option 4........printing of staff records.
          else if (staffIntro=="4")
            {system("cls");
           while(h<=10)
                {
            cout<<"Enter the number of the staff member whose details you wish to print\n";
            cin>>print;
           system("cls");

         cout<<"Name: "<<t.FName[print-1]<<" "<<t.LName[print-1]<<"               Age: "<<t.age[print-1]<< "            ID: "<<t.ID[print-1]<<endl;
         cout<<"Sex: "<<t.sex[print-1]<< "\n\n";
         cout<<"Courses:\n";
          for(r=0;r<t.CNum[print-1];r++)
      cout<<t.courses[r][print-1]<<endl;
      cout << "\n\n";

      cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
            else
            { system("cls");
                break;}
         mm++;
        }//end staff intro loop
      }//end staffIntro if

 p++;}//end main menu loop
}//main prog
