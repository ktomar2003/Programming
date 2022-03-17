package Interface;

interface Shape {
    double Area(int l, int b);
       }

class Rect implements Shape{
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

