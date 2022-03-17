// ------------------------------- Mini Project ------------------------------------
// ------------------------------- src -------------------------------
// ----------------------- ArithMainPack ---------------------------
// ----------------------- ArithMain ---------------------------
package ArithMainPack;
import java.util.Scanner;

import ArithPack.ArithClass;

public class ArithMain {
public static void main(String[] args){

Scanner sc = new Scanner(System.in);

while(true) {
System.out.println("Please enter two nos to do arithmatic operaions : ");

int x=sc.nextInt();
int y=sc.nextInt();

System.out.println("---- MENU ---- :\n1 - Add\n"+ "2 - Sub\n"+ "3 - Mul\n"+"4 - Div\n"+"5 - Mod\n"+"6 - Exit");

System.out.println("Enter your choice : ");

int choice = sc.nextInt();
ArithClass a = new ArithClass();

switch(choice)
{
case 1 :
	System.out.println("\nSum is : "+a.Add(x,y));
	break;
case 2 :
	System.out.println("\nDifference is : "+a.Sub(x,y));
	break;
case 3 :
	System.out.println("\nMultiplication is : "+a.Mul(x,y));
	break;
case 4 :
	System.out.println("\nDivision is : "+a.Div(x,y));
	break;
case 5 :
	System.out.println("\nMod Division is : "+a.ModDiv(x,y));
	break;
case 6 :
	System.out.println("\nYou Have Closed The Arithmetic Class !!!");
	System.out.println("\nThank You For Using The  !!!");
	System.exit(0);
default:
	System.out.println("Please Enter A Valid Choice !!!");
	break;
}
}
}
}
// ----------------------- ArithPack ---------------------------
// ----------------------- ArithClass ---------------------------
package ArithPack;
public class ArithClass {
public int Add(int a, int b)
{
return a+b;
}
public int Sub(int a,int b)
{
return a-b;
}
public int Mul(int a,int b)
{
return a*b;
}
public int Div(int a,int b)
{
return a/b;
}
public int ModDiv(int a,int b)
{
return a%b;
}
}
// ----------------------- FuncMainPack ---------------------------
// ----------------------- FuncMain ---------------------------
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
// ----------------------- FuncPack ---------------------------
// ----------------------- FuncClass ---------------------------
package FuncPack;

public class FuncClass
{
	public int Factorial(int a)
	{
		int f=1,i;
		for(i=2;i<=a;i++)
			f*=i;
		return f;
	}
	public int SumUptoN(int a)
	{
		int i,sum=0;
		for(i=1;i<=a;++i)
			sum+=i;
		return sum;
	}
	public int EvenOrOdd(int a)
	{
		if (a%2==0) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
// ----------------------- RelateMainPack ---------------------------
// ----------------------- RelateMain ---------------------------
package RelateMainPack;
import java.util.Scanner;

import RelatePack.RelateClass;

public class RelateMain {
public static void main(String[] args){

Scanner sc = new Scanner(System.in);

while(true) {
System.out.println("Please enter two nos to do relational operaions : ");

int x=sc.nextInt();
int y=sc.nextInt();

System.out.println("---- MENU ---- :\n1 - Check Greater\n"+"2 - Check Smaller\n"+"3 - Check Equal\n"+"4 - Exit");

System.out.println("Enter your choice : ");

int choice = sc.nextInt();
RelateClass r = new RelateClass();

switch(choice)
{
case 1 :
	if (r.CheckGreater(x,y)==-1) {
		System.out.println("Both Are Equal !!!");
	}
	else {
	System.out.println("\nGreater of two is : "+r.CheckGreater(x,y));
	}
	break;
case 2 :
	if (r.CheckSmaller(x,y)==-1) {
		System.out.println("Both Are Equal !!!");
	}
	else {
	System.out.println("\nGreater of two is : "+r.CheckSmaller(x,y));
	}
	break;
case 3 :
	if (r.CheckEqual(x,y)==0) {
		System.out.println("\nNumbers are Equal !!!\n");
	}
	else {
		System.out.println("\nNumbers are NOT Equal !!!\n");
	}
	break;
case 4 :
	System.out.println("\nYou Have Closed The Relational Class !!!");
	System.out.println("\nThank You For Using The Relational Class  !!!");
	System.exit(0);
default:
	System.out.println("Please Enter A Valid Choice !!!");
	break;
}
}
}
}
// ----------------------- RelatePack ---------------------------
// ----------------------- RelateClass ---------------------------
package RelatePack;

public class RelateClass {
	public int CheckGreater(int a, int b)
	{
		if (a>b) {
			return a;
		}
		else if (a==b) {
			return -1;
		}
		else {
			return b;
		}
	}
	public int CheckSmaller(int a,int b)
	{
		if (a<b) {
			return a;
		}
		else if (a==b) {
			return -1;
		}
		else {
			return b;
		}
	}
	public int CheckEqual(int a,int b)
	{
		if (a==b) {
			return 0;
		}
		else {
			return 1;
		}
	}
}
*************************************** EOF *************************************************
