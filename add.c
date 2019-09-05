#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void add(struct node **q,int n);
void display(struct node **q);
void count(struct node **q);
void add_at_beg(struct node **q,int n);
void add_at_end(struct node **q,int n);
void destroy(struct node **q);
void ins_after_data(struct node **q,int n,int pos);
void delete_at_pos(struct node **q,int n);
void delete_at_beg(struct node **q);
void delete_at_end(struct node **q);
void main()
{
int n,m;
struct node *p=NULL;
struct node **q=&p;
int choice;
while(1)
{
printf("enter any choice\n");
printf("1.add\t 2.add_at_beg\t3.add_at_end\t4.display\t 5:destroy\t6:ins_after_data\t 7:delete_at_beg\t8:delete_at_end\t9:delete_at_pos\t10.count\t11.exit\t\n");
scanf("%d",&choice);

switch(choice)
{

case 1:add(&p,n);
	break;
case 2:printf("enter number to add_at_beg\n");
	scanf("%d",&n);
	add_at_beg(&p,n);
	break;
case 3:printf("enter number to add_at_end\n");
	scanf("%d",&n);
	add_at_end(&p,n);
	break;
case 4:display(&p);
	break;
case 5:destroy(&p);
	break;
case 6:printf("enter number to add after data\n");
	scanf("%d%d",&n,&m);
	ins_after_data(&p,n,m);
	break;
case 7:delete_at_beg(&p);
	break;
case 8:delete_at_end(&p);
	break;
case 9:printf("enter the position to delete\n");
	scanf("%d",&n);
	delete_at_pos(&p,n);
	break;
case 10:count(&p);
	break;
case 11:exit(1);
}
}
}
void add(struct node **q,int n)
{
struct node *temp;
temp=*q;
printf("enter number to add\n");
scanf("%d",&n);
if(temp==NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;
temp->next=NULL;
*q=temp;
}
}
void add_at_beg(struct node **q,int n)
{

struct node *temp,*temp1;
temp=*q;
if(temp==NULL)
{
printf("list is empty\n");
}
if(temp!=NULL)
{

temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=n;
temp1->next=temp;
*q=temp1;

}
}
void add_at_end(struct node **q,int n)
{
struct node *temp,*temp1;
temp=*q;
if(temp==NULL)
{
printf("list is empty\n");
}
if(temp!=NULL)
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=n;
temp1->next=NULL;
temp->next=temp1;


}
}
void display(struct node **q)
{
struct node *temp;
temp=*q;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}
void destroy(struct node **q)
{
struct node *temp;
temp=*q;
while(temp!=NULL)
{
*q=temp->next;
free(temp);
temp=*q;
}
}
void ins_after_data(struct node **q,int n,int data)
{
struct node *temp,*temp1;
temp=*q;
while(temp->data!=n)
{
temp=temp->next;
}
temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=data;
temp1->next=temp->next;
temp->next=temp1;
}
void delete_at_pos(struct node **q,int n)
{
struct node *temp,*r;
temp=*q;
int i;
for(i=1;i<n;i++)
{
temp=temp->next;
}
r=temp->next;
temp->next=temp->next->next;
free(r);

}
void delete_at_beg(struct node **q)
{
struct node *temp,*temp1;
temp=*q;

if(temp!=NULL)
{
temp1=temp;
free(temp1);
temp=temp->next;
*q=temp;
}
}
void delete_at_end(struct node **q)
{
struct node *temp,*temp1;
temp=*q;
if(temp!=NULL)
{
while(temp->next!=NULL)
{
temp1=temp;
temp=temp->next;
}
temp1->next=NULL;
free(temp);
}
}
void count(struct node **q)
{
struct node *temp;
temp=*q;
int count1=0;
while(temp!=NULL)
{
count1++;
temp=temp->next;
}
printf("%d",count1);
}


/*
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
1
enter number to add
1
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
2
enter number to add_at_beg
2
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
3
enter number to add_at_end
3
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
3
enter number to add_at_end
4
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
4
2	1	3	4	
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
6
enter number to add after data
1
2
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
4
2	1	2	3	4	
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
7
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
4
1	2	3	4	
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
8
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
4
1	2	3	
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
9
enter the position to delete
2
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.exit
4
1	2	
enter any choice
1.add	 2.add_at_beg	3.add_at_end	4.display	 5:destroy	6:ins_after_data	 7:delete_at_beg	8:delete_at_end	9:delete_at_pos	10.count 11.exit
10
2
*/
