//Railway Sound Using Arduino
#include <liquidCrystal.h> 
int m=0,g1=0,g2=0,g3=0,s=0; 

LiquidCrystal lcd(0,1,2,3,4,5,6,7,8,9,10); 
void setup() 
{   
    lcd.begin(16,2);     
    lcd.clear();
}

void loop() 
{    
    int x=analogRead(A0);    
    int k=30;    
    delay(1000);    
    s++;    
    if(x>=k)    
    {       
        m++;    
    } 
    
    //1     
    if(m==1)
    {       
        if(x>=k)      
        {       
            g1=0,g2=0,g3=0;      
        }    
    } 
    
    //5     
    else if(((m-1)%4)==0)    
    {        
        if(x>=k)      
        {      
            g1=0,g2=0,g3=0;      
        }    
    } 
    
    //3    
    else if(((m+1)%4)==0)    
    {       
        g2=s-g1;    
    } 
    
    //4     
    else if((m%4)==0)    
    {        
        g3=s-g1-g2;       
        double vel1=1.5/(0.01*g1);       
        double vel2=1.5/(0.01*g2);
        double vel3=1.5/(0.01*g3);       
        double vel=(vel1+vel2+vel3)/3;       
        
        lcd.println(vel);       
        lcd.println(x);       
        lcd.println(g1);        
        lcd.println(g2);         
        lcd.println(g3);         
        lcd.println(s);          
        lcd.println("****************");    
    } 
    
    //2       
    else    
    {        
        g1=s;   
    } 
