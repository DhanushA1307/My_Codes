import java.util.Scanner;

public class cns
{
	
	public String encode(String enc,int offset)
	{
		offset = offset % 26 +26;
		StringBuilder encoded = new StringBuilder();
		for(char i :enc.toCharArray())
		{
			if(Character.isLetter(i))
			{
				if(Character.isUpperCase(i))
				{
					encoded.append((char)('A'+(i-'A'+offset)%26));
				}
				else
				{
					encoded.append((char)('a'+(i-'a'+offset)%26));
				}
			}
			else
			{
				encoded.append(i);
			}
		}
		return encoded.toString();
	}

	public String decode(String enc,int offset)
	{
		return encode(enc,26-offset);
	}

	public static void main(String[] args)
	{
		cns obj = new cns();
		try(Scanner sc = new Scanner(System.in))
		{
			String s = sc.nextLine();
			int n = sc.nextInt();
			System.out.println(s+" "+n);
			System.out.println("Encode"+" "+obj.encode(s,n));
			System.out.println("Decode"+" "+obj.decode(obj.encode(s,n),n));
		}
	}
}