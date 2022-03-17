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
