package FuncMainPack;
import java.util.Scanner;

import FuncPack.FuncClass;

public class FuncMain {
public static void main(String[] args){

Scanner sc = new Scanner(System.in);

while(true) {
System.out.println("Please enter a no to do functional operaions : ");

int x=sc.nextInt();

System.out.println("---- MENU ---- :\n1 - Factorial\n"+"2 - Sum upto N\n"+"3 - Even Or Odd\n"+"4 - Exit");

System.out.println("Enter your choice : ");

int choice = sc.nextInt();
FuncClass f = new FuncClass();

switch(choice)
{
case 1 :
	System.out.println("\nFactorial is : "+f.Factorial(x));
	break;
case 2 :
	System.out.println("\nSum Upto "+x+" is : "+f.SumUptoN(x));
	break;
case 3 :
	if (f.EvenOrOdd(x)==1) {
		System.out.println("\nNumber is Even !!!\n");
	}
	else {
		System.out.println("\nNumber is Odd !!!\n");
	}
	break;
case 4 :
	System.out.println("\nYou Have Closed The Functional Class !!!");
	System.out.println("\nThank You For Using The Functional Class  !!!");
	System.exit(0);
default:
	System.out.println("Please Enter A Valid Choice !!!");
	break;
}
}
}
}