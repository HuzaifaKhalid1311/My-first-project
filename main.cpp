#include<stdio.h>       //Header section
#include<conio.h>
#include<math.h>
#include<string.h>

char cond4,cond1,cond2,cond5,cond7[3],cond8,ch,cond9,repeat[3]={'1','1','1'},start,name[15],cond10[20],cond11,cond12,cond13[6],cha,cond14[20],pin[4],m[10],e[10],t[10],cond20[5],cond21[5],mo[5],sad[7],repeat1='1',repeat2='1',rep_1,rep_2[3];      //Variable declaration & initialization
float computer,math,physics,chemistry,pk_st,islamiyat,english,urdu, obt, total, percent=-1.1,operate[2];
int table,limit,ASCII,loops,fact=1,num,loop,num1,num2,a,b,count=0,ai=0,w=1,anger,happy;

void error(int er)        //For printing error
{
    if(er==0)
    {
        printf("\n\n\aThe input you provided is not correct.\n\n");
    }

    else if(er==1)
    {
        printf("\n\n\aThe input you provided is not correct. Restarting the program.\n\n");
    }
}

void intro()
{
    getch();        //Introduction
    printf("H");
    getch();
    printf("E");
    getch();
    printf("L");
    getch();
    printf("L");
    getch();
    printf("O");
    getch();
    printf("\t!");
    getch();
    printf("\n\n(This application is made by Huzaifa Khalid from 10th-A with the help of his class fellow Zain Mansoor)");       //Credits
    printf("\n\n=================================================\n\n");        //Seperation line
}

void main()     //Main section
{
    intro();
    while(repeat[0]=='1')
    {
        printf("Welcome ! Please select one of the following apps =\n\n");
        printf("- To open Calculax, press \"1\" or \"a\"\n");
        printf("- To open AIVA (artificial intelligence virtual assistant), press \"2\" or \"b\"\n");
        printf("- For Credits & Info, press \"3\" or \"c\"\n");
        printf("- To reveal the source code, press \"4\" or \"d\"\n");
        printf("- To show reviews and ratings, press \"5\" or \"e\"");
        printf("\n\n> ");
        cond11=getche();
        printf("\n_________________________________________________\n\n");      //Seperation line

        if(cond11=='1' || cond11=='a' || cond11=='A')       //Calculation functions
        {
            printf("Choose one of the following options =\n\n");
            printf("- Start\t(\"1\" or \"a\")\n");
            printf("- Help \t(\"2\" or \"b\")\n");
            printf("\n_________________________________________________\n\n");      //Seperation line
            printf("> ");
            start=getche();
            printf("\n\n");

            if(start=='1' || start=='a' || start=='A')      //To start
            {
                while (repeat1=='1')
                {
                printf("\nChoose one of the following apps =\n\n");       //Option for choosing app
                printf("- Percentage calculator \t(\"1\" / \"a\")\n");
                printf("- Table and factorial finder \t (\"2\" / \"b\")\n");
                printf("- Character-ASCII converter \t (\"3\" / \"c\")\n");
                printf("- Arithmetic operators \t (\"4\" / \"d\")\n");
                printf("\n_________________________________________________\n\n");      //Seperation line
                printf("> ");
                cond4=getche();
                printf("\n");

                if(cond4=='1' || cond4=='a' || cond4 =='A')      //To open percentage calculator
                {
                    printf("\nWelcome to percentage calculator. Please choose one of the following options :\n");
                    printf("(Warning : If wrong data is entered, the program may behave irresponsive or even shutdown)");       //Sub-apps of percentage calculator
                    printf("\n\n- Enter the marks of each subject seperately \t (\"1\" / \"a\")");
                    printf("\n- Enter the total marks directly \t (\"2\" / \"b\")\n");
                    printf("\n_________________________________________________\n\n");      //Seperation line
                    printf("> ");
                    cond1=getche();
                    printf("\n");

                    if (cond1 == '1' ||cond1=='a' || cond1=='A')       //To enter marks seperately
                    {
                        printf("\nPlease enter the marks of the following subjects:\n");
                        printf("\n- Computer = ");
                        scanf("%f", &computer);
                        printf("- Mathematics = ");
                        scanf("%f", &math);
                        printf("- Physics = ");
                        scanf("%f", &physics);
                        printf("- Chemistry = ");
                        scanf("%f", &chemistry);
                        printf("- Pakistan Studies = ");
                        scanf("%f", &pk_st);
                        printf("- Islamiyat = ");
                        scanf("%f", &islamiyat);
                        printf("- English = ");
                        scanf("%f", &english);
                        printf("- Urdu = ");
                        scanf("%f", &urdu);
                        printf("\nEnter the total marks = ");
                        scanf("%f", &total);
                        obt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;
                        percent = (obt / total) * 100;

                        if(percent>100 || percent<0)        //If percentage is wrong
                        {
                            printf("\n_________________________________________________\n\n");
                            printf("\aThe information you provided is not correct as the obtained numbers are greater than the total numbers.\nPlease select one of the following options :\n");     //Seperation line
                            printf("\n- Change the marks of each subject\t (\"1\" / \"a\")");     //Available choices
                            printf("\n- Change the total marks \t (\"2\" / \"b\")");
                            printf("\n- Get the percentage anyway\t (\"3\" / \"c\")\n");
                            printf("\n_________________________________________________\n\n");      //Seperation line
                            printf("> ");
                            cond2=getche();
                            printf("\n");

                            if(cond2=='1' || cond1=='a' || cond1=='A')      //To change the marks of each subject seperately
                            {
                                printf("\nPlease enter the marks of the following subjects again:\n");     //To change the marks of each subject
                                printf("\n- Computer = ");
                                scanf("%f", &computer);
                                printf("- Mathematics = ");
                                scanf("%f", &math);
                                printf("- Physics = ");
                                scanf("%f", &physics);
                                printf("- Chemistry = ");
                                scanf("%f", &chemistry);
                                printf("- Pakistan Studies = ");
                                scanf("%f", &pk_st);
                                printf("- Islamiyat = ");
                                scanf("%f", &islamiyat);
                                printf("- English = ");
                                scanf("%f", &english);
                                printf("- Urdu = ");
                                scanf("%f", &urdu);
                                obt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;
                                percent = (obt / total) * 100;
                                printf("\nThankyou for the information, your percentage is = %.2f %%", percent);
                                printf("\n");
                                getch();
                            }

                            else if(cond2=='2' || cond1=='b' || cond1=='B')     //To change the total marks
                            {
                                printf("\nEnter the total marks again = ");        //To enter the total marks
                                scanf("%f", &total);
                                obt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;
                                percent = (obt / total) *100;
                                printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);
                                getch();
                            }

                            else if(cond2=='3' || cond2=='c' || cond2=='C')     //To get the percentage anyways
                            {
                                printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);      //Seperation line
                                getch();
                            }

                            else            //If wrong input is entered
                            {
                                error(0);
                                getch();
                            }
                        }

                        else        //If wrong input is entered
                        {
                            printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);
                            getch();
                        }
                    }

                    else if (cond1 == '2' || cond1=='b' || cond1=='B')      //To enter total marks directly
                    {
                        printf("\nPlease enter the obtained marks = ");
                        scanf("%f",&obt);
                        printf("\nNow enter the total marks = ");
                        scanf("%f",&total);
                        percent = (obt / total) * 100;

                        if(percent>100 || percent<0)        //If the percentage is wrong
                        {
                            printf("\n_________________________________________________\n\n");
                            printf("\aThe information you provided is not correct as the obtained numbers are greater than the total numbers.\nPlease select one of the following options :\n");     //Seperation line
                            printf("\n- Change the obtained marks \t (\"1\" / \"a\")");        //Available options
                            printf("\n- Change the total marks \t (\"2\" / \"b\")\n");
                            printf("- Get the percentage anyway \t (\"3\" / \"c\")\n");
                            printf("\n_________________________________________________\n\n");      //Seperation line
                            printf("> ");
                            cond2=getche();
                            printf("\n");

                            if(cond2=='1' || cond1=='a' || cond1=='A')      //To change the obtained marks
                            {
                                printf("\nEnter the obtained marks again = ");        //To change obtained marks
                                scanf("%f", &obt);
                                percent = (obt / total) * 100;
                                printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);
                                getch();
                            }

                            else if(cond2=='2' || cond1=='b' || cond1=='B')     //To change the total marks
                            {
                                printf("\nEnter the total marks again  = ");
                                scanf("%f", &total);
                                percent = (obt / total) * 100;
                                printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);
                                getch();
                            }

                            else if(cond2=='3' || cond1=='c' || cond1=='C')     //To display percentage
                            {
                                printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);      //Seperation line
                                getch();
                            }

                            else        //If wrong input is entered
                            {
                                error(0);
                                getch();
                            }
                        }

                        else        //If wrong input is entered
                        {
                            printf("\nThankyou for the information, your percentage is = %.2f %%\n\n", percent);
                            getch();
                        }

                    }

                    else        //If wrong input is given
                    {
                        error(0);
                        getch();
                    }

                }

                else if (cond4=='2' || cond4=='b' || cond4 =='B')        //To open table-factorial finder
                {
                    printf("\n\nWelcome to table calculator. Choose one of the following programs \n");
                    printf("\n- Find the table of a number \t (\"1\" / \"a\")\n- Find the factorial of a number \t (\"2\" / \"b\")");
                    printf("\n\n_________________________________________________");      //Seperation line
                    printf("\n\n> ");
                    cond8=getche();
                    printf("\n");

                    if(cond8=='1' || cond8=='a' || cond8=='A')      //To open table finder
                    {
                        printf("\nEnter the number to display its table = ");
                        scanf("%d",&table);
                        printf("\nEnter the limit of the table = ");
                        scanf("%d",&limit);
                        printf("\n");

                        for(int i=1;i<=limit;i++)       //Loop to print the table
                        {
                            printf("%d  X  %d  =  %d\n",table,i,table*i);
                        }
                        printf("\n ");
                        getch();
                    }

                    else if(cond8=='2' || cond8=='b' || cond8=='B')     //To open factorial finder
                    {
                        printf("\nEnter a number to display its factorial = ");
                        scanf("%d",&num);

                        for(loop=1;loop<=num;loop++)        //Loop to find factorial
                        {
                            fact=fact*loop;
                        }

                        if(num<=0)      //If negative number is entered
                        {
                            printf("\nThe number you entered is not correct. Please enter a positive number\n\n");
                        }

                        else        //To find factorial
                        {
                            printf("\nThe factorial of %d is = %d\n\n",num,fact);
                            getch();
                        }
                    }

                    else        //If wrong input is given
                    {
                        error(0);
                        getch();
                    }
                }

                else if(cond4=='3'|| cond4=='c' || cond4 =='C')     //To ASCII-character converter
                {
                    printf("\nWelcome to ASCII-character converter.\n\n- Convert character to ASCII \t (\"1\" / \"a\")");
                    printf("\n- Convert ASCII to character \t (\"2\" / \"b\")\n");
                    printf("\n_________________________________________________\n\n");      //Seperation line
                    printf("> ");
                    cond5=getche();
                    printf("\n\n");

                    if(cond5=='1'  || cond5=='a' || cond5=='A')      //To convert from character to ASCII
                    {
                        printf("Enter a single character to get its ASCII code \n(If multiple characters are entered, the ASCII code of only the first character will be shown) = ");
                        scanf("%c",&cha);
                        printf("\nThe ASCII code of %c is = \"%d\"\n\n",cha,cha);
                        getch();
                    }

                    else if(cond5=='2' || cond5=='b' || cond5=='B')         //To convert from ASCII to character
                    {
                        printf("Enter the ASCII code = ");
                        scanf("%d",&ASCII);

                        if (ASCII<48 || ASCII>122)      //If wrong ASCII is given
                        {
                            printf("\nThe ASCII code you entered is not correct. Please enter an ASCII code between 48 and 122.\n\n");
                            getch();
                        }

                        else        //If wrong input is entered
                        {
                            printf("\n\aThe character of this ASCII code is = \"%c\"\n\n",ASCII);     //If ASCII is right
                            getch();
                        }
                    }

                    else        //If wrong input is given
                    {
                        error(0);
                        getch();
                    }
                }

                else if(cond4=='4'|| cond4=='d' || cond4 =='D')     //To use arithmetic operator
                {
                    printf("\nSelect one of the following operation :");      //available options
                    printf("\n\n- Addition \t (\"1\" / \"a\")");
                    printf("\n- Subtraction \t (\"2\" / \"b\")");
                    printf("\n- Multipliction  (\"3\" / \"c\")");
                    printf("\n- Division \t (\"4\" / \"d\")");
                    printf("\n- Modulus \t (\"5\" / \"e\")");
                    printf("\n- Power \t (\"6\" / \"f\")");
                    printf("\n- Square root \t (\"7\" / \"g\")");
                    printf("\n_________________________________________________\n\n");      //Seperation line
                    printf("> ");
                    cond9=getche();
                    printf("\n\n");

                    if(cond9=='1' || cond9=='a' || cond9=='A')      //For addition
                    {
                        printf("Welcome to addition. \n\nEnter first number = ");
                        scanf("%f",&operate[0]);
                        printf("\nEnter second number = ");
                        scanf("%f",&operate[1]);
                        printf("\n%.2f + %.2f = %.2f\n\n",operate[0],operate[1],operate[0]+operate[1]);
                        getch();
                    }

                    else if(cond9=='2' || cond9=='b' || cond9=='B')     //For subtraction
                    {
                        printf("Welcome to subtraction. \n\nEnter a number = ");
                        scanf("%f",&operate[0]);
                        printf("\nEnter the number to be subtracted = ");
                        scanf("%f",&operate[1]);
                        printf("\n%.2f - %.2f = %.2f\n\n",operate[0],operate[1],operate[0]-operate[1]);
                        getch();
                    }

                    else if(cond9=='3' || cond9=='c' || cond9=='C')     //For multiplication
                    {
                        printf("Welcome to multiplication. \n\nEnter first number = ");
                        scanf("%f",&operate[0]);
                        printf("\nEnter second number = ");
                        scanf("%f",&operate[1]);
                        printf("\n%.2f X %.2f = %.2f\n\n",operate[0],operate[1],operate[0]*operate[1]);
                        getch();
                    }

                    else if(cond9=='4' || cond9=='d' || cond9=='D')     //For division
                    {
                        printf("Welcome to division. \n\nEnter a number to be divided = ");
                        scanf("%f",&operate[0]);
                        printf("\nEnter the divider = ");
                        scanf("%f",&operate[1]);
                        printf("\n%.2f / %.2f = %.2f\n\n",operate[0],operate[1],operate[0]/operate[1]);
                        getch();
                    }

                    else if(cond9=='5' || cond9=='e' || cond9=='E')     //For modulus
                    {
                        printf("Welcome to modulus. \n\nEnter a number to be divided = ");
                        scanf("%d",&num1);
                        printf("\nEnter the divider = ");
                        scanf("%d",&num2);
                        printf("\n%d %% %d = %d\n\n",num1,num2,num1%num2);
                        getch();
                    }

                    else if(cond9=='6' || cond9=='f' || cond9=='F')     //For exponent
                    {
                        printf("Welcome to power. \n\nEnter a number = ");
                        scanf("%f",&operate[0]);
                        printf("\nEnter its power = ");
                        scanf("%f",&operate[1]);
                        printf("\n%.2f ^ %.2f = %.2f\n\n",operate[0],operate[1],pow(operate[0],operate[1]));
                        getch();
                    }

                    else if(cond9=='7' || cond9=='g' || cond9=='G')      //For square root
                    {
                        printf("Welcome to square root. \n\nEnter a number = ");
                        scanf("%f",&operate[0]);
                        printf("\n%.2f ^ (1/2) = %.2f\n\n",operate[0],sqrt(operate[0]));
                        getch();
                    }

                    else        //If wrong input is given
                    {
                        error(0);
                        getch();
                    }

                }

                else        //If wrong input is given
                {
                    error(0);
                    getch();
                }
                
                printf("\n\n=================================================");        //Seperation line
                printf("\n\nSelect one of the following options :\n\n- Repeat the repeat Calculax (enter \"y\")\n- Return to home screen (enter any other character)\n\n");        //To repeat or enf the program
                printf("> ");
                rep_1=getche();
                printf("\n\n");
                printf("=================================================\n\n");        //Seperation line

                if(rep_1=='y')       //To end the program
                {
                    system("cls");
                }

                else
                {
                    repeat1='0';
                }
            }
            }

            else if(start=='2' || start=='b' || start=='B')     //For help
            {
                printf("Following are the rules and regulations that must be taken into consideration while using the program :\n\n");
                printf("- To open an app enter the number or alphabet written in braces after a choice\n");
                printf("- If you want to repeat the program, you can do it after ending it\n");
                printf("- You can enter upper or lower case alphabets as you like\n");
                printf("- In case you enter a wrong choice, an error will be given but you can restart it\n");
                printf("- Just press the key of the choice. You don't need to press enter\n");
                printf("- If the percentage is greater than 100 or less than 0, you will be given options to change the input data\n\n");
                getch();
            }

            else        //If wrong input is entered
            {
                error(0);
                getch();
            }
        }
        

        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////

        else if(cond11=='2' || cond11=='b' || cond11=='B')          //To open AIVA
        {
            printf("\nWelcome ! Type \"start\" or \"help\"\n\n> ");
            scanf("%s",cond14);
            printf("\n_________________________________________________\n");      //Seperation line

            if((strcmp(cond14,"Start")==0)||(strcmp(cond14,"start")==0))       //To start
            {
                while(repeat2=='1')
                {
                if(ai==0)       //For inputting name
                {
                    printf("\n\nHello ! I am AIVA ( artificial intelligence powered virtual assistant ). \n\nFirst thing first. Please enter your first name  = ");
                    scanf("%s", name);
                    printf("\n\nSo %s", name);
                    printf(" !");
                    ai=-5;
                }

                else        //For not dispalying name on repeat
                {
                    printf("\n\nWelcome again %s !", name);
                }
                printf("\a\n\nHow are you feeling today?\n\n",name);
                printf("- Happy	  	- Sad\n- Demotivated	- Excited\n- Bored 	- Angry\n- Normal	- Motivated\n- Tired		- Worried\n\n> "); //mood selection
            	scanf("%s",m);
                printf("\n_________________________________________________\n\n");      //Seperation line

                if((strcmp(m,"Happy")==0)||(strcmp(m,"happy")==0))          //happy mood
            	{
            		printf("\nOn a scale of 1-5 how happy are you?\n\n>");
                    scanf("%d",&happy);
                    printf("\n_________________________________________________\n\n");      //Seperation line

                    if (happy==1||happy==2)
	            	{
                		printf("I hope you are more happier in the future : )");
                        getch();
	                }

                    else if(happy==3||happy==4)
                	{
	            		printf("%s always be happy, may Allah give you more. :)\n",name);
                        getch();
                	}

                    else if(happy==5)
	            	{
	            		printf("yayyy super happpy mood!!\n I'm happy to see that!!");
                        getch();
	            	}

                    else
                    {
                        error(0);
                        getch();
                    }
                }

                else if((strcmp(m,"Sad")==0)||(strcmp(m,"sad")==0))         //sad mood
            	{
                	printf("%s don't be sad, worst times last but not forever.\nEverything will be alright soon (inshallah) :)\n\n",name);
                	printf("Do you want to read a short guide on how to gain happiness?\n\n> ");
                	scanf("%s",sad);

            		if((strcmp(sad,"Yes")==0)||(strcmp(sad,"yes")==0))
                	{
                		printf("\nHERE ARE THE 5 STEPS TO BE MORE HAPPIER AND LESS SAD;\n- Be thankful\n- Appreciate small things\n- Trust the process\n- Remove toxic people from social media\n- Stay away from negative people");
                        getch();
	            	}

                	else if((strcmp(sad,"No")==0)||(strcmp(sad,"no")==0))
		            {
	                	printf("\nOkay, no problem");
                        getch();
	                }

                    else
                    {
                        error(0);
                        getch();
                    }
                }

                else if((strcmp(m,"Demotivated")==0)||(strcmp(m,"demotivated")==0))         //demotivated mood
                {
	            	printf("%s I see you are demotivated...\n",name);
	            	printf("Demotivation comes when you are filled with negativity and you have less hopes.\nYou can try changing your demotivation to your motivation. Because its never too late\nStart now and you will succeed!");
                	printf("\nDo you want to read some motivating quotes?\n\n> ");
	                scanf("%s",mo); //quote suggestion
                    printf("\n_________________________________________________\n\n");      //Seperation line

                    if((strcmp(mo,"Yes")==0)||(strcmp(mo,"yes")==0))
	            	{
		        		printf("HERE ARE SOME MOTIVATING QUOTES FOR YOU : \n\n\n");
	        			printf("- FAILURE IS NOT THE OPPOSITE OF SUCCESS, IT IS A PART OF IT\n\n\n");
            			printf("- WORK HARD IN THE SILENCE AND LET THE SUCCESS MAKE THE NOISE\n\n\n");
	                	printf("- IF YOU DON'T SACRIFICE FOR WHAT YOU WANT, WHAT YOU WANT BECOMES THE SACRIFICE\n ");
                        getch();
		            }

                    else if((strcmp(mo,"No")==0)||(strcmp(mo,"no")==0))
	            	{
	            		printf("Okay alright!");
                        getch();
	            	}

                    else
                    {
                        error(0);
                        getch();
                    }
                }

                else if((strcmp(m,"Excited")==0)||(strcmp(m,"excited")==0))         //excited mood
                {
            		printf("%s I see you are excited..\n",name);
            		printf("I'm glad that you are!!");
                    getch();
                }

             	else if((strcmp(m,"Bored")==0)||(strcmp(m,"bored")==0))      //bore mood
            	{
            		printf("%s go try other features of this app, you'll like them \n",name);
                    getch();
               	}

                else if((strcmp(m,"Angry")==0)||(strcmp(m,"angry")==0))         //angry mood
                {
                    printf("On a scale of 1-5 how angry are you?\n\n> ");
                	scanf("%d",&anger);

                    if(anger==1||anger==2)      //anger intensity
    	            {
    	        		printf("\nCalm down, everything will be fine, leave it just ignore");
                        getch();
	            	}

                    else if(anger==3||anger==4)
	                {
		            	printf("\nCalm down don't be angry its not good for your health");
                        getch();
		        	}

                    else if (anger==5)
		            {
	                	printf("\n%s just leave it. you are just destroying your mood by being angry. come onn chill....relax..!!  \n",name);
                        getch();
                    }

                    else        //Wrong input
                	{
            			error(0);
                        getch();
	            	}
                }

                else if((strcmp(m,"Normal")==0)||(strcmp(m,"normal")==0))       //normal mood
            	{
            		printf("Oh okay...   : |\n\n");
                    getch();
            	}

                else if((strcmp(m,"Motivated")==0)||(strcmp(m,"motivated")==0))         //motivated mood
            	{
            		printf("That's good to know!");
                    getch();
            	}

                else if((strcmp(m,"Tired")==0)||(strcmp(m,"tired")==0))         //tired mood
            	{
            		printf("Make sure to take some rest!!");
            	    getch();
                }

                else if((strcmp(m,"Worried")==0)||(strcmp(m,"worried")==0))      //worried mood
            	{
            		printf("Dont worry...everything will be alright (in-sha-Allah)");
            	    getch();
                }

                else        //wrong input
	            {
	        		error(0);
                    getch();
                }

                printf("\n\n=================================================");        //Seperation line
                printf("\n\nType \"Yes\" if you wanna repeat AIVA or type any other word to return to home screen\n\n");        //To repeat or enf the program
                printf("> ");
                scanf("%s",rep_2);
                printf("\n\n");
                printf("=================================================\n\n");        //Seperation line

                if((strcmp(rep_2,"Yes")==0) || (strcmp(rep_2,"yes")==0))       //To end the program
                {
                    system("cls");
                }

                else
                {
                    repeat2='0';
                }

                }
            }

            else if((strcmp(cond14,"Help")==0)||(strcmp(cond14,"help")==0))      //For help
            {
                printf("\n\nFollowing are the rules you should follow while using AIVA =\n\n");
                printf("- In the whole program you can cut the character you added accidentally by using backspace \n");
                printf("- Enter the wording given by AIVA during input\n");
                printf("- You'll have the choice to restart the program\n");
                printf("- You don't have to enter your name everytime on repeat\n\n");
                getch();
            }

            else        //If wrong input is entered
            {
                error(0);
                getch();
            }
        }

        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////

        else if(cond11=='3' || cond11=='c' || cond11=='C')      //For credits
        {
            printf("Introduction :\n\n\tThis program is made by two students in class 10th-A. It's made in C language on Visual Studio Code with a code of more than 800 statements ( Took many months ). Copyrights reserved by no one. No part of this program may be copied, reproduced or used for making notes. In case of any copy or resemblance, we have the right to do nothing. So enjoy and hope you liked it. ; )\n\n");
            printf("Credits :\n\n\t- Huzaifa Khalid = He loves programming and is interested in technology since childhood. He started simple programming in 7th class. The first program he made was the percentage calculator. Now in 10th class he resumed the programming practice. His only hobby is coding in his laptop while he's free\n");
            printf("\n\t- Zain Mansoor = He is a friend of Huzaifa. They became friends on the first day of his school in 7th class. Now is a good programmer and has a great role in this program. He is Hifzing and will become a Hafiz in a few years .His hobby is solving rubik's cube (3x3 cube record is <20 seconds)");
            getch();
        }

        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////

        else if(cond11=='4' || cond11=='d' || cond11=='D')      //For revealing code
        {
            system("cls");
            printf("\nPress any key to type the 4-digit PIN code to access the source code ");
            getch();
            system("cls");
            printf("_ _ _ _");
            pin[0]=getch();
            system("cls");
            printf(". _ _ _");
            pin[1]=getch();
            system("cls");
            printf(". . _ _");
            pin[2]=getch();
            system("cls");
            printf(". . . _");
            pin[3]=getch();
            system("cls");
            printf(". . . .\n\n");

            if((pin[0]== '1' && pin[1]== '3' && pin[2]== '1' && pin[3]== '1') || (pin[0]== 'z' & pin[1]== 'a' && pin[2]== 'i' && pin[3]== 'n'))
            {
                printf("Code unlocked\n\nPress any key to show it (may take some moments to load)\n\n");
                getch();
                //Code to be shown
                printf("#include<stdio.h>       //Header section\n#include<conio.h>\n#include<math.h>\n#include<string.h>\n\nchar cond4,cond1,cond2,cond5,cond7[3],cond8,ch,cond9,repeat[3]={\'1\',\'1\',\'1\'},start,name[15],cond10[20],cond11,cond12,cond13[6],cha,cond14[20],pin[4],m[10],e[10],t[10],cond20[5],cond21[5];      //Variable declaration & initialization\nfloat computer,math,physics,chemistry,pk_st,islamiyat,english,urdu, obt, total, percent=-1.1,operate[2];\nint table,limit,ASCII,loops,fact=1,num,loop,num1,num2,a,b,count=0,ai=0;\nint w=1; //while loop body open\n\nvoid error(int er)        //For printing error\n{\nif(er==0)\n{\nprintf(\"\\n\\n\\aThe input you provided is not correct.\\n\\n\");\n}\n\nelse if(er==1)\n{\nprintf(\"\\n\\n\\aThe input you provided is not correct. Exitting the program.\\n\\n\");\n}\n}\n\nvoid intro()\n{\ngetch();        //Introduction\nprintf(\"H\");\ngetch();\nprintf(\"E\");\ngetch();\nprintf(\"L\");\ngetch();\nprintf(\"L\");\ngetch();\nprintf(\"O\");\ngetch();\nprintf(\"\\t!\");\ngetch();\nprintf(\"\\n\\n(This application is made by Huzaifa Khalid from 10th-A with the help of his class fellow Zain Mansoor)\");       //Credits\nprintf(\"\\n\\n=================================================\\n\\n\");        //Seperation line\n}\n\nvoid main()     //Main section\n{\nintro();\nwhile(repeat[0]==\'1\')\n{\nprintf(\"Welcome ! Please select one of the following apps =\\n\\n\");\nprintf(\"- To open Calculax, press \\\"1\\\" or \\\"a\\\"\\n\");\nprintf(\"- To open AIVA (artificial intelligence virtual assistant), press \\\"2\\\" or \\\"b\\\"\\n\");\nprintf(\"- For Credits & Info, press \\\"3\\\" or \\\"c\\\"\\n\");\nprintf(\"- To reveal the source code, press \\\"4\\\" or \\\"d\\\"\\n\");\nprintf(\"- To show reviews and ratings, press \\\"5\\\" or \\\"e\\\"\");\nprintf(\"\\n\\n> \");\ncond11=getche();\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\n\nif(cond11==\'1\' || cond11==\'a\' || cond11==\'A\')       //Calculation functions\n{\nprintf(\"Choose one of the following options =\\n\\n\");\nprintf(\"- Start\\t(\\\"1\\\" or \\\"a\\\")\\n\");\nprintf(\"- Help \\t(\\\"2\\\" or \\\"b\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\nstart=getche();\nprintf(\"\\n\\n\");\n\nif(start==\'1\' || start==\'a\' || start==\'A\')      //To start\n{\nprintf(\"\\nChoose one of the following apps =\\n\\n\");       //Option for choosing app\nprintf(\"- Percentage calculator \\t(\\\"1\\\" / \\\"a\\\")\\n\");\nprintf(\"- Table and factorial finder \\t (\\\"2\\\" / \\\"b\\\")\\n\");\nprintf(\"- Character-ASCII converter \\t (\\\"3\\\" / \\\"c\\\")\\n\");\nprintf(\"- Arithmetic operators \\t (\\\"4\\\" / \\\"d\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond4=getche();\nprintf(\"\\n\");\n\nif(cond4==\'1\' || cond4==\'a\' || cond4 ==\'A\')      //To open percentage calculator\n{\nprintf(\"\\nWelcome to percentage calculator. Please choose one of the following options :\\n\");\nprintf(\"(Warning : If wrong data is entered, the program may behave irresponsive or even shutdown)\");       //Sub-apps of percentage calculator\nprintf(\"\\n\\n- Enter the marks of each subject seperately \\t (\\\"1\\\" / \\\"a\\\")\");\nprintf(\"\\n- Enter the total marks directly \\t (\\\"2\\\" / \\\"b\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond1=getche();\nprintf(\"\\n\");\n\nif (cond1 == \'1\' ||cond1==\'a\' || cond1==\'A\')       //To enter marks seperately\n{\nprintf(\"\\nPlease enter the marks of the following subjects:\\n\");\nprintf(\"\\n- Computer = \");\nscanf(\"%%f\", &computer);\nprintf(\"- Mathematics = \");\nscanf(\"%%f\", &math);\nprintf(\"- Physics = \");\nscanf(\"%%f\", &physics);\nprintf(\"- Chemistry = \");\nscanf(\"%%f\", &chemistry);\nprintf(\"- Pakistan Studies = \");\nscanf(\"%%f\", &pk_st);\nprintf(\"- Islamiyat = \");\nscanf(\"%%f\", &islamiyat);\nprintf(\"- English = \");\nscanf(\"%%f\", &english);\nprintf(\"- Urdu = \");\nscanf(\"%%f\", &urdu);\nprintf(\"\\nEnter the total marks = \");\nscanf(\"%%f\", &total);\nobt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;\npercent = (obt / total) * 100;\n\nif(percent>100 || percent<0)        //If percentage is wrong\n{\nprintf(\"\\n_________________________________________________\\n\\n\");\nprintf(\"\\aThe information you provided is not correct as the obtained numbers are greater than the total numbers.\\nPlease select one of the following options :\\n\");     //Seperation line\nprintf(\"\\n- Change the marks of each subject\\t (\\\"1\\\" / \\\"a\\\")\");     //Available choices\nprintf(\"\\n- Change the total marks \\t (\\\"2\\\" / \\\"b\\\")\");\nprintf(\"\\n- Get the percentage anyway\\t (\\\"3\\\" / \\\"c\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond2=getche();\nprintf(\"\\n\");\n\nif(cond2==\'1\' || cond1==\'a\' || cond1==\'A\')      //To change the marks of each subject seperately\n{\nprintf(\"\\nPlease enter the marks of the following subjects again:\\n\");     //To change the marks of each subject\nprintf(\"\\n- Computer = \");\nscanf(\"%%f\", &computer);\nprintf(\"- Mathematics = \");\nscanf(\"%%f\", &math);\nprintf(\"- Physics = \");\nscanf(\"%%f\", &physics);\nprintf(\"- Chemistry = \");\nscanf(\"%%f\", &chemistry);\nprintf(\"- Pakistan Studies = \");\nscanf(\"%%f\", &pk_st);\nprintf(\"- Islamiyat = \");\nscanf(\"%%f\", &islamiyat);\nprintf(\"- English = \");\nscanf(\"%%f\", &english);\nprintf(\"- Urdu = \");\nscanf(\"%%f\", &urdu);\nobt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;\npercent = (obt / total) * 100;\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\", percent);\nprintf(\"\\n\");\ngetch();\n}\n\nelse if(cond2==\'2\' || cond1==\'b\' || cond1==\'B\')     //To change the total marks\n{\nprintf(\"\\nEnter the total marks again = \");        //To enter the total marks\nscanf(\"%%f\", &total);\nobt = computer+math+physics+chemistry+pk_st+islamiyat+english+urdu;\npercent = (obt / total) *100;\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);\ngetch();\n}\n\nelse if(cond2==\'3\' || cond2==\'c\' || cond2==\'C\')     //To get the percentage anyways\n{\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);      //Seperation line\ngetch();\n}\n\nelse            //If wrong input is entered\n{\nerror(0);\ngetch();\n}\n}\n\nelse        //If wrong input is entered\n{  \nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);\ngetch();\n}\n}\n\nelse if (cond1 == \'2\' || cond1==\'b\' || cond1==\'B\')      //To enter total marks directly\n{\nprintf(\"\\nPlease enter the obtained marks = \");\nscanf(\"%%f\",&obt);\nprintf(\"\\nNow enter the total marks = \");\nscanf(\"%%f\",&total);\npercent = (obt / total) * 100;\n\nif(percent>100 || percent<0)        //If the percentage is wrong\n{\nprintf(\"\\n_________________________________________________\\n\\n\");\nprintf(\"\\aThe information you provided is not correct as the obtained numbers are greater than the total numbers.\\nPlease select one of the following options :\\n\");     //Seperation line\nprintf(\"\\n- Change the obtained marks \\t (\\\"1\\\" / \\\"a\\\")\");        //Available options\nprintf(\"\\n- Change the total marks \\t (\\\"2\\\" / \\\"b\\\")\\n\");\nprintf(\"- Get the percentage anyway \\t (\\\"3\\\" / \\\"c\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond2=getche();\nprintf(\"\\n\");\n\nif(cond2==\'1\' || cond1==\'a\' || cond1==\'A\')      //To change the obtained marks\n{\nprintf(\"\\nEnter the obtained marks again = \");        //To change obtained marks\nscanf(\"%%f\", &obt);\npercent = (obt / total) * 100;\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);\ngetch();\n}\n\nelse if(cond2==\'2\' || cond1==\'b\' || cond1==\'B\')     //To change the total marks\n{\nprintf(\"\\nEnter the total marks again  = \");\nscanf(\"%%f\", &total);\npercent = (obt / total) * 100;\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);\ngetch();\n}  \n\nelse if(cond2==\'3\' || cond1==\'c\' || cond1==\'C\')     //To display percentage\n{\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);      //Seperation line\ngetch();\n}\n\nelse        //If wrong input is entered\n{\nerror(0);\ngetch();\n}\n}\n\nelse        //If wrong input is entered\n{\nprintf(\"\\nThankyou for the information, your percentage is = %%.2f %%%%\\n\\n\", percent);\ngetch();\n}\n\n} \n\nelse        //If wrong input is given\n{\nerror(0);\ngetch();\n}\n\n}\n\nelse if (cond4==\'2\' || cond4==\'b\' || cond4 ==\'B\')        //To open table-factorial finder\n{\nprintf(\"\\n\\nWelcome to table calculator. Choose one of the following programs \\n\");\nprintf(\"\\n- Find the table of a number \\t (\\\"1\\\" / \\\"a\\\")\\n- Find the factorial of a number \\t (\\\"2\\\" / \\\"b\\\")\");\nprintf(\"\\n\\n_________________________________________________\");      //Seperation line\nprintf(\"\\n\\n> \");\ncond8=getche();\nprintf(\"\\n\");");
                printf("\nif(cond8==\'1\' || cond8==\'a\' || cond8==\'A\')      //To open table finder\n{   \nprintf(\"\\nEnter the number to display its table = \");\nscanf(\"%%d\",&table);\nprintf(\"\\nEnter the limit of the table = \");\nscanf(\"%%d\",&limit);\nprintf(\"\\n\");\n\nfor(int i=1;i<=limit;i++)       //Loop to print the table\n{\nprintf(\"%%d  X  %%d  =  %%d\\n\",table,i,table*i);\n}\nprintf(\"\\n\");\ngetch();\n}\n\nelse if(cond8==\'2\' || cond8==\'b\' || cond8==\'B\')     //To open factorial finder\n{\nprintf(\"\\nEnter a number to display its factorial = \");\nscanf(\"%%d\",&num);\n\nfor(loop=1;loop<=num;loop++)        //Loop to find factorial\n{\nfact=fact*loop;\n\n\nif(num<=0)      //If negative number is entered\n{\nprintf(\"\\nThe number you entered is not correct. Please enter a positive number\\n\\n\");\n}\n\nelse        //To find factorial\n{\nprintf(\"\\nThe factorial of %%d is = %%d\\n\\n\",num,fact);\ngetch();\n}\n}\n\nelse        //If wrong input is given\n{\nerror(0);\ngetch();\n}\n}   \n\nelse if(cond4==\'3\'|| cond4==\'c\' || cond4 ==\'C\')     //To ASCII-character converter\n{\nprintf(\"\\nWelcome to ASCII-character converter.\\n\\n- Convert character to ASCII \\t (\\\"1\\\" / \\\"a\\\")\");\nprintf(\"\\n- Convert ASCII to character \\t (\\\"2\\\" / \\\"b\\\")\\n\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond5=getche();\nprintf(\"\\n\\n\");\n\nif(cond5==\'1\'  || cond5==\'a\' || cond5==\'A\')      //To convert from character to ASCII\n{\nprintf(\"Enter a single character to get its ASCII code \\n(If multiple characters are entered, the ASCII code of only the first character will be shown) = \");\nscanf(\"%%c\",&cha);\nprintf(\"\\nThe ASCII code of %%c is = \\\"%%d\\\"\\n\\n\",cha,cha);\ngetch();\n}\n\nelse if(cond5==\'2\' || cond5==\'b\' || cond5==\'B\')         //To convert from ASCII to characte\n{\nprintf(\"Enter the ASCII code = \");\nscanf(\"%%d\",&ASCII);\n\nif (ASCII<48 || ASCII>122)      //If wrong ASCII is given\n{\nprintf(\"\\nThe ASCII code you entered is not correct. Please enter an ASCII code between 48 and 122.\\n\\n\");\ngetch();\n}\n\nelse        //If wrong input is entered\n{\nprintf(\"\\n\\aThe character of this ASCII code is = \\\"%%c\\\"\\n\\n\",ASCII);     //If ASCII is right\ngetch();\n}\n}   \n\nelse        //If wrong input is given\n{\nerror(0);\ngetch();\n}\n\n\nelse if(cond4==\'4\'|| cond4==\'d\' || cond4 ==\'D\')     //To use arithmetic operator\n{\nprintf(\"\\nSelect one of the following operation :\");      //available options\nprintf(\"\\n- Addition \\t (\\\"1\\\" / \\\"a\\\")\");\nprintf(\"\\n- Subtraction \\t (\\\"2\\\" / \\\"b\\\")\");\nprintf(\"\\n- Multipliction \\t (\\\"3\\\" / \\\"c\\\")\");\nprintf(\"\\n- Division \\t (\\\"4\\\" / \\\"d\\\")\");\nprintf(\"\\n- Modulus \\t (\\\"5\\\" / \\\"e\\\")\");\nprintf(\"\\n- Power \\t (\\\"6\\\" / \\\"f\\\")\");\nprintf(\"\\n- Square root \\t (\\\"7\\\" / \\\"g\\\")\");\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\nprintf(\"> \");\ncond9=getche();\nprintf(\"\\n\\n\");\n\nif(cond9==\'1\' || cond9==\'a\' || cond9==\'A\')      //For addition\n{   \nprintf(\"Welcome to addition. \\n\\nEnter first number = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\nEnter second number = \");\nscanf(\"%%f\",&operate[1]);\nprintf(\"\\n%%.2f + %%.2f = %%.2f\\n\\n\",operate[0],operate[1],operate[0]+operate[1]);\ngetch();\n}\n\nelse if(cond9==\'2\' || cond9==\'b\' || cond9==\'B\')     //For subtraction\n{\nprintf(\"Welcome to subtraction. \\n\\nEnter a number = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\nEnter the number to be subtracted = \");\nscanf(\"%%f\",&operate[1]);\nprintf(\"\\n%%.2f - %%.2f = %%.2f\\n\\n\",operate[0],operate[1],operate[0]-operate[1]);\ngetch();\n}       \n\nelse if(cond9==\'3\' || cond9==\'c\' || cond9==\'C\')     //For multiplication\n{\nprintf(\"Welcome to multiplication. \\n\\nEnter first number = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\nEnter second number = \");\nscanf(\"%%f\",&operate[1]);\nprintf(\"\\n%%.2f X %%.2f = %%.2f\\n\\n\",operate[0],operate[1],operate[0]*operate[1]);\ngetch();\n}            \n\nelse if(cond9==\'4\' || cond9==\'d\' || cond9==\'D\')     //For division\n{\nprintf(\"Welcome to division. \\n\\nEnter a number to be divided = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\nEnter the divider = \");\nscanf(\"%%f\",&operate[1]);\nprintf(\"\\n%%.2f / %%.2f = %%.2f\\n\\n\",operate[0],operate[1],operate[0]/operate[1]);\ngetch();\n}\n\nelse if(cond9==\'5\' || cond9==\'e\' || cond9==\'E\')     //For modulus\n{\nprintf(\"Welcome to modulus. \\n\\nEnter a number to be divided = \");\nscanf(\"%%d\",&num1);\nprintf(\"\\nEnter the divider = \");\nscanf(\"%%d\",&num2);\nprintf(\"\\n%%d %%%% %%d = %%d\\n\\n\",num1,num2,num1%%num2);\ngetch();\n}\n\nelse if(cond9==\'6\' || cond9==\'f\' || cond9==\'F\')     //For exponent\n{\nprintf(\"Welcome to power. \\n\\nEnter a number = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\nEnter its power = \");\nscanf(\"%%f\",&operate[1]);\nprintf(\"\\n%%.2f ^ %%.2f = %%.2f\\n\\n\",operate[0],operate[1],pow(operate[0],operate[1]));\ngetch();\n}   \n\nelse if(cond9==\'7\' || cond9==\'g\' || cond9==\'G\')      //For square root\n{\nprintf(\"Welcome to square root. \\n\\nEnter a number = \");\nscanf(\"%%f\",&operate[0]);\nprintf(\"\\n%%.2f ^ (1/2) = %%.2f\\n\\n\",operate[0],sqrt(operate[0]));\ngetch();\n}\n\nelse        //If wrong input is given\n{\nerror(0);\ngetch();\n}\n\n}\n\nelse        //If wrong input is given\n{\nerror(0);\ngetch();\n}\n}   \n\nelse if(start==\'2\' || start==\'b\' || start==\'B\')     //For help\n{\nprintf(\"Following are the rules and regulations that must be taken into consideration while using the program :\\n\\n\");\nprintf(\"- To open an app enter the number or alphabet written in braces after a choice\\n\");\nprintf(\"- If you want to repeat the program, you can do it after ending it\\n\");\nprintf(\"- You can enter upper or lower case alphabets as you like\\n\");\nprintf(\"- In case you enter a wrong choice, an error will be given but you can restart it\\n\");\nprintf(\"- Just press the key of the choice. You don\'t need to press enter\\n\");\nprintf(\"- If the percentage is greater than 100 or less than 0, you will be given options to change the input data\\n\\n\");\ngetch();\n}\n\nelse        //If wrong input is entered\n{   \nerror(0);\ngetch();\n}\n}\n\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n\nelse if(cond11==\'2\' || cond11==\'b\' || cond11==\'B\')          //To open AIVA\n{\nprintf(\"\\nWelcome ! Type \\\"start\\\" or \\\"help\\\"\\n\\n> \");\nscanf(\"%%s\",cond14);\nprintf(\"\\n_________________________________________________\\n\");      //Seperation line\n\nif((strcmp(cond14,\"Start\")==0)||(strcmp(cond14,\"start\")==0))       //To start\n{\n\nif(ai==0)       //For inputting name\n{\nprintf(\"\\n\\nHello ! I am AIVA ( artificial intelligence powered virtual assistant ). \\n\\nFirst thing first. Please enter your first name  = \");\nscanf(\"%%s\", name);\nprintf(\"\\n\\nSo %%s\", name);\nprintf(\" !\");\nai=-5;\n}\n\nelse        //For not dispalying name on repeat\n{   \nprintf(\"\\n\\nWelcome again %%s !\", name);\n}\nprintf(\"\\a\\n\\nHow are you feeling today?\\n\\n\",name);\nprintf(\"- Happy	  	- Sad\\n- Demotivated	- Excited\\n- Bored 	- Angry\\n- Normal	- Motivated\\n- Tired		- Worried\\n\\n> \"); //mood selection\nscanf(\"%%s\",m);\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\n\nif((strcmp(m,\"Happy\")==0)||(strcmp(m,\"happy\")==0))          //happy mood\n{\nprintf(\"\\nOn a scale of 1-5 how happy are you?\\n\\n>\");\nint happy;\nscanf(\"%%d\",&happy);\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\n\nif (happy==1||happy==2)\n{\nprintf(\"I hope you are more happier in the future : )\");\ngetch();\n}\n\nelse if(happy==3||happy==4)\n{\nprintf(\" %%s always be happy, may Allah give you more. :)\\n\",name);\ngetch();\n}\n 	\nelse if(happy==5)\n{\nprintf(\"yayyy super happpy mood!!\\nI\'m happy to see that!!\");\ngetch();\n}\n\nelse\n{\nerror(0);\ngetch();\n}\n}\n\nelse if((strcmp(m,\"Sad\")==0)||(strcmp(m,\"sad\")==0))         //sad mood\n 	{\nprintf(\"%%s don\'t be sad, worst times last but not forever.\\nEverything will be alright soon (inshallah) :)\\n\\n\",name);\nprintf(\"Do you want to read a short guide on how to gain happiness?\\n\\n> \");\nchar sad[7];\nscanf(\"%%s\",sad);\n \nif((strcmp(sad,\"Yes\")==0)||(strcmp(sad,\"yes\")==0))\n\nprintf(\"\\nHERE ARE THE 5 STEPS TO BE MORE HAPPIER AND LESS SAD;\\n- Be thankful\\n- Appreciate small things\\n- Trust the process\\n- Remove toxic people from social media\\n- Stay away from negative people\");\ngetch();\n}\n\nelse if((strcmp(sad,\"No\")==0)||(strcmp(sad,\"no\")==0))\n\n{\nprintf(\"\\nOkay, no problem\");\ngetch();\n}\n  \nelse\n{\nerror(0);\ngetch();\n}	\n}\n \nelse if((strcmp(m,\"Demotivated\")==0)||(strcmp(m,\"demotivated\")==0))         //demotivated mood\n{\nprintf(\" %%s I see you are demotivated...\\n\",name);\nprintf(\"Demotivation comes when you are filled with negativity and you have less hopes.\\nYou can try changing your demotivation to your motivation. Because its never too late\\nStart now and you will succeed!\");\nprintf(\"\\nDo you want to read some motivating quotes?\\n\\n> \");");
                printf("\nchar mo[5];\nscanf(\"%%s\",mo); //quote suggestion\nprintf(\"\\n_________________________________________________\\n\\n\");      //Seperation line\n  \nif((strcmp(mo,\"Yes\")==0)||(strcmp(mo,\"yes\")==0))\n{\nprintf(\"HERE ARE SOME MOTIVATING QUOTES FOR YOU : \\n\\n\\n\");\nprintf(\"- FAILURE IS NOT THE OPPOSITE OF SUCCESS, IT IS A PART OF IT\\n\\n\\n\");\nprintf(\"- WORK HARD IN THE SILENCE AND LET THE SUCCESS MAKE THE NOISE\\n\\n\\n\");\nprintf(\"- IF YOU DON'T SACRIFICE FOR WHAT YOU WANT, WHAT YOU WANT BECOMES THE SACRIFICE\\n\");\ngetch();\n}\n\nelse if((strcmp(mo,\"No\")==0)||(strcmp(mo,\"no\")==0))\n{\nprintf(\"Okay alright!\");\ngetch();\n} \n\nelse\n{\nerror(0);\ngetch();\n}\n}\n\nelse if((strcmp(m,\"Excited\")==0)||(strcmp(m,\"excited\")==0))         //excited mood\n{					\nprintf(\"%%s I see you are excited..\\n\",name);\nprintf(\"I\'m glad that you are!!\");\ngetch();\n}\n\nelse if((strcmp(m,\"Bored\")==0)||(strcmp(m,\"bored\")==0))      //bore mood\n{\nprintf(\" %%s Go try other features of this app, you\'ll like them \\n\",name);\ngetch();\n}  \n\nelse if((strcmp(m,\"Angry\")==0)||(strcmp(m,\"angry\")==0))         //angry mood\n{\nint anger;\nprintf(\"On a scale of 1-5 how angry are you?\\n\\n> \");\nscanf(\"%%d\",&anger);    \n\nif(anger==1||anger==2)      //anger intensity\n{\nprintf(\"\\nCalm down, everything will be fine, leave it just ignore\");\ngetch();\n}\n\nelse if(anger==3||anger==4)\n{\nprintf(\"\\nCalm down don't be angry its not good for your health\");\ngetch();\n}\n  	\nelse if (anger==5)\n{\nprintf(\"\\n%%s just leave it. you are just destroying your mood by being angry. come onn chill....relax..!!  \\n\",name);\ngetch();\n}\n\nelse        //Wrong input\n{\nerror(0);\n getch();\n}\n}\n\nelse if((strcmp(m,\"Normal\")==0)||(strcmp(m,\"normal\")==0))       //normal mood\n{\nprintf(\"Oh okay...   : |\\n\\n\");\ngetch();\n}\n\nelse if((strcmp(m,\"Motivated\")==0)||(strcmp(m,\"motivated\")==0))         //motivated mood\n{\nprintf(\"That\'s good to know!\");\ngetch();\n}\n\nelse if((strcmp(m,\"Tired\")==0)||(strcmp(m,\"tired\")==0))         //tired mood\n{\nprintf(\"Make sure to take some rest!!\");\ngetch();\n}\n\nelse if((strcmp(m,\"Worried\")==0)||(strcmp(m,\"worried\")==0))      //worried mood\n{\nprintf(\"Dont worry...everything will be alright (in-sha-Allah)\");\n   	    getch();\n}\n\nelse        //wrong input\n{\nerror(0);\ngetch();\n} \n\n}\n\nelse if((strcmp(cond14,\"Help\")==0)||(strcmp(cond14,\"help\")==0))      //For help\n{\nprintf(\"\\n\\nFollowing are the rules you should follow while using AIVA =\\n\\n\");\nprintf(\"- In the whole program you can cut the character you added accidentally by using backspace \\n\");\nprintf(\"- Enter the wording given by AIVA during input\\n\");\nprintf(\"- You\'ll have the choice to restart the program\\n\");\nprintf(\"- You don\'t have to enter your name everytime on repeat\\n\\n\");\ngetch();\n}\n\nelse        //If wrong input is entered\n{\nrror(0);\ngetch();\n}\n}\n   \n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n\nelse if(cond11==\'3\' || cond11==\'c\' || cond11==\'C\')      //For credits\n{\nprintf(\"Introduction :\\n\\n\\tThis program is made by two students in class 10th-A. It\'s made in C language on Visual Studio Code with a code of more than 800 statements ( Took many months ). Copyrights reserved by no one. No part of this program may be copied, reproduced or used for making notes. In case of any copy or resemblance, we have the right to do nothing. So enjoy and hope you liked it. ; )\\n\\n\");\nprintf(\"Credits :\\n\\n\\t- Huzaifa Khalid = He loves programming and is interested in technology since childhood. He started simple programming in 7th class. The first program he made was the percentage calculator. Now in 10th class he resumed the programming practice. His only hobby is coding in his laptop while he\'s free\\n\");\nprintf(\"\\n\\t- Zain Mansoor = He is a friend of Huzaifa. They became friends on the first day of his school in 7th class. Now is a good programmer and has a great role in this program. His hobby is solving rubik\'s cube (3x3 cube record is <20 seconds)\");\ngetch();\n}  \n\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n////////////////////////////////////////////////////////////////////////////////////////////// \n\nelse if(cond11==\'4\' || cond11==\'d\' || cond11==\'D\')      //For revealing code\n{\nsystem(\"cls\");\nprintf(\"\\nPress any key to type the 4-digit PIN code to access the source code \");\ngetch();\nsystem(\"cls\");\nprintf(\"_ _ _ _\");\npin[0]=getch();\nsystem(\"cls\");\nprintf(\". _ _ _\");\npin[1]=getch();\nsystem(\"cls\");\nprintf(\". . _ _\");\npin[2]=getch();\nsystem(\"cls\");\nprintf(\". . . _\");\npin[3]=getch();\nsystem(\"cls\");\nprintf(\". . . .\\n\\n\");\n\nif(pin[0]== \'1\' || pin[1]== \'3\' || pin[2]== \'1\' || pin[3]== \'1\')\n{\nprintf(\"Correct PIN\\n\\nThe code is shown below\");\n//Code to be shown\ngetch();\n}\n\nelse    \n{\nprintf(\"\\aIncorrect PIN\\n\\n\");\nrepeat[2]=\'0\';\ngetch();\n}\n}\n\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n\nelse if(cond11==\'5\' || cond11==\'e\' || cond11==\'E\')      //For reviews\n{\nprintf(\"Rating :\\n\\n- 4.9 / 5.0\\n\\n\\n\");\nprintf(\"Reviews :\\n\\n- Najam-ul-Arifeen (10th-A)\\n\\tWOW ! Just awesome \\n\\n\");\nprintf(\"- Zain Mansoor (10th-A)\\n\\tI can\'t believe it. We made it and I\'m so excited\\n\\n\");\nprintf(\"- Huzaifa Khalid (10th-A)\\n\\tThis is the best program I\'ve seen and made in my life. Took a lot of efforts\");\ngetch();\n}\n\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n//////////////////////////////////////////////////////////////////////////////////////////////\n\nelse        //If wrong input is entered\n{\nerror(0);\ngetch();\n}\n\nprintf(\"\\n\\n=================================================\");        //Seperation line\nprintf(\"\\n\\nSelect one of the following options :\\n\\n- Repeat the program (type \\\"yes\\\")\\n- End the program (type \\\"no\\\" or any other word)\\n\\n\");        //To repeat or enf the program\nprintf(\"> \");\nscanf(\"%%s\",cond7);\nprintf(\"\\n\\n\");\nprintf(\"=================================================\\n\\n\");        //Seperation line\n\nif((strcmp(cond7,\"Yes\")==0) || (strcmp(cond7,\"yes\")==0))       //To end the program\n{\nsystem(\"cls\");\n}\n\nelse\n{\nrepeat[0]=\'0\';\n}\n}\n}");
                getch();
            }

            else
            {
                printf("\aIncorrect PIN\n\n");
                repeat[2]='0';
                getch();
            }
        }

        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////

        else if(cond11=='5' || cond11=='e' || cond11=='E')      //For reviews
        {
            printf("Rating :\n\n- 4.9 / 5.0\n\n\n");
            printf("Reviews :\n\n- Najam-ul-Arifeen (10th-A)\n\tWOW ! Just awesome \n\n");
            printf("- Zain Mansoor (10th-A)\n\tI can't believe it. We made it and I'm so excited\n\n");
            printf("- Huzaifa Khalid (10th-A)\n\tThis is the best program I've seen and made in my life. Took lots of efforts");
            getch();
        }

        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////

        else        //If wrong input is entered
        {
            error(1);
            getch();
        }

        repeat1='1';
        repeat2='1';

        if("")

        system("cls");
    }
}
