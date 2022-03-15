// Labourer.java

public class Labourer {
	
	private int empno;
	private String ename;
	
	Labourer()
	{
		empno=0;
		ename=" ";
	}

	public void getdata(int empno, String ename)
	{
		this.empno=empno;
		this.ename=ename;
	}
	
	public void dispdata()
	{
		 System.out.println("Employee no. : "+empno);
		 System.out.println("Employee Name : "+ename);
	}
	
}
// Assistance.java

public class Assistant extends Labourer{
		private int wages;
	
	Assistant()
	{
		super();
		wages=0;	
	}

	public void getdata(int empno, String ename, int wages)
	{
		super.getdata(empno,ename);
		this.wages=wages;
			}
	
	public void dispdata()
	{
		 super.dispdata();
		 System.out.println("Employee wages : "+wages);
	}
}
// TechAssist.java
	 
public class TechAssist extends Assistant  {
	
		private int salary;
	
		TechAssist()
			{
				super();
				salary=0;	
			}

		public void getdata(int empno, String ename, int wages, int salary)
			{
			super.getdata(empno,ename,wages);
			this.salary=salary;
			}
	
		public void dispdata()
		{
		 super.dispdata();
		 System.out.println("Employee Salary : "+salary);
		}
	}
// SkilledAsst.java
	 
public class SkilledAsst extends TechAssist {
	
		private int bonus;
	
		SkilledAsst()
			{
				super();
				bonus=0;	
			}

		public void getdata(int empno, String ename, int wages, int salary, int bonus)
			{
			super.getdata(empno,ename,wages,salary);
			this.bonus=bonus;
			}
	
		public void dispdata()
		{
		 super.dispdata();
		 System.out.println("Employee's bonus : "+bonus);
		}
	}
//Emptest.java

import java.io.*;
public class LabourTest {
	   public static void main(String args[]){
	            
	      Labourer l = new Labourer();
	      Assistant a = new Assistant();
	      TechAssist t = new TechAssist();
	      SkilledAsst s = new SkilledAsst(); 
	      
	      System.out.println("Details immediately after declaring objects : ");
	      
	      l.dispdata();
	      a.dispdata();
	      t.dispdata();
	      s.dispdata();
	      
	      System.out.println("Details  after setting the data : ");
	     
	      l.getdata(101,"Ram");
	     
	      a.getdata(102,"Ravi",500);
	      
	      t.getdata(103,"Ragu",10000,15000);
	      
	      s.getdata(104,"Vimal",15000,20000,10000);
	      
	      System.out.println("~~~~~~~~~~~~Labourer's details~~~~~~~~~~~~ ");
	      l.dispdata();
	      System.out.println("~~~~~~~~~~~~Assistant's details ~~~~~~~~~~~~ ");
	      a.dispdata();
	      System.out.println("~~~~~~~~~~~~TechAssist's details~~~~~~~~~~~~ ");
	      t.dispdata();
	      System.out.println("~~~~~~~~~~~~SkilledAsst's details~~~~~~~~~~~~ ");
	      s.dispdata();
	   }
}
