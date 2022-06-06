import PPA.Marvellous;
import PPA.Infosystems;
import PPA.LB.Demo;
import PPA.LB.DS.Hello;
import PPA.LB.DS.MS.Cello;

class Client 
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		
		Infosystems iobj = new Infosystems();
		iobj.gun();
		
		//Practice pobj = new Practice();
		//pobj.sun();  error access specifier default ahe
        
        Demo dobj = new Demo();
        dobj.run();		
		
		Hello.mun();
		
		Cello cobj = new Cello();
		cobj.ton();
		
	}
}
	