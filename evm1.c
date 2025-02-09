// program for evm machine
//came in exam
#include <stdio.h>
#include<string.h>

struct party
{
    char name[10];
    int v;
}p[3];

void input();
void display();

int main() {
    int i,x,choice=1;
    
    strcpy(p[0].name,"bjp");
    strcpy(p[1].name,"cong");
    strcpy(p[2].name,"aap");
    
    for(i=0;i<3;i++)
    { 
        p[i].v=0;
    }
    
    while(choice==1)
    {
        input();

        printf("enter 1 to continue , 0 to exit\n");
        scanf("%d",&choice);
       
    }
    display();

    //getch(); this giving warning warning: implicit declaration of function 'getch' [-Wimplicit-function-declaration] so removed it
    // program works fine without it as well 
    return 0;
}

void input()
{ 
    int c;
    printf("enter 1 for bjp ,2 for cong , 3 for aap ...enter choice\n");
    scanf("%d",&c);
    
    switch(c)
    { 
        case 1:
        p[0].v+=1;
        break;
        case 2:
        p[1].v+=1;
        break;
        case 3:
        p[2].v+=1;
        break;
        default:
        printf("error\n");
        
    }
}

void display()
{
    struct party temp;
    int i,j;
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        { 
            if(p[j].v<p[j+1].v)
            { 
                temp = p[j];
                p[j] = p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("result\n");
    for(i=0;i<3;i++)
    { 
        
           printf("name:%s\tvote:%d\n",p[i].name,p[i].v);
        
        
    }
    
}