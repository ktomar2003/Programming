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
