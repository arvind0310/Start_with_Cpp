/* WRONG */



#include<iostream>
using namespace std;
int i;
int isprime(int a){
    
    for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           break; 
       }
    }
    if(i==a){
    return a;
    }
    return 0;
}
            
 

_________________________________ ___________________________________ ____________________________________________________ ____________________
  
  /*      correct  */
  
  #include<iostream>
using namespace std;
int i;
int isprime(int a){
    
    for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           return false; // will give 0 
       }
    }
    if(i==a){
    return true;
    }
    return 0; // no matter write or not its just to tell the fn that it has succesfully terminated the fun
}
            
 
int main(){
    int a;
    cin>>a;
    if (isprime(a)) // will take only true value.
    {
     cout<<"prime";   
    }
    else
    {
        cout<<"non prime";
    }
  
    return 0;
}
  
  
  

_________________________________ ___________________________________ ____________________________________________________ ____________________
    
    
    
    
    //FROM RANGE [A,B]
    
    #include<iostream>
using namespace std;
int i,n;
            
int isprime(int n){
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;   // return work only ones its not variable that will keep changing.
        }
    }
    if(i==n)
    {
        return true;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for (a;a<=b;a++){
        if(isprime(a))
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
