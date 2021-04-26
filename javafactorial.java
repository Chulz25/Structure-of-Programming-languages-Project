//calls factorial class
class FactorialExample2{  
 static int factorial(int n){    
    //this starts the recursion
   if (n == 0)    
    return 1;    
  else    
    return(n * factorial(n-1));    
 }    
 public static void main(String args[]){  
  //intializes the integer i then fact as a placeholder for the answer when it is factored
  int i,fact=1;  
  int number=4;//It is the number to calculate factorial    
    //calls the factorial function
   fact = factorial(number);   
    //prints the factorial aswell as the original number
   System.out.println("Factorial of "+number+" is: "+fact);    
 }  
}  
