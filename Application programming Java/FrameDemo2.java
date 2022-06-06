import java.lang.*;
import java.awt.*;

class MarvellousFrame
{
	public Frame fobj;
	
	MarvellousFrame(String name)
	{
		fobj = new Frame(name);  //resource allocation
		fobj.setSize(600,600);
		fobj.setVisible(true);	
	}
}
class FrameDemo2
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
        
		MarvellousFrame mobj = new MarvellousFrame("PPA");
	}
}