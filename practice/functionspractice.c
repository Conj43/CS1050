#include<stdio.h>
#include<math.h>
int myPow(int x, int y);

int main(void)
{
    
    int x = 1;
    int y = 0;
    
       while (y<6)
        {
            
       
        printf("myPow(%d, %d)= %d   pow(%d, %d)= %.0f\n",x, y, myPow(x, y), x, y, pow(x,y));
        y++;
        if (y ==6){
            y = 0;
            x++;
        }
        if(x == 7){
            break;
        } 
        
        }
                
               
              
    
    {
    puts("");
}
}
int myPow(int x, int y){
    if (y == 0){
        return 1;
        
    }
    else if (y ==1){
        return x;
        
    }
    else if (y ==2){
        return x*x;
        
    }
    else if (y ==3){
        return x*x*x;
        
    }
    else if (y ==4){
        return x*x*x*x;
        
    }
    else if (y ==5){
        return x*x*x*x*x;
        
    }
    else if (y ==6){
        return x*x*x*x*x*x;
      
    }
    return 0;
}
