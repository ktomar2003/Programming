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
