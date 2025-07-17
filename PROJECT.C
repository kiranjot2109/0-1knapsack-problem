
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define MAX 100
void welcome()
{
setbkcolor(15);
setcolor(CYAN);
setfillstyle(1,3);
ellipse(320,250,0,360,300,120);
floodfill(300,300,3);
settextstyle(0,0,8);
setcolor(1);
outtextxy(120,220,"WELCOME");
settextstyle(3,0,5);
setcolor(3);
outtextxy(15,5,"*******************************");
settextstyle(3,0,5);
setcolor(1);
outtextxy(15,25,"*******************************");
settextstyle(3,0,5);
setcolor(3);
outtextxy(15,440,"*******************************");
settextstyle(3,0,5);
setcolor(1);
outtextxy(15,420,"*******************************");
settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 getch();
 cleardevice();
}
////////////////////////////////////////////////////

void first()
{
 setbkcolor(15);
 setcolor(CYAN);
 setfillstyle(1,3);
 rectangle(100,80,550,400);
 floodfill(300,300,3);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,4);
 setcolor(1);
 outtextxy(260,75,"PROJECT");
 outtextxy(300,110,"ON");
 outtextxy(130,145,"0/1 KNAPSACK PROBLEM");
 settextstyle(1,0,2);
 setcolor(15);
 outtextxy(110,230,"Submitted to:-");
 outtextxy(365,230,"Submitted by;-");
 settextstyle(3,0,1);
 setcolor(1);
 outtextxy(110,280,"Dr.Mohit k.Sharma(H.O.D)");
 outtextxy(110,310,"Ms.Sandeep Kaur");
 outtextxy(110,330,"(Project Guide)");
 outtextxy(365,280,"Kiranjot Kaur(5207)");
 outtextxy(365,310,"Harnoor Kaur(5215)");
 getch();
 cleardevice();
}


////////////////////////////////////////////////////////

void intro()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,5);
 setcolor(3);
 outtextxy(30,55,"INTRODUCTION TO");
 outtextxy(300,95,"0/1 KNAPSACK");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(20,140,"* Knapsack is basically means a BAG.");
 outtextxy(20,160,"* A bag of given capacity.");
 outtextxy(20,180,"* We want to pack n items in your luggage.");
 outtextxy(20,200,"* The is having some maximum capacity M and with every item");
 outtextxy(20,220,"  there is some weight wi and profit pi.");
 outtextxy(20,240,"* The objective is to fill the knapsack in such a way that total");
 outtextxy(20,260,"  weight of items in knapsack should be less than or equal to M");
 outtextxy(20,280,"  and total profit associated with items in knapsack should be");
 outtextxy(20,300,"  maximum.");
 outtextxy(20,320,"* When an item is placed in knapsack then Pi associated with it");
 outtextxy(20,340,"  is earned.");
 outtextxy(20,360,"* In 0/1 knapsack problem each item can either be included in ");
 outtextxy(20,380,"  knapsack or not.We can't have function of weight.");
 getch();
 cleardevice();
}

///////////////////////////////////////////////////////

void steps()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,4);
 setcolor(3);
 outtextxy(60,80,"STEPS TO SOLVE THE PROBLEM:-");
 settextstyle(1,0,2);
 setcolor(1);
 outtextxy(40,140,"STEP 1: Draw a table with n+1 rows and w+1 columns.");
 outtextxy(40,170,"STEP 2: Fill the values of 0th row and 0th column with");
 outtextxy(40,200,"        all 0.");
 outtextxy(40,230,"STEP 3: Start completing the table row wise from left");
 outtextxy(40,260,"        to right using formulae:");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(40,320,600,370);
 floodfill(50,330,3);
 settextstyle(1,0,3);
 setcolor(1);
 outtextxy(60,330,"T(i,j)= max{T(i-1,j),value+T(i-1,(j-weight)}." );
 getch();
 cleardevice();
}

///////////////////////////////////////////////////////


void example()
{
  setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(400,130,450,180);
 rectangle(400,180,450,230);
 rectangle(400,230,450,280);
 rectangle(400,280,450,330);
 rectangle(400,330,450,380);
 rectangle(450,130,500,180);
 rectangle(450,180,500,230);
 rectangle(450,230,500,280);
 rectangle(450,280,500,330);
 rectangle(450,330,500,380);
 rectangle(500,130,550,180);
 rectangle(500,180,550,230);
 rectangle(500,230,550,280);
 rectangle(500,280,550,330);
 rectangle(500,330,550,380);
 settextstyle(6,0,1);
 setcolor(1);
 outtextxy(405,145,"Items");
 outtextxy(452,145,"Weight");
 outtextxy(505,145,"Value");
 outtextxy(405,185,"1      2      3");
 outtextxy(405,235,"2      3      4");
 outtextxy(405,285,"3      4      5");
 outtextxy(405,335,"4      5      6");
 settextstyle(1,0,5);
 setcolor(3);
 outtextxy(30,70,"EXAMPLE OF 0/1 KNAPSACK");
 settextstyle(1,0,2);
 setcolor(1);
 outtextxy(30,140,"EXAMPLE:-");
 outtextxy(30,170,"Suppose we are given a knapsack");
 outtextxy(30,200,"at Maximum capacity M=5. We are");
 outtextxy(30,230,"to include 4 items with weight");
 outtextxy(30,260,"(2,3,4,5) and the profit");
 outtextxy(30,290,"associated with each item ");
 outtextxy(30,320,"P1(3,4,5,6). Find the optimal");
 outtextxy(30,350,"solution using Dynamic Approach.");
 getch();
 cleardevice();
}


///////////////////////////////////////////////////////
void iteration1()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(20,50,"ITERATION 1: Taking 1st row.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(20,80,"Value=3       Weight=2");
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(20,100,"T(i,j)= max{T(i-1,j),value+T(i-1,(j-weight)}.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,125,"-> T(1,1)=max{T(0,1),3+T(0,(1-2))}");
 outtextxy(10,150,"          =max{T(0,-1)}=0");
 outtextxy(10,175,"-> T(1,2)=max{T(0,2),3+T(0,(2-2))}");
 outtextxy(10,200,"          =max{T(0,3)}=3");
 outtextxy(10,225,"-> T(1,3)=max{T(0,3),3+T(0,(3-2))}");
 outtextxy(10,250,"          =max{T(0,3)}=3");
 outtextxy(10,275,"-> T(1,4)=max{T(0,4),3+T(0,(4-2))}");
 outtextxy(10,300,"          =max{T(0,3)}=3");
 outtextxy(10,325,"-> T(1,5)=max{T(0,5),3+T(0,(5-2))}");
 outtextxy(10,350,"          =max{T(0,3)}=3");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(390,150,630,400);
 setcolor(3);
 line(390,200,630,200);
 line(390,250,630,250);
 line(390,300,630,300);
 line(390,350,630,350);

 line(430,150,430,400);
 line(470,150,470,400);
 line(510,150,510,400);
 line(550,150,550,400);
 line(590,150,590,400);
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(400,125,"0   1   2   3   4   5");
 outtextxy(370,165,"0   0   0   0   0   0   0");
 outtextxy(370,210,"1   0   0   3   3   3   3");
 outtextxy(370,260,"2   0");
 outtextxy(370,310,"3   0");
 outtextxy(370,360,"4   0");
 getch();
 cleardevice();
}


///////////////////////////////////////////////////////

void iteration2()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(20,50,"ITERATION 2: Taking 2nd row.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(20,80,"Value=4       Weight=3");
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(20,100,"T(i,j)= max{T(i-1,j),value+T(i-1,(j-weight)}.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,125,"-> T(2,1)=max{T(1,1),4+T(1,(1-3))}");
 outtextxy(10,150,"          =max{T(0,-1)}=0");
 outtextxy(10,175,"-> T(2,2)=max{T(1,2),4+T(1,(2-3))}");
 outtextxy(10,200,"          =max{T(3,-1)}=3");
 outtextxy(10,225,"-> T(2,3)=max{T(1,3),4+T(1,(3-3))}");
 outtextxy(10,250,"          =max{T(3,4)}=4");
 outtextxy(10,275,"-> T(2,4)=max{T(1,4),4+T(1,(4-3))}");
 outtextxy(10,300,"          =max{T(3,4)}=4");
 outtextxy(10,325,"-> T(2,5)=max{T(1,5),4+T(1,(5-3))}");
 outtextxy(10,350,"          =max{T(3,7)}=7");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(390,150,630,400);
 setcolor(3);
 line(390,200,630,200);
 line(390,250,630,250);
 line(390,300,630,300);
 line(390,350,630,350);

 line(430,150,430,400);
 line(470,150,470,400);
 line(510,150,510,400);
 line(550,150,550,400);
 line(590,150,590,400);
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(400,125,"0   1   2   3   4   5");
 outtextxy(370,165,"0   0   0   0   0   0   0");
 outtextxy(370,210,"1   0   0   3   3   3   3");
 outtextxy(370,260,"2   0   0   3   4   4   7");
 outtextxy(370,310,"3   0");
 outtextxy(370,360,"4   0");
 getch();
 cleardevice();
}


///////////////////////////////////////////////////////

void iteration3()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(20,50,"ITERATION 3: Taking 3rd row.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(20,80,"Value=5       Weight=4");
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(20,100,"T(i,j)= max{T(i-1,j),value+T(i-1,(j-weight)}.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,125,"-> T(3,1)=max{T(2,1),5+T(2,(1-4))}");
 outtextxy(10,150,"          =max{T(0,-1)}=0");
 outtextxy(10,175,"-> T(3,2)=max{T(2,2),5+T(2,(2-4))}");
 outtextxy(10,200,"          =max{T(3,-1)}=3");
 outtextxy(10,225,"-> T(3,3)=max{T(2,3),5+T(2,(3-4))}");
 outtextxy(10,250,"          =max{T(4,-1)}=4");
 outtextxy(10,275,"-> T(3,4)=max{T(2,4),5+T(2,(4-4))}");
 outtextxy(10,300,"          =max{T(4,5)}=5");
 outtextxy(10,325,"-> T(3,5)=max{T(2,5),5+T(2,(5-4))}");
 outtextxy(10,350,"          =max{T(7,5)}=7");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(390,150,630,400);
 setcolor(3);
 line(390,200,630,200);
 line(390,250,630,250);
 line(390,300,630,300);
 line(390,350,630,350);

 line(430,150,430,400);
 line(470,150,470,400);
 line(510,150,510,400);
 line(550,150,550,400);
 line(590,150,590,400);
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(400,125,"0   1   2   3   4   5");
 outtextxy(370,165,"0   0   0   0   0   0   0");
 outtextxy(370,210,"1   0   0   3   3   3   3");
 outtextxy(370,260,"2   0   0   3   4   4   7");
 outtextxy(370,310,"3   0   0   3   4   5   7");
 outtextxy(370,360,"4   0");
 getch();
 cleardevice();
}

///////////////////////////////////////////////////////

void iteration4()
{
 setbkcolor(15);
 setcolor(CYAN);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25," ***************************** ");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420," ***************************** ");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(20,50,"ITERATION 4: Taking 4th row.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(20,80,"Value=6       Weight=5");
 settextstyle(1,0,1);
 setcolor(3);
 outtextxy(20,100,"T(i,j)= max{T(i-1,j),value+T(i-1,(j-weight)}.");
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,125,"-> T(4,1)=max{T(3,1),6+T(3,(1-5))}");
 outtextxy(10,150,"          =max{T(0,-1)}=0");
 outtextxy(10,175,"-> T(4,2)=max{T(3,2),6+T(3,(2-5))}");
 outtextxy(10,200,"          =max{T(3,-1)}=3");
 outtextxy(10,225,"-> T(4,3)=max{T(3,3),6+T(3,(3-5))}");
 outtextxy(10,250,"          =max{T(4,-1)}=4");
 outtextxy(10,275,"-> T(4,4)=max{T(3,4),6+T(3,(4-5))}");
 outtextxy(10,300,"          =max{T(5,-1)}=5");
 outtextxy(10,325,"-> T(4,5)=max{T(3,5),6+T(3,(5-5))}");
 outtextxy(10,350,"          =max{T(7,6)}=7");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(390,150,630,400);
 setcolor(3);
 line(390,200,630,200);
 line(390,250,630,250);
 line(390,300,630,300);
 line(390,350,630,350);

 line(430,150,430,400);
 line(470,150,470,400);
 line(510,150,510,400);
 line(550,150,550,400);
 line(590,150,590,400);
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(400,125,"0   1   2   3   4   5");
 outtextxy(370,165,"0   0   0   0   0   0   0");
 outtextxy(370,210,"1   0   0   3   3   3   3");
 outtextxy(370,260,"2   0   0   3   4   4   7");
 outtextxy(370,310,"3   0   0   3   4   5   7");
 outtextxy(370,360,"4   0   0   3   4   5   7");
 getch();
 cleardevice();
}

///////////////////////////////////////////////////////

void result()
{
 setbkcolor(15);
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,5,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,25,"*******************************");
 settextstyle(3,0,5);
 setcolor(3);
 outtextxy(15,440,"*******************************");
 settextstyle(3,0,5);
 setcolor(1);
 outtextxy(15,420,"*******************************");
 setcolor(3);
 setfillstyle(1,3);
 rectangle(390,150,630,400);
 setcolor(3);
 line(390,200,630,200);
 line(390,250,630,250);
 line(390,300,630,300);
 line(390,350,630,350);

 line(430,150,430,400);
 line(470,150,470,400);
 line(510,150,510,400);
 line(550,150,550,400);
 line(590,150,590,400);
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(400,125,"0   1   2   3   4   5");
 outtextxy(370,165,"0   0   0   0   0   0   0");
 outtextxy(370,210,"1   0   0   3   3   3   3");
 outtextxy(370,260,"2   0   0   3   4   4   7");
 outtextxy(370,310,"3   0   0   3   4   5   7");
 outtextxy(370,360,"4   0   0   3   4   5   7");
 settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 settextstyle(1,0,5);
 setcolor(3);
 outtextxy(20,70,"Result of an example:");
 settextstyle(1,0,2);
 setcolor(1);
 outtextxy(30,130,"Number of elements=4");
 outtextxy(30,180,"Capacity of knapsack=5");
 outtextxy(30,230,"Weight of elements=2,3,4,5");
 outtextxy(30,280,"Values of elements=3,4,5,6");
 outtextxy(30,330,"Profit=7");
 getch();
 closegraph();
}
///////////////////////////////////////////////////////


void working()
{
 int n,flag[MAX]={0},v[MAX],w[MAX],m[MAX][MAX],W,i,j,k;
 clrscr();
 printf("Enter the number of elements=");
 scanf("%d",&n);
 printf("Enter the values:\n");
 for(i=1;i<=n;i++)
  scanf("%d",&v[i]);
 printf("Enter the weights:\n");
 for(i=1;i<=n;i++)
  scanf("%d",&w[i]);
 printf("Enter the capacity of knapsack:");
 scanf("%d",&W);
 for(j=0;j<=W;j++)
  m[0][j]=0;
 for(i=1;i<=n;i++)
 {
  for(j=0;j<=W;j++)
  {
   if(w[i]<=j)
   {
    if(m[i-1][j] > (m[i-1][j-w[i]]+v[i]) )
     m[i][j]=m[i-1][j];
    else
     m[i][j]=m[i-1][j-w[i]]+v[i];
   }
   else
    m[i][j]=m[i-1][j];
  }
 }
 i=n;
 k=W;
 while(i>0 && k>0)
 {
  if(m[i][k]!=m[i-1][k])
  {
   flag[i]=1;
   k=k-w[i];
   i=i-1;
  }
  else
   i--;
 }
 printf("\n\t");
 for(i=0;i<=W;i++)
  printf("%d\t",i);
 printf("\n");
 for(i=0;i<=10*W;i++)
  printf("-");
 printf("\n");
 for(i=0;i<=n;i++)
 {
  printf("%d   |\t",i);
  for(j=0;j<=W;j++)
   printf("%d\t",m[i][j]);
  printf("\n");
 }
 printf("\n The resultant vector is:");
 printf("(");
 for(i=1;i<=n;i++);
  printf("%d",flag[i]);
 printf(")");
 printf("\n\n The total profit is %d",m[n][W]);
 printf("\n");
 getch();
 return 0;
}


///////////////////////////////////////////////////////

void thanks()
{
setbkcolor(15);
setcolor(CYAN);
setfillstyle(1,3);
ellipse(320,250,0,360,300,120);
floodfill(300,300,3);
settextstyle(0,0,8);
setcolor(1);
outtextxy(120,220,"THANKS");
settextstyle(3,0,5);
setcolor(3);
outtextxy(15,5,"*******************************");
settextstyle(3,0,5);
setcolor(1);
outtextxy(15,25,"*******************************");
settextstyle(3,0,5);
setcolor(3);
outtextxy(15,440,"*******************************");
settextstyle(3,0,5);
setcolor(1);
outtextxy(15,420,"*******************************");
settextstyle(1,0,3);
 setcolor(3);
 outtextxy(290,400,"Press enter to continue...");
 getch();
 cleardevice();
}
//////////////////////////////////////////////////////
void graph1()
{
int gm,gd=DETECT;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 welcome();
 first();
 intro();
 steps();
 example();
 iteration1();
 iteration2();
 iteration3();
 iteration4();
 result();
 getch();
 closegraph();
}
//////////////////////////////////////////////////////

void graph2()
{
 int gm,gd=DETECT;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 thanks();
 getch();
 closegraph();
}
/////////////////////////////////////////////////////
void main()
{
 graph1();
 working();
 graph2();
 getch();
}