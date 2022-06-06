import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class Operations
{
	public int Addition(int iValue1, int iValue2)
	{
		int iSum = iValue1 + iValue2;
		return iSum;
	}
	
	public int Substraction(int iValue1, int iValue2)
	{
		int iSub = iValue1 - iValue2;
		return iSub;
	}
	
}
class MarvellousFrame extends WindowAdapter implements ActionListener
{
	public Frame fobj;
	public Button bobj1, bobj2;
	public TextField tobj1, tobj2, tobj3;
	public Label lobj1, lobj2, lobj3;
	public int iNo1 = 0 , iNo2 = 0, iRet = 0;
	
	public MarvellousFrame(String name)
	{
		fobj = new Frame(name);  //resource allocation
		bobj1 = new Button("Addition");  //resource allocation
		bobj2 = new Button("Substraction");
		
		tobj1 = new TextField();  //resource allocation
		tobj2 = new TextField();
		tobj3 = new TextField();
		
		lobj1 = new Label("Enter First Number"); 
		lobj2 = new Label("Enter Second Number");
		lobj3 = new Label("Result");
		
		
		lobj1.setBounds(60,40,120,20);
		tobj1.setBounds(60,60,170,20);
		
		lobj2.setBounds(60,110,150,20);
		tobj2.setBounds(60,130,150,20);
		
		lobj3.setBounds(60,170,150,20);
		tobj3.setBounds(60,190,150,20);
		
		bobj1.setBounds(60,200,50,50); 
		bobj2.setBounds(60,220,60,50); 
		
		fobj.add(lobj1);
		fobj.add(lobj2);
		fobj.add(lobj3);
		fobj.add(tobj3);
		fobj.add(tobj1);
		fobj.add(tobj2);
		fobj.add(bobj1);
		fobj.add(bobj2);
		
		fobj.setSize(600,600);
		fobj.setVisible(true);
        fobj.setLayout(null);
		
		bobj1.addActionListener(this);
		bobj2.addActionListener(this);
		fobj.addWindowListener(this);
	}
	
	public void windowClosing(WindowEvent wobj)
	{
		System.exit(0);
		
	} 
	
	public void actionPerformed(ActionEvent obj)
	{
	   iNo1 = Integer.parseInt(tobj1.getText());
	   iNo2 = Integer.parseInt(tobj2.getText());
	   
	   Operations oobj = new Operations();
	   
	   if(obj.getSource() == bobj1)
	   {
	   iRet = oobj.Addition(iNo1,iNo2);
	   tobj3.setText(String.valueOf(iRet));
	   }
		   
	   if(obj.getSource() == bobj2)
	   {
	   iRet = oobj.Substraction(iNo1,iNo2);
	   tobj3.setText(String.valueOf(iRet));
	   }
	}
	
}

class FrameDemo6
{
	public static void main(String arg[])
	{
		System.out.println("Print the data on console");
        
		MarvellousFrame mobj = new MarvellousFrame("PPA");
	}
}