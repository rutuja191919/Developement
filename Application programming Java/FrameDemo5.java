import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class MarvellousFrame extends WindowAdapter implements ActionListener
{
	public Frame fobj;
	public Button bobj;
	public TextField tobj;
	
	public MarvellousFrame(String name)
	{
		fobj = new Frame(name);  //resource allocation
		bobj = new Button("Marvellous");  //resource allocation
		tobj = new TextField();  //resource allocation
		
		tobj.setBounds(60,60,170,20);
		bobj.setBounds(110,130,90,20);
		
		fobj.add(bobj);
		fobj.add(tobj);
		
		fobj.setSize(600,600);
		fobj.setVisible(true);
        fobj.setLayout(null);
		
		bobj.addActionListener(this);
		fobj.addWindowListener(this);
	}
	
	public void windowClosing(WindowEvent wobj)
	{
		System.exit(0);
		
	} 
	
	public void actionPerformed(ActionEvent obj)
	{
		tobj.setText("jay Ganesh");
	}
	
}

class FrameDemo5
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
        
		MarvellousFrame mobj = new MarvellousFrame("PPA");
	}
}