#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<string.h>
class Employee
{
	int id;
	char name[50];
	float salary;

public:
       int empid,searchid;
       char empname[50],searchname[20];
       float empsalary;
       struct date d;
       Employee()
       {
		id=0;
		salary=0.0;
       }
       Employee(int updateid)
       {
	       empid=updateid;
       }
       void getempid()
       {
	       cout<<"\Enter Id= ";
	       cin>>empid;
       }
       void getempname()
       {
		cout<<"Enter Name: ";
		cin>>empname;
       }
       void getempsalary()
       {
		cout<<"Enter Salary: ";
		cin>>empsalary;
       }
       void getdetails()
       {
		getempid();
		getempname();
		getempsalary();
		getdate(&d);
       }
       void displaydetails()
       {
		printf("    %d/%d/%d",d.da_day,d.da_mon,d.da_year);
		cout<<"\t\t\t"<<empid;
		cout<<"\t\t"<<empname;
		cout<<"\t\t"<<empsalary<<"\n";
       }

};

void main()
{
	int i,totalemployees,option,seqno,j,t,k,searchid;
	char x[20],password[20],ch,comp[20]="admin123";
	float s;
	clrscr();
	Employee e1[20];
	int gd=DETECT,gm,v;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(9);
	for(v=0;v<=360;v++)
	{
		circle(300,200,80);
		pieslice(300,200,0,v,80);
		outtextxy(200,320,"LOADING....PLEASE WAIT!!");
		delay(5);
	}
	closegraph();
	p:
	clrscr();
	cout<<"\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SECURED FILE \xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\n\nEnter Password(8 char): ";
	for(i=0;i<8;i++)
	{
		password[i]=getch();
		cout<<"*";
	}
	password[i]='\0';
	delay(50);
	cout<<"\n\nPRESS ENTER TO SUBMIT: ";
	getch();
	       if(strcmp(comp,password)!=0)
		{
			int f;
			initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			outtextxy(230,120,"DETECTING PASSWORD:");
			for(f=0;f<=360;f++)
			{
				setcolor(LIGHTGRAY);
				circle(300,200,55);
				arc(300,200,90,f+90,47);
				arc(300,200,90,f+90,48);
				arc(300,200,90,f+90,49);
				arc(300,200,90,f+90,50);
				arc(300,200,90,f+90,51);
				arc(300,200,90,f+90,52);
				arc(300,200,90,f+90,53);
				arc(300,200,90,f+90,54);
				circle(300,200,46);
				delay(10);
			}
			setcolor(RED);
			outtextxy(250,273,"WRONG PASSWORD!!");
			setcolor(DARKGRAY);
			settextstyle(TRIPLEX_FONT, HORIZ_DIR,9);
			setcolor(RED);
			outtextxy(295,135,"!");
			settextstyle(2,HORIZ_DIR,5);
			sound(300);
			delay(1000);
			nosound();
			setcolor(DARKGRAY);
			outtextxy(100,290,"-> ENTER PASSWORD AGAIN");
			delay(650);
			getch();
			cleardevice();
			closegraph();
			goto p;
		}
	cout<<"\n";
	int e;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	outtextxy(230,120,"DETECTING PASSWORD:");
	for(e=0;e<=360;e++)
	{
		setcolor(LIGHTGRAY);
		circle(300,200,55);
		arc(300,200,90,e+90,47);
		arc(300,200,90,e+90,48);
		arc(300,200,90,e+90,49);
		arc(300,200,90,e+90,50);
		arc(300,200,90,e+90,51);
		arc(300,200,90,e+90,52);
		arc(300,200,90,e+90,53);
		arc(300,200,90,e+90,54);
		delay(10);
		circle(300,200,46);
	}
	setcolor(CYAN);
	outtextxy(240,273,"PASSWORD MATCH!!");
	sound(900);
	delay(100);
	sound(500);
	delay(100);
	sound(100);
	delay(100);
	nosound();
	delay(650);
	setcolor(YELLOW);
	outtextxy(220,300,"PRESS ENTER TO CONTINUE");
	getch();
	cleardevice();
	setbkcolor(BLACK);
	setcolor(RED);
	settextstyle(TRIPLEX_FONT, HORIZ_DIR,9);
	outtextxy(100,100,"\"HELLO\" ");
	delay(1000);
	closegraph();
	START:
	clrscr();
	cout<<"\n\t\t";
	char q=221;
	 for(i=1;i<11;i++)
	 {
		delay(100);
		printf("%c",q);
	 }
	char m[20]=" START PROGRAMMING ";
	for(i=0;m[i]!='\0';i++)
	{
		cout<<m[i];
		delay(50);
	}
	char w=221;
	 for(i=1;i<11;i++)
	 {
		delay(100);
		printf("%c",w);
	 }
	cout<<"\n\n\t\t1-To Enter Data"<<endl;
	cout<<"\t\t2-To Display Data"<<endl;
	cout<<"\t\t3-Exit"<<endl;
	cout<<"\nEnter Your Choice: ";
	cin>>option;
	switch(option)
	{                                             //start switch
		case 1: clrscr();
			cout<<"\nEnter no of employees: ";
			cin>>totalemployees;
			for(i=1;i<=totalemployees;i++)
			{       cout<<"\n----Enter Details Of Employee:"<<i<<"----"<<endl;
				e1[i].getdetails();
			}
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE:";
			getch();
			goto START;

		case 2: clrscr();
			cout<<"\n\tDISPLAYING DATA.......PLEASE WAIT.........";
			delay(1000);
			clrscr();
			cout<<"\n\t\t*------------DATA OF EMPLOYEES-------------*"<<endl;
			cout<<"\n\n    Date Of Joining\tEmployee ID\tEmployee Name\tEmployee Salary\n";
			for(i=1;i<=totalemployees;i++)
			{
				e1[i].displaydetails();
			}
			cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
			getch();
			abc:
			clrscr();
			cout<<"\n\t\t*-----------WHAT YOU WANT TO DO?-----------*";
			cout<<"\n\n\t\t1-To Update Entry"<<endl;
			cout<<"\t\t2-To Delete Entry"<<endl;
			cout<<"\t\t3-To Sort Entries"<<endl;
			cout<<"\t\t4-To Search Entry"<<endl;
			cout<<"\t\t5-To Go Back";
			cout<<"\n\nEnter Your Choice: ";
			cin>>option;
			switch(option)
			{                                  //start display
				case 1: pqr:
					clrscr();
					cout<<"\n\t\t*-----------WHAT YOU WANT TO UPDATE?-----------*";
					cout<<"\n\n\t\t1-Update Id";
					cout<<"\n\t\t2-Update Name";
					cout<<"\n\t\t3-Update Salary";
					cout<<"\n\t\t4-To Go Back";
					cout<<"\n\nEnter Your Choice: ";
					cin>>option;
					switch(option)
					{                                 //start update
						case 1: cout<<"\nWhich Employee's Id?: ";
							cin>>seqno;
							for(i=seqno;i<=seqno;i++)
							{
								e1[i].getempid();
							}
							cout<<"\n\tUPDATING ENTRY";
							 for(i=1;i<6;i++)
							 {
								delay(1000);
								cout<<".";
							 }
							 delay(2000);
							 clrscr();
							cout<<"\n\n\t***ENTRY UPDATED***";
							cout<<"\n\nPRESS ANY KEY TO CONTINUE: ";
							getch();
							goto pqr;

						case 2: cout<<"\nWhich Employee's Name?: ";
							cin>>seqno;
							for(i=seqno;i<=seqno;i++)
							{
								e1[i].getempname();
							}
							cout<<"\n\tUPDATING ENTRY";
							 for(i=1;i<6;i++)
							 {
								delay(1000);
								cout<<".";
							 }
							 delay(2000);
							 clrscr();
							cout<<"\n\n\t***ENTRY UPDATED***";
							cout<<"\n\nPRESS ANY KEY TO CONTINUE: ";
							getch();
							goto pqr;

						case 3: cout<<"\nWhich Employee's Salary?: ";
							cin>>seqno;
							for(i=seqno;i<=seqno;i++)
							{
								e1[i].getempsalary();
							}
							cout<<"\n\tUPDATING ENTRY";
							 for(i=1;i<6;i++)
							 {
								delay(1000);
								cout<<".";
							 }
							 delay(2000);
							 clrscr();
							cout<<"\n\n\t***ENTRY UPDATED***";
							cout<<"\n\nPRESS ANY KEY TO CONTINUE: ";
							getch();
							goto pqr;

						case 4: goto abc;
					}  //end update
					break;

				case 2: clrscr();
					cout<<"\n\t\t*-----------WHICH ENTRY YOU WANT TO DELETE?-----------*";
					cout<<"\n\nEnter Id To Delete That Entry: ";
					cin>>seqno;
					cout<<"\n\t\tDELETING ENTRY";
					 for(i=1;i<6;i++)
					 {
						delay(1000);
						cout<<".";
					 }
					 delay(2000);
					 clrscr();
					 cout<<"\n\n\t***ENTRY DELETED***";
					 cout<<"\n\nPRESS ANY KEY TO CONTINUE: ";
					 getch();
					 clrscr();
					 cout<<"\n\t\t*------------DATA OF EMPLOYEES-------------*"<<endl;
					cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
					for(i=1;i<=totalemployees;i++)
						{
							if(seqno!=e1[i].empid)
							{
							      e1[i].displaydetails();
							}
						}
						cout<<"\n\n\nPRESS ANY KEY TO CONTINUE";
						getch();
					 goto abc;

				 case 3: bck:
					 clrscr();
					 cout<<"\n------WHAT YOU WANT TO DO?------\n";
					 cout<<"\n1-Sort Ascending"<<endl;
					 cout<<"2-Sort Descending"<<endl;
					 cout<<"3-To Go Back"<<endl;
					 cout<<"Enter Your Choice: ";
					 cin>>option;
					 clrscr();
					 switch(option)
					 {                                    //start sort
						case 1: cout<<"\n---------SORT BY:---------";
							cout<<"\n1-Sort By Salary";
							cout<<"\n2-Sort By Id";
							cout<<"\n3-Sort By Name";
							cout<<"\n4-To Go Back";
							cout<<"\nEnter Your Choice: ";
							cin>>option;
							clrscr();
							switch(option)
							{
								case 1: for(i=1;i<=totalemployees;i++)
									{
										for(j=1;j<=totalemployees-1;j++)
										{
											if(e1[j].empsalary>e1[j+1].empsalary)
											{
												t=e1[j].empid;
												e1[j].empid=e1[j+1].empid;

												e1[j+1].empid=t;

												s=e1[j].empsalary;
												e1[j].empsalary=e1[j+1].empsalary;
												e1[j+1].empsalary=s;

												strcpy(x,e1[j].empname);
												strcpy(e1[j].empname,e1[j+1].empname);
												strcpy(e1[j+1].empname,x);
											}

										}
									}
									cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO SALARY*****"<<endl;
									cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
									for(i=1;i<=totalemployees;i++)
									{
										e1[i].displaydetails();
									}
									cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
									getch();
									goto bck;

								case 2: for(i=1;i<=totalemployees;i++)
									{
										for(j=1;j<=totalemployees-1;j++)
										{
											if(e1[j].empid>e1[j+1].empid)
											{
												t=e1[j].empid;
												e1[j].empid=e1[j+1].empid;
												e1[j+1].empid=t;

												s=e1[j].empsalary;
												e1[j].empsalary=e1[j+1].empsalary;
												e1[j+1].empsalary=s;

												strcpy(x,e1[j].empname);
												strcpy(e1[j].empname,e1[j+1].empname);
												strcpy(e1[j+1].empname,x);
											}

										}
									}

									cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO ID*****"<<endl;
									cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
									for(i=1;i<=totalemployees;i++)
									{
										e1[i].displaydetails();
									}
									cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
									getch();
									goto bck;

								case 3: for(i=1;i<=totalemployees;i++)
									{
										for(j=1;j<=totalemployees-1;j++)
										{
											if(strcmp(e1[j].empname,e1[j+1].empname)>0)
											{
												t=e1[j].empid;
												e1[j].empid=e1[j+1].empid;
												e1[j+1].empid=t;

												s=e1[j].empsalary;
												e1[j].empsalary=e1[j+1].empsalary;
												e1[j+1].empsalary=s;

												strcpy(x,e1[j].empname);
												strcpy(e1[j].empname,e1[j+1].empname);
												strcpy(e1[j+1].empname,x);
											}
										}
									}

									cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO NAME*****"<<endl;
									cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
									for(i=1;i<=totalemployees;i++)
									{
										e1[i].displaydetails();
									}
									cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
									getch();
									goto bck;

								case 4: goto bck;
							}
							break;

						case 2: cout<<"\n---------SORT BY:---------";
							cout<<"\n1-Sort By Salary";
							cout<<"\n2-Sort By Id";
							cout<<"\n3-Sort By Name";
							cout<<"\n4-Go Back";
							cout<<"\nEnter Your Choice: ";
							cin>>option;
							clrscr();
							switch(option)
							{

							  case 1:for(i=1;i<=totalemployees;i++)
								{
									for(j=1;j<=totalemployees-1;j++)
									{
										if(e1[j].empsalary<e1[j+1].empsalary)
										{
											t=e1[j+1].empid;
											e1[j+1].empid=e1[j].empid;
											e1[j].empid=t;

											s=e1[j+1].empsalary;
											e1[j+1].empsalary=e1[j].empsalary;
											e1[j].empsalary=s;

											strcpy(x,e1[j+1].empname);
											strcpy(e1[j+1].empname,e1[j].empname);
											strcpy(e1[j].empname,x);
										}

									}
								}

								cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO SALARY*****"<<endl;
								cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
								for(i=1;i<=totalemployees;i++)
								{
									e1[i].displaydetails();
								}
								cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
								getch();
								goto bck;

							  case 2:for(i=1;i<=totalemployees;i++)
								{
									for(j=1;j<=totalemployees-1;j++)
									{
										if(e1[j].empid<e1[j+1].empid)
										{
											t=e1[j+1].empid;
											e1[j+1].empid=e1[j].empid;
											e1[j].empid=t;

											s=e1[j+1].empsalary;
											e1[j+1].empsalary=e1[j].empsalary;
											e1[j].empsalary=s;

											strcpy(x,e1[j+1].empname);
											strcpy(e1[j+1].empname,e1[j].empname);
											strcpy(e1[j].empname,x);
										}

									}
								}

								cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO ID*****"<<endl;
								cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
								for(i=1;i<=totalemployees;i++)
								{
									e1[i].displaydetails();
								}
								cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
								getch();
								goto bck;

							  case 3: for(i=1;i<=totalemployees;i++)
									{
										for(j=1;j<=totalemployees-1;j++)
										{
											if(e1[j+1].empname,e1[j].empname<0)
											{
												t=e1[j+1].empid;
												e1[j+1].empid=e1[j].empid;
												e1[j].empid=t;

												s=e1[j+1].empsalary;
												e1[j+1].empsalary=e1[j].empsalary;
												e1[j].empsalary=s;

												strcpy(x,e1[j+1].empname);
												strcpy(e1[j+1].empname,e1[j].empname);
												strcpy(e1[j].empname,x);
											}
										}
									 }

								cout<<"\n\n\t*****DATA OF EMPLOYEES SORTED ACCORDING TO NAME*****"<<endl;
								cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
								for(i=1;i<=totalemployees;i++)
								{
									e1[i].displaydetails();
								}
								cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
								getch();
								goto bck;

							  case 4: goto bck;

							}
							break;

						case 3: goto abc;
					 } //end sort
					 break;

				 case 4: clrscr();
					 cout<<"\n\t\t*****START SEARCH*****\n";
					 cout<<"\nEnter Id To Search: ";
					 cin>>searchid;
					 cout<<"\n\t\tSEARCHING";
					 for(i=1;i<6;i++)
					 {
						delay(1000);
						cout<<".";
					 }
					 delay(2000);
					 clrscr();
					 cout<<"\n\t\t*****YOUR SEARCHED DATA*****";
					 cout<<"\n\n\tEmployee ID\t\tEmployee Name\t\tEmployee Salary\n";
					 for(i=1;i<=totalemployees;i++)
					 {
						if(searchid==e1[i].empid)
						{
							e1[i].displaydetails();
						}
					 }
					 cout<<"\n\n\nPRESS ANY KEY TO CONTINUE: ";
					 getch();
					 goto abc;

				case 5: goto START;
			}    //end display
			break;

		case 3: clrscr();
			 int gd=DETECT,gm;
			 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			 //head
			 setcolor(BROWN);
			 ellipse(320,95,360,0,25,20);
			 setcolor(BLACK);
			 line(298,85,341,85);
			 setcolor(WHITE);
			 circle(310,90,2);
			 circle(330,90,2);
			 setcolor(RED);
			 arc(320,100,200,-20,10);
			 //neck
			 setcolor(BROWN);
			 line(313,115,313,125);
			 line(328,115,328,125);
			 //centre
			 setcolor(BLUE);
			 arc(320,225,72,107,100);
			 line(290,129,290,200);
			 line(350,129,350,200);
			 line(290,193,350,193);
			 line(290,200,350,200);
			 //legs
			 setcolor(RED);
			 line(290,200,285,280);
			 line(320,225,305,280);
			 line(322,225,335,280);
			 line(350,200,355,280);
			 //right hand
			 setcolor(YELLOW);
			 line(290,129,255,165);
			 line(255,165,290,200);
			 line(290,149,275,165);
			 line(275,165,290,182);
			 //left hand
			 line(350,129,385,165);
			 line(385,165,350,200);
			 line(350,149,365,165);
			 line(365,165,350,182);
			 //shoes
			 setcolor(DARKGRAY);
			 line(285,280,275,287);
			 line(275,287,305,287);
			 line(305,280,305,287);
			 line(335,280,335,287);
			 line(335,287,365,287);
			 line(335,280,365,287);
			 //name
			 setcolor(CYAN);
			 settextstyle(4,HORIZ_DIR,8);
			 outtextxy(170,300,"Good Bye");
			delay(3000);
			exit(0);
			break;

		default: cout<<"\n\t\t\"INVALID CHOICE\" ";
			 sound(500);
			 delay(100);
			 nosound();
			 getch();
			 goto START;

	}//end switch
	getch();
	goto START;

}