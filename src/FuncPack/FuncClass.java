package FuncPack;

public class FuncClass
{
	public int Factorial(int a)
	{
		int f=1,i;
		for(i=2;i<=a;i++)
			f*=i;
		return f;
	}
	public int SumUptoN(int a)
	{
		int i,sum=0;
		for(i=1;i<=a;++i)
			sum+=i;
		return sum;
	}
	public int EvenOrOdd(int a)
	{
		if (a%2==0) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
