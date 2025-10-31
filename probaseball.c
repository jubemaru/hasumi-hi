#include <stdio.h>

int main(void)
{
    int k;
    int l;
    printf("Enter swingspeed");
    scanf("%d",&k);
	
	printf("Enter hitballspeed");
	scanf("%d",&l);
    
    if(k>=160,l>=190)
    {
       printf("Giancarlo Stanton!!");
    }

    else if(145>k>=130,130>l>=150)
    {
      printf("You are at the level of a professional baseball player.");
    }
    
    else if(160>k>=145,150>l>=190)
    {
      printf("You are home run hitter！");
    }
    
    else
    {
      printf("You are not at the professional level yet.");
    }
    
    return 0;

}

