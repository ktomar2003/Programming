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
