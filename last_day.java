// ------------------------- METHOD OVERLOADING ------------------------------

package methodoverloading;
import java.lang.Math;

//Method overloading  (basic- Methodoverloading.java)

class Overload 
{
	double area(float a, float b, float c) {
		float s;
		s=(a+b+c)/2;
		return Math.sqrt(s*(s-a)*(s-b)*(s-c));
    }

double area(float r) {
 return Math.PI*r*r;
        }

double area(float l, float b) {
 return  l*b;
            }
}
public class methodoverload1{
public static void main(String args[]) {
 Overload overload = new Overload();
 
 double rectangle = overload.area(5.1f, 8.12f);
 System.out.printf("Area of rectangle is %.2f ",rectangle);
 System.out.println("");

 double triangle = overload.area(5.1f,4.2f,3.5f);
 System.out.printf("Area of triangle is %.2f ",triangle);
 System.out.println("");
 
 double circle = overload.area(5.1f);
 System.out.printf("Area of circle is %.2f ", circle);
 System.out.println("");
}
}

===============================================================
  
package methodoverloading;

//Method overloading  (basic- Methodoverloading.java)

class Overload1
{
	double volume(float r, float hei) 
	{
		return Math.PI*r*r*hei;
	}

	double volume(float x) 
	{
		return x*x*x;
    }

	double volume(float l, float b, float h)
	{
		return l*b*h;  
	}
}

public class methodoverload2
{
	public static void main (String args[])
	{
		Overload1 overload = new Overload1();

		double cube = overload.volume(5.1f);
		System.out.printf("Volume of Cube is %.2f ",cube);
		System.out.println("");

		double cuboid = overload.volume(5.1f,4.2f,3.5f);
		System.out.printf("Volume of Cuboid is %.2f ",cuboid);
		System.out.println("");
		
		double cylinder = overload.volume(5.1f,3.6f);
		System.out.printf("Volume of Cylinder is %.2f ", cylinder);
		System.out.println("");
	}
}


// ------------------------- INTERFACE ------------------------

interface Shape
{
    double Area(int l, int b);
}

class Rect implements Shape
{
    int  length,breadth;
    public double Area(int l, int b)
    {
        length=l;
        breadth=b;
        return length*breadth; 
    }
}


class Tria implements Shape{
    int breadth,height;
    public double Area(int l, int b)
    {
        breadth=b;
        height=l;
        return 0.5*breadth*height;
    }
}

public class InterfaceExample
{        
            public static void main (String[] args) 
            {
            	Shape s;
            	Rect  r= new Rect();
            	s=r;        
            	System.out.println(" The area of rectangle is "+s.Area(5,8));
            	Tria t= new Tria();
            	s=t;
            	System.out.println(" The area of triangle is "+s.Area(9, 9));
            }
}
===============================================================================
interface Shape2D
{
    double Volume(int r, int h);
}

class Cyl implements Shape2D
{
    int ra,hei;
    public double Volume(int r, int h)
    {
        ra=r;
        hei=h;
        return Math.PI*ra*ra*hei; 
    }
}


class Cone implements Shape2D
{
	int ra,hei;
    public double Volume(int r, int h)
    {
        ra=r;
        hei=h;
        return 1.0/3*Math.PI*ra*ra*hei; 
    }
}

public class InterfaceExercise
{        
            public static void main (String[] args) 
            {
            	Shape2D s;
            	Cyl cy= new Cyl();
            	s=cy;        
            	System.out.println(" The volume of cylinder is "+s.Volume(5,8));
            	Cone co= new Cone();
            	s=co;
            	System.out.println(" The volume of cone is "+s.Volume(9, 9));
            }
}
//---------------------------------- PACKAGES EX ------------------------------
//----------------------------- PACKAGE----------------------------
//----------------------------- MAIN ---------------------------
package Package;
import java.util.Scanner;
import java.lang.String;
import Package1.AreaVolumeCyl;

class CylinderMain
{
	public static void main(String [] args)
	{
		AreaVolumeCyl cy= new AreaVolumeCyl();
		Scanner in = new Scanner(System.in);
		System.out.println("Please enter the radius:");
		double r = in.nextDouble();
		System.out.println("Please enter the height: ");
		double h = in.nextDouble();
		System.out.println("The volume of the cylinder is: "+ cy.cylinderVolume(r, h));
		System.out.println("The surface area of the cylinder is: "+cy.cylinderSurface(r, h));
	}
}
//----------------------------- PACKAGE 1 ----------------------------
//----------------------------- AREA VOLUME CALC ---------------------------
package Package1;
public class AreaVolumeCyl
{
	//private double r,h;
	public double cylinderVolume(double r, double h)
	{
		return h * Math.PI * r * r;
	}
	public double cylinderSurface(double r, double h)
	{
		return (2.0 * r * Math.PI * h) + (2.0 * Math.PI * r * r);
	}
}

//---------------------------------- PACKAGES EX MAIN ------------------------------
//----------------------------- PACKAGE ----------------------------
//----------------------------- MAIN ---------------------------
package Package;
import java.util.Scanner;
import java.lang.String;
import Package1.SurfaceVolCone;

class ConeMain{
public static void main(String [] args ) {
SurfaceVolCone cy= new SurfaceVolCone();
Scanner in = new Scanner(System.in);
System.out.println("Please enter the radius : ");
double r = in.nextDouble();
System.out.println("Please enter the height : ");
double h = in.nextDouble();
System.out.println("The volume of the cylinder is: "+ cy.coneVolume(r, h));
System.out.println("The surface area of the cylinder is: "+cy.coneSurface(r, h));
}
}
//----------------------------- PACKAGE 1 ----------------------------
//----------------------------- AREA VOLUME CALC ---------------------------
package Package1;
public class SurfaceVolCone
{
	//private double r,h;
	
	public double coneVolume(double r, double h)
	{
		return 1.0/3 * h * Math.PI * r * r;
	}
	public double coneSurface(double r, double h)
	{
		double l = Math.sqrt(Math.pow(r,2)+Math.pow(h,2)); 
		return (Math.PI * r * r) + (Math.PI * r * l);
	}
}
******************************************** EOF *************************************************
