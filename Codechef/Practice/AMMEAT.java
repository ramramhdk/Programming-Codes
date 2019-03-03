import java.util.Arrays;
import java.util.Scanner;

class AndrewAndTheMeatBalls {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while(t-->0)
		{
			int n = scanner.nextInt();
			long m = scanner.nextLong();
			long a[] = new long[n];
			for(int i=0;i<n;i++)
				a[i] = scanner.nextLong();
			Arrays.sort(a);
			int i;
			int count = 0;
			for(i=n-1;i>=0 && m>0;i--)
			{
				count++;
				m = m - a[i];
			}
			if(m <= 0)
				System.out.println(count);
			else
				System.out.println("-1");
		}
	}
}
