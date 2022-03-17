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
