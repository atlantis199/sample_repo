import java.util.*;

public class prob
{

	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int test = s.nextInt();
		int count1=0;
		boolean flag;
		s.nextLine();
		String sc = s.nextLine();
		String[] val = sc.split(" ");
		for(int i=0;i<test;i++)
		{
			sc = "";
			for(int j=0;j<val[i].length();j++)
			{
				if(sc.indexOf(val[i].charAt(j)) == -1 )
				{
					sc = sc + val[i].charAt(j);
				}
			}
		}
		int[] check = new int[test];
		for(int i=0; i<test; i++)
		{
			for(int j=0; j<test; j++)
			{
				
			}
		}

		System.out.println(count2);
	}
}
