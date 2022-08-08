//Program to implement college placement database
#include<fstream.h>
#include<stdio.h>
#include<string.h>      //Using appropriate header file
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
char cont;
class dob              //Implementing Nesting of classes
{
	public:
	int dd;
	int mm;
	int yy;
};
class address
{
	public:
	char city[30];
	int hno;
	char street[30];
	char state[30];
};
class Stud
{
	public:
	char name[20];
	int age;
	double salpack;
	char rno[5];
	char comp[20];
	char qual[25];
	char loc[20];
	dob  d	;

	char email[30];
	char pno[10];
	address A;

	void Show(int);
	void Read();
	char* getrno();
	void mod();
	int getage();
	char* getcompname();
	char* getloc();


};
char* Stud::getloc()       //Defining appropriate functions to return values
{
	return(loc);
}
int Stud::getage()
{
	return(age);
}
char* Stud::getcompname()
{
	return(comp);
}
char* Stud::getrno()
{
	return(rno);
}
void Stud::mod()           //Defining function for modulation of records
{
	char *name2;
	cout<<"\n Please enter the following details of the candidate ";
	cout<<"\n Name: (press '.' to retain)";
	gets(name2);
	if((strcmp(name2,".")))
		strcpy(name2,name);
	long int a1,b1,c1;
	goodname91 :
	cout<<"\n Year of Birth:";
	cin>>a1;
	if((a1==1996)||(a1==1992))
	{
		d.yy=a1;
		goodname11 :
		cout<<"\n Month of Birth: ";
		cin>>b1;
		switch(b1)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			d.mm=b1;
			goodname21 :
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=31))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname21;
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			d.mm=b1;
			goodname31 :
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=30))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname31;
			}
			break;
			case 2:
			d.mm=b1;
			goodname41 :
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=29))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname41 ;
			}
			break;
			default:
			cout<<"\n Invalid entry , Please enter a correct choice of month ";
			goto goodname11 ;
		}
	}
	else if((a1<=1998)&&(a1>=1991)&&(a1!=1992)&&(a1!=1996))
	{
		d.yy=a1;
		goodname51 :
		cout<<"\n Month of Birth: ";
		cin>>b1;
		switch(b1)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			d.mm=b1;
			goodname61 :
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=31))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname61;
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			d.mm=b1;
			goodname71 :
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=30))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname71;
			}
			break;
			case 2:
			d.mm=b1;
			goodname81:
			cout<<"\n Date of Birth: ";
			cin>>c1;
			if((c1>=1)&&(c1<=28))
			d.dd=c1;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname81 ;
			}
			break;
			default:
			cout<<"\n Invalid entry , Please enter a correct choice of month ";
			goto goodname51 ;
		}
	}
	else
	{
	cout<<"\n Inavlid year choice, Please enter a choice according to age limits of IIT ";
	goto goodname91;
	}
	cout<<"\n Roll Number:";
	goodname101:
	cin>>rno;

	for(int i=0;rno[i]!='\0';i++)
	{
		if(!(isdigit(rno[i])))
		{
			cout<<"\nPls enter a valid rno";
			goto goodname101;
		}
	}

	goodname11a:
	cout<<"\n Phone Number:(Please enter a 10 digit numeric) ";

	for(int aa=0;aa<10;aa++)
	{
		cin>>pno[aa];
		if(!isalnum(pno[aa]))
		{
			cout<<"\n Please enter appropriate details";
			goto goodname11a;
		}
		else if(isalpha(pno[aa]))
		{
			cout<<"\n Please enter appropriate details";
			goto goodname11a;
		}
	}


	cout<<"\n Company: ";
	gets(comp);

	usererror1:
	cout<<"\n Branch: ";
	gets(loc);

	int length1=strlen(loc);
	for(int q1=0;q1<length1;q1++)
	{
		if(!isalpha(loc[q1]))

			{cout<<"\n invalid , please enter the appropriate details\n";
			goto usererror1;}
	}
	cout<<"\n Qualifications: ";
	gets(qual);
	cout<<"\n Email Address: ";
	gets(email);

	cout<<"\n Address:-"<<"\n House No: ";
	cin>>A.hno;
	usererror2:
	cout<<"\n Landmark: ";
	gets(A.street);

	int length2=strlen(A.street);
	for(int q2=0;q2<length2;q2++)
	{
		if(!isalpha(A.street[q2]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror2;}
	}
	usererror3:
	cout<<"\n City: ";
	gets(A.city);
	int length3=strlen(A.city);
	for(int q3=0;q3<length3;q3++)
	{
		if(!isalpha(A.city[q3]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror3;}
	}
	usererror4:
	cout<<"\n State: ";
	gets(A.state);
	int length4=strlen(A.state);
	for(int q4=0;q4<length4;q4++)
	{
		if(!isalpha(A.state[q4]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror4;}
	}
	usererror5:
	cout<<"\n Salary(Annual) in Rs ";
	cin>>salpack;

	if(salpack<0||isalpha(salpack))
	{
		cout<<"\nKindly enter an appropriate value.\n";
		goto usererror5;
	}


}


void Stud::Read()
{
	cout<<"\n Please enter the following details of the candidate ";

	usererror:
	cout<<"\n Name: ";
	gets(name);
		int length=strlen(name);
	for(int q=0;q<length;q++)
	{
		if(!isalpha(name[q]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror;}

	}
	long int a,b,c;
	goodname9 :
	cout<<"\n Year of Birth: ";
	cin>>a;
	if((a==1996)||(a==1992))
	{
		d.yy=a;
		goodname1 :
		cout<<"\n Month of Birth: ";
		cin>>b;
		switch(b)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			d.mm=b;
			goodname2 :
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=31))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname2;
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			d.mm=b;
			goodname3 :
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=30))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname3;
			}
			break;
			case 2:
			d.mm=b;
			goodname4 :
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=29))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname4 ;
			}
			break;
      default:
			cout<<"\n Invalid entry , Please enter a correct choice of month ";
			goto goodname1 ;
		}
	}
	else if((a<=1998)&&(a>=1991)&&(a!=1992)&&(a!=1996))
	{
		d.yy=a;
		goodname5 :
		cout<<"\n Month of Birth: ";
		cin>>b;
		switch(b)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			d.mm=b;
			goodname6 :
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=31))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname6;
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			d.mm=b;
			goodname7 :
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=30))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname7;
			}
			break;
			case 2:
			d.mm=b;
			goodname8:
			cout<<"\n Date of Birth: ";
			cin>>c;
			if((c>=1)&&(c<=28))
			d.dd=c;
			else
			{
				cout<<"\n Invaid entry , Please enter a correct date with respect to month ";
				goto goodname8 ;
			}
			break;
			default:
			cout<<"\n Invalid entry , Please enter a correct choice of month ";
			goto goodname5 ;
		}
	}
	else
	{
	cout<<"\n Inavlid year choice, Please enter a choice according to age limits of IIT ";
	goto goodname9;
	}
	cout<<"\n Roll Number: ";
	goodname10:
	cin>>rno;

	for(int i=0;rno[i]!='\0';i++)
	{
		if(!(isdigit(rno[i])))
		{
			cout<<"\nPls enter a valid rno";
			goto goodname10;
		}
	}

	cout<<"\n Company: ";
	gets(comp);

	usererror1:
	cout<<"\n Branch: ";
	gets(loc);

	int length1=strlen(loc);
	for(int q1=0;q1<length1;q1++)
	{
		if(!isalpha(loc[q1]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror1;}
	}
	cout<<"\n Qualifications: ";
	gets(qual);
	cout<<"\n Email Address: ";
	gets(email);

	goodname11:
	cout<<"\n Phone Number: (Please enter a 10 digit numeric) ";
	for(int aaa=0;aaa<10;aaa++)
	{
		cin>>pno[aaa];
		if(!isalnum(pno[aaa]))
		{
			cout<<"\n Please enter appropriate details";
			goto goodname11;
		}
		else if(isalpha(pno[aaa]))
		{
			cout<<"\n Please enter appropriate details";
			goto goodname11;
		}
	}



	cout<<"\n Address:-"<<"\n House No: ";
	cin>>A.hno;
	usererror2:
	cout<<"\n Landmark: ";
	gets(A.street);

	int length2=strlen(A.street);
	for(int q2=0;q2<length2;q2++)
	{
		if(!isalpha(A.street[q2]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror2;}
	}
	usererror3:
	cout<<"\n City: ";
	gets(A.city);
	int length3=strlen(A.city);
	for(int q3=0;q3<length3;q3++)
	{
		if(!isalpha(A.city[q3]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror3;}
	}
	usererror4:
	cout<<"\n State: ";
	gets(A.state);
	int length4=strlen(A.state);
	for(int q4=0;q4<length4;q4++)
	{
		if(!isalpha(A.state[q4]))

			{cout<<"\n Invalid , please enter the appropriate details\n";
			goto usererror4;}
	}
	usererror5:
	cout<<"\n Salary(Annual) in Rs ";
	cin>>salpack;

	if(salpack<0||isalpha(salpack))
	{
		cout<<"\nKindly enter an appropriate value.\n";
		goto usererror5;
	}


}
void Stud::Show(int func)
{
	cout<<"\n Name: "<<name<<"\n Roll number:"<<rno<<" \n OTHER DETAILS: ";
	cout<<" \n DD//MM//YY(of birth): "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	cout<<"\n Company: "<<comp;
	cout<<"\n Branch: "<<loc;
	cout<<"\n Qualifications: "<<qual;
	cout<<"\n Email-Id: "<<email;
	cout<<"\n Phone Number: (with location) "<< pno;
	cout<<"\n \n Address: "<<"\n HOUSE NO: "<<A.hno
	<<"\n Landmark: "<<A.street
	<<"\n City: "<<A.city
	<<"\n State: "<<A.state
	<<"\n Salary Package:"<<salpack ;
	if(func==0)
		cout<<"\n Your data has been added in the placements record ";
	else if(func==5)
		cout<<".";
	else
		cout<<"\n These are the records of "<<name;
}



void main()
{
	clrscr();
	char ch;
	Stud S[10];
int a;
	char roll[5];
	do
	{
		ofstream fout("PLACE.dat",ios::binary);
		strcpy(S[0].name,"Adaa Bhardwaj");
		S[0].age =25;
		strcpy(S[0].rno,"1");
		S[0].salpack=2000000;
		strcpy(S[0].comp ,"Apple");
		strcpy(S[0].qual ,"B.Tech");
		strcpy(S[0].loc ,"Cupertino, California");
		strcpy(S[0].email,"ab.rox02@rediffmail.com");
		strcpy(S[0].pno,"9650644677");
		S[0].d.dd=30 ;
		S[0].d.mm=4;
		S[0].d.yy=1994;
		S[0].A.hno=408;
		strcpy(S[0].A.street,"Green Avenue");
		strcpy(S[0].A.state,"California");
		strcpy(S[0].A.city,"Cupertino");

		strcpy(S[2].name,"Manan Chathli");
		S[2].age =25;
		strcpy(S[2].rno,"3");
		S[2].salpack=1500000;
		strcpy(S[2].comp ,"Infosys");
		strcpy(S[2].qual ,"B.Tech");
		strcpy(S[2].loc ,"Bangalore");
		strcpy(S[2].email,"manan@rediffmail.com");
		strcpy(S[2].pno,"9650644678") ;
		S[2].d.dd=30 ;
		S[2].d.mm=5;
		S[2].d.yy=1994;
		S[2].A.hno=409;
		strcpy(S[2].A.street,"Inox Digmedia");
		strcpy(S[2].A.state,"Karnataka");
		strcpy(S[2].A.city,"Bangalore");

		strcpy(S[3].name,"Ansh Aggarwal");
		S[3].age =25;
		strcpy(S[3].rno,"4");
		S[3].salpack=20000;
		strcpy(S[3].comp ,"FIITJEE");
		strcpy(S[3].qual ,"B.Tech");
		strcpy(S[3].loc ,"Kalusarai");
		strcpy(S[3].email,"ansh@rediffmail.com");
		strcpy(S[3].pno,"9650644679") ;
		S[3].d.dd=30 ;
		S[3].d.mm=7;
		S[3].d.yy=1994;
		S[3].A.hno=410;
		strcpy(S[3].A.street,"Shipra Mall");
		strcpy(S[3].A.state,"UP");
		strcpy(S[3].A.city,"Ghaziabad");

		strcpy(S[1].name,"Naman Sharma");
		S[1].age =25;
		strcpy(S[1].rno,"2");
		S[1].salpack=10000;
		strcpy(S[1].comp ,"Vidyamandir");
		strcpy(S[1].qual ,"B.Tech");
		strcpy(S[1].loc ,"Anand Vihar");
		strcpy(S[1].email,"namna@rediffmail.com");
		strcpy(S[1].pno,"9650644680") ;
		S[1].d.dd=30 ;
		S[1].d.mm=10;
		S[1].d.yy=1994;
		S[1].A.hno=420;
		strcpy(S[1].A.street,"Shipra Mall");
		strcpy(S[1].A.state,"UP");
		strcpy(S[1].A.city,"Ghaziabad");

	for(int a1=0;a1<4;a1++)
		fout.write((char*)&S[a1],sizeof(S[a1]));
	fout.close();

	goodname :
	cout<<" ************** Welcome to the IITB's Placement Database ************* ";
	cout<<"\n \n Kinldy select from the given Menu: ";
	cout<<"\n 1) Enter new placement details. ";//adding new information.
	cout<<"\n 2) Scan previous records. "; //to reconfirm existing details
	cout<<"\n 3) Ammend previous records. "; //to modify an existing record
	cout<<"\n 4) Show the details of all placed candidates of a particular company. ";
	cout<<"\n 5) Company-wise statistics";
	cout<<"\n 6) Location-wise statistics";
	cout<<"\n 7) Exit. ";
	cin>>ch;

	switch(ch)
	{
		case'1':
		Stud s1;
		s1.Read();
		s1.Show(0);
		ofstream fout("PLACE.dat", ios::binary|ios::app);
		fout.write((char*)&s1,sizeof(s1));
		fout.close();
		break;

		case'2':
		Stud s2;
		fstream fin("PLACE.dat", ios::binary|ios::in);
		cout<<"\n Please enter the roll no reqd: " ;
		cin>>roll;
		int tester=1;
		while(!fin.eof())
		{

				fin.read((char*)&s2,sizeof(s2));
				char* x= s2.getrno();
				if(strcmp(roll,x)==0)
				{
					s2.Show(2);
					tester=0;
				}


		}
		fin.close();
		if(tester==1)
		cout<<"\nNOT FOUND";
		break;

		case '3':
		Stud s3;
		fstream fi;
		char* rollnum;
		fi.open("PLACE.DAT", ios::binary|ios::in);
		cout<<"enter the roll no reqd:" ;
		cin>>rollnum;
		while(!fi.eof())
		{

			char confirm,test1;
			fi.read((char*)&s3,sizeof(s3));
			int pos=fi.tellg();
			char* ewww=s3.getrno();
			if(strcmp(ewww,rollnum)==0)
			{
				s3.Show(2);
				cout<<"\nPress y to confirm";
				cin>>confirm;
				if(confirm=='y')
				{
				    s3.mod();
				    fi.seekg(pos);
				    fi.write((char*)&s3,sizeof(s3));
				    test1=1;
				    break;
				}
			}
			if(test1!=1)
				cout<<"\nNot found";
			else
			cout<<"\nModified record of desired candidate: \n";s3.Show(2);
		}
		fi.close();
		break;

		case'4':
		Stud s5;
		char*company1,*var;
		fstream f("PLACE.dat", ios::binary|ios::in);
		cout<<"\n Please enter the name of the company: " ;
		gets(company1);
		int tester2=1;
		while(!f.eof())
		{

				f.read((char*)&s5,sizeof(s5));
				strcpy(var,s5.getcompname());
				if((strcmpi(company1,var))==0)
				{
					s5.Show(1);
					tester2=0;
				}


		}
		f.close();
		if(tester2==1)
		cout<<"\nNOT FOUND";
		break;

		case '5':
		Stud s6;
		char *comp3,*var1;
		int cnt=0,sum=0;
		fstream f2("PLACE.dat",ios::binary|ios::in);
		cout<<"\nEnter the company whose stats are reqd.\n";
		gets(comp3);
		while(!f2.eof())
		{
		    f2.read((char*)&s6,sizeof(s6));
		    strcpy(var1,s6.getcompname());
		    if((strcmpi(var1,comp3))==0)
		    {
			cnt++;
			sum+=s6.getage();
		    }
		}

		cout<<"\nThe number of candidates placed in "<<comp3<<" = " <<cnt;
		cout<<"\nThe average age of candidates selected="<<(sum/cnt);
			f2.close();
		break;
		case '6':
		Stud s7;
		char *loc3,*var2;
		int cnt1=0,sum1=0;
		fstream f3("PLACE.dat",ios::binary|ios::in);
		cout<<"\nEnter the location whose stats are reqd.\n";
		gets(loc3);
		while(!f3.eof())
		{
		    f3.read((char*)&s7,sizeof(s7));
		    strcpy(var2,s7.getloc());
		    if((strcmpi(var2,loc3))==0)
		    {
			cnt1++;
			sum1+=s7.getage();
		    }
		}

		cout<<"\nThe number of candidates placed in "<<loc3<<" = " <<cnt1;
		cout<<"\nThe average age of candidates selected="<<(sum1/cnt1);
			f3.close();
		break;

		case'7':
		char ch1;
		cout<<"\n Are you sure you want to exit the program ? Press Y for yes and N for no ";
		jump_exit:
		cin>>ch1;
		if((ch1=='y')||(ch1=='Y'))
		exit(0);
		if((ch1=='n')||(ch1=='N'))
		{
			cout<<"\n Welcome Back!! \n" ;
			goto goodname;
		}
		else
		{
			cout<<"\n Invalid Entry!  Enter Y for yes and N for no ";
			goto jump_exit;
		}

		default:
		cout<<"\n Please enter a valid choice \n ";
		goto goodname;


       }
       cout<<"\nPress y to continue\n";
       cin>>cont;
       }
       while(cont=='y');
       cout<<"thanks ;')";
       getch();
}
