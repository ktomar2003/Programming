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
