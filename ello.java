package hello;
import java.util.Scanner;

class volsareacone {
private double r;
private double l;
private double h;
void getdata()
{
Scanner sc = new Scanner(System.in);
System.out.print("Enter the radius of the sphere: ");
r = sc.nextDouble();

System.out.print("Enter the slant height of the sphere: ");
h = sc.nextDouble();

l=Math.sqrt(Math.pow(r, 2)+Math.pow(h,2));
}
double volcone()
{
return(1.0/3*Math.PI*r*r*h);
}
double sareacone()
{
return(Math.PI*r*(l+r));

}
}

//main class
public class ello {
public static void main(String[] args) {
volsareacone c = new volsareacone();
c.getdata();
System.out.println("The surface area of sphere is:" +c.sareacone());

System.out.println("The volume of the sphere is:"+ c.volcone()) ;
}
}

-----------------------------------------------------------------------------------
  
package hello;

import java.util.Scanner;

public class table {

	public static void main(String[] args) {
		int r;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the no. : ");
		r = sc.nextInt();

		for(int i=1;i<=10;i++)
		{
			System.out.print(r+" * "+ i +" = "+ r*i +"\n");
		}
	}
}

---------------------------------------------------------------------------------------

package hello;

import java.util.Scanner;

public class areatriangle {

	public static void main(String[] args) {
		float le,br,s,a,b,c;
		double areaR,areaT;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the length : ");
		le = sc.nextInt();
		
		System.out.print("Enter the beadth : ");
		br = sc.nextInt();
		
		System.out.print("Enter the 1st side of triangle : ");
		a = sc.nextFloat();
		
		System.out.print("Enter the 2nd side of triangle : ");
		b = sc.nextFloat();
		
		System.out.print("Enter the 3rd side of triangle : ");
		c = sc.nextFloat();
		
		s=(a+b+c)/2;
		areaT = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		
		areaR=le*br;
		
		System.out.print("Area of Rectangle is : "+areaR+"\n");
		System.out.print("Area of Triangle is : "+areaT);
	}
}
---------------------------------------------------------------------------------------
package hello;
import java.util.Scanner;
public class avgn {

	public static void main(String[] args) {
		int n,c=1;
		float x, avg, sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the value of n : ");
		n = sc.nextInt();
		
		while(c <= n)
		{
			System.out.print("Enter "+c+" values : ");
			x=sc.nextInt();
			sum += x;
			++c;
		}
		avg=sum/n;
		System.out.print("The Average is : "+avg);
	}
}
