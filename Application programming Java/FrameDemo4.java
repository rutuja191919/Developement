import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
	public Frame fobj;
	
	MarvellousFrame(String name)
	{
		fobj = new Frame(name);  //resource allocation
		fobj.setSize(600,600);
		fobj.setVisible(true);
        
		fobj.addWindowListener(new MarvellousListener());
	}
}

class MarvellousListener extends WindowAdapter       //implements WindowListener
{
	public void windowClosing(WindowEvent wobj)
	{
		System.exit(0);
		
	}  
}

class FrameDemo4
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
        
		MarvellousFrame mobj = new MarvellousFrame("PPA");
	}
}