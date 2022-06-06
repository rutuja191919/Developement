import java.lang.*;

class Demo extends Thread
{
	public void run()  //state running
	{
		for(int i = 0;i<10;i++)
		{
			System.out.println("Value of i : "+i);
		    try
			{
      		  Thread.sleep(1000);
		    }
			catch(Exception obj)
			{}
		}
	}
}

class MyThread5
{
	public static void main(String arg[]) throws Exception
	{
		Demo obj1 = new Demo();
		Thread t1 = new Thread(obj1,"First");  //state new
		
		Demo obj2 = new Demo();
		Thread t2 = new Thread(obj2,"Second"); //state new
		
		t1.start();  //state runnable
		
		t1.join();  //running and dead ..waiting state for t2 thread
		
		t2.start();  //state runnable
		
	    //state dead
		
		//parallely execution hote donhi threads che
	}
}