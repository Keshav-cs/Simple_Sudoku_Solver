#include<stdio.h>
#include<math.h>
unsigned long int k,l,j,w=1,i,o,p,c,d,count,x,y,q,m,r,ab,ac,u,c;
unsigned long int a[10][10];
void solve(int r,int c,int x);
void assign();
void print();
void input();
void extra();
void hidden(int ab,int ac);
void main()
{
//clrscr();
assign();
print();
while(w==1)
{
input();
a[r][c]=x;
solve(r,c,x);
printf("1-> continue\n2-> solve");
scanf("%d",&w);
if(w==2)
break;
}
extra();
//aayga
hidden(1,1);
hidden(4,1);
hidden(7,1);
hidden(1,4);
hidden(4,4);
hidden(7,4);
hidden(1,7);
hidden(4,7);
hidden(7,7);
print();
getch();
}
void solve(r,c,x)
{
for(i=1;i<10;i++)
{
if(a[i][c]>10)
{
k = a[i][c];
j=0;
while(k!=0)
{
l = k%10;
if(l!=x)
{
j=j*10+l;
}
k=k/10;
}
a[i][c]=j;
if(j<10)
{solve(i,c,j);}
}
}
for(i=1;i<10;i++)
{
if(a[r][i]>10)
{
 k = a[r][i];
j=0;
while(k!=0)
{
l = k%10;
if(l!=x)
{j=j*10+l;}
k=k/10;}
a[r][i]=j;
}

if(j<10)
{solve(r,i,j);}
}

while(r%3!=0)       //error ho skta check in new if any
{r++;}
while(c%3!=0)
{c++;}
for(o=r;o>r-3;o--)
{for(p=c;p>c-3;p--)
{

if(a[o][p]>10)
{ k = a[o][p]; j=0;
while(k!=0)
{l = k%10;

if(l!=x)
{j=j*10+l;}

k=k/10;}

a[o][p]=j;

if(j<10)
{solve(o,p,j);}
}
}}
}

void assign()
{
for(i=1;i<10;i++)
{
for(u=1;u<10;u++)
{
a[i][u]=123456789;
}
}
}
void print()
{
for(i=1;i<10;i++)
{
for(u=1;u<10;u++)
{
printf("%lu ",a[i][u]);
}
printf("\n");
}
}
void input()
{
printf("enter row");
scanf("%d",&r);
printf("enter column");
scanf("%d",&c);
printf("enter value");
scanf("%d",&x);
}
void extra()
{for(i=1;i<10;i++)
 {
 for(j=1;j<10;j++)
 {
 q=a[i][j];
 if(q<10)
 {solve(i,j,q);}
 }
 }
}
void hidden(int ab,int ac)
{                         printf("\nab=%d    ac=%d",ab,ac);getch();
for(i=1;i<10;i++)
{                           printf("\ni=%d",i);getch();
count=0;
for(c=0;c<3;c++)
{
for(d=0;d<3;d++)
{
k=a[ab+c][ac+d];                printf("\nab+c=%d    ac+d=%d value > %d",ab+c,ac+d,k);getch();
while(k!=0)
{
m=k%10;
if(m==i)
{count++;                  printf("\ncount of%d =%d",count,i);getch();
if(count==1)
{x=ab+c;y=ac+d;}
}
k=k/10;
}
}
}
if(count==1)
{a[x][y]=i;printf("\na[%d][%d]=%d   ",x,y,i);getch();solve(x,y,i);}
}
}