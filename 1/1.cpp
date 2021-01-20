#include <stdio.h>
#include <string.h>

struct student
{
    int num;
    char name[10];
    int computer,english,math;
    double average;
    
};

void bulid_student_infor(struct student *p,int n);
void modify_student_infor(struct student *p,int n,int num,char *a,int score);
void printf_student_infor(struct student *p,int n);
int main(int argc, const char * argv[])
{
    struct student students[50];
    int n,i;
    int num,score;
    char course[10];
    
    printf("intput n:\n");
    scanf("%d",&n);
    
    bulid_student_infor(students,n);

    printf("unchange for -1\n");
    scanf("%d",&i);
    
	if(i!=-1)
    {
    	printf("intput your modify student infor:\n");
   		scanf("%d%s%d",&num,course,&score);
		modify_student_infor(students,n,num,course,score);
	}
    
    printf_student_infor(students,n);
    
    return 0;
}

void bulid_student_infor(struct student *p,int n)
{
    printf("build %d student infor:\n",n);
    
 	for(int i=0;i<n;i++)
	{
		scanf("%d%s%d%d%d",&p[i].num,&p[i].name,&p[i].computer,&p[i].english,&p[i].math);
		p[i].average=(p[i].computer+p[i].english+p[i].math)/3.0;	
	}
}

void modify_student_infor(struct student *p,int n,int num,char *a,int score)
{	
    for(int i=0;i<=n-1;i++)
    {
        if(p[i].num==num)
        {
            printf("before modify:\n");
            printf("%d%s%d%d%d\n",p[i].num,p[i].name,p[i].computer,p[i].english,p[i].math);
            if(strcmp(a,"computer")==0)
                p[i].computer=score;
            if(strcmp(a,"english")==0)
                p[i].english=score;
            if(strcmp(a,"math")==0)
                p[i].math=score;
            break;
        }

    }
}

void printf_student_infor(struct student *p,int n)
{
    struct student *temp=p;
    
    printf("after modify:\n");
    for(;p<=temp+n-1;p++)
    {
            printf("%d%s%d%d%d\n",p->num,p->name,p->computer,p->english,p->math);
    }
}
