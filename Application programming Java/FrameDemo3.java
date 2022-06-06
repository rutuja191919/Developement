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

class MarvellousListener implements WindowListener
{
	public void windowDeactivated(WindowEvent wobj){}
	public void windowActivated(WindowEvent wobj){}
    public void windowDeiconified(WindowEvent wobj){}
	public void windowIconified(WindowEvent wobj){}
	public void windowClosed(WindowEvent wobj){}
	public void windowClosing(WindowEvent wobj)
	{
		System.exit(0);
		
	}
	public void windowOpened(WindowEvent wobj){}  
}

class FrameDemo3
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
        
		MarvellousFrame mobj = new MarvellousFrame("PPA");
	}
}