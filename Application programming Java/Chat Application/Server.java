import java.lang.*;
import java.net.*;
import java.io.*;

class Server
{
	public static void main(String arg[])
	{
		System.out.println("Server application is running!");
	    String s1,s2;
		ServerSocket ss = null;
		Socket s = null;
		BufferedReader br = null,brk = null;
	    PrintStream ps = null;
	    
		try
		{
		 ss = new ServerSocket(1100); //Dukan open kele Listening mode
	     s = ss.accept();   //waiting state
		
		 System.out.println("Connection successful!");
	     brk = new BufferedReader(new InputStreamReader(System.in));
	     br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	     ps = new PrintStream(s.getOutputStream());
	     while((s1 = br.readLine())!= null)
	     {
		    System.out.println("Client says :"+s1);
		    System.out.println("Enter message for client:");
		    s2 = brk.readLine();
		    ps.print(s2);
	     }
		}
		catch(Exception obj)
		{}
		
		try
		{
		 s.close();
		 ss.close();
		 br.close();
		 brk.close();
		 ps.close();
		}
		catch(Exception obj)
		{}
	}
}