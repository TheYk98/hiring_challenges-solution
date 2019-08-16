package google_prep;
import java.util.*;
public class errors {
	public static void main(String[] args) {
			Scanner sc=new Scanner(System.in);
		List<String> ph_nos=new ArrayList<String>();
		System.out.println("Enter the number of phone number:");
		int num=sc.nextInt();
		
		while((--num)>=0)
		{
			ph_nos.add(sc.next());
		}
		for(int i=0;i<ph_nos.size();i++)
		{
			for(int j=i+1;j<ph_nos.size();j++)
				{
				
				if(ph_nos.get(i).length()==ph_nos.get(j).length())
                      continue;
					
				  String smaller=ph_nos.get(i).length()>ph_nos.get(j).length()?ph_nos.get(j):ph_nos.get(i);
      			  String bigger=ph_nos.get(i).length()<ph_nos.get(j).length()?ph_nos.get(j):ph_nos.get(i);
			if(bigger.startsWith(smaller))
				System.out.println("collision occured while dialing "+smaller+"it has substr from "+bigger );
			 
				}
		}
			
		
		

	}
}
