using System;
 
namespace ConsoleApplication1
{
	class Program
	{
		static void Main(string[] args)
		{
			float CAN;
			int C100, C50, C20, C10, C5, C1, D50, D10, D01;
			C100 = 0;
			C50 = 0;
			C20 = 0;
			C10 = 0;
			C5 = 0;
			C1 = 0;
			D50 = 0;
			D10 = 0;
			D01 = 0;
 
			string linea;
			Console.Write("Indica una cantidad :");
			linea = Console.ReadLine();
 
			CAN = float.Parse(linea);
			Console.WriteLine("La Cantidad introducida es: "+CAN);
			if( (CAN >= 100) )
			{
				C100 = ((int)CAN / 100);
				CAN = CAN - (C100 * 100);
			}
			if( (CAN >= 50) )
			{
				C50 = ((int)CAN / 50);
				CAN = CAN - (C50 * 50);
			}
			if( (CAN >= 20) )
			{
				C20 = ((int)CAN / 20);
				CAN = CAN - (C20 * 20);
			}
			if( (CAN >= 10) )
			{
				C10 = ((int)CAN / 10);
				CAN = CAN - (C10 * 10);
			}
			if( (CAN >= 5) )
			{
				C5 = ((int)CAN / 5);
				CAN = CAN - (C5 * 5);
			}
			if( (CAN >= 1) )
			{
				C1 = ((int)CAN / 1);
				CAN = CAN - (C1 * 1);
			}
			if( (CAN >= 0.5) )
			{
				D50 = (int)(CAN / 0.5);
				CAN = CAN - (float)(D50 * 0.5);
			}
			if( (CAN >= 0.1) )
			{
				D10 = (int)(CAN / 0.1);
				CAN = CAN - (float)(D10 * 0.1);
			}
			if( (CAN >= 0.01) )
			{
				D01 = (int)Math.Round(CAN / 0.01);
				CAN = CAN - (float)(D01 * 0.01);
			}
			Console.WriteLine("Billetes de 100: "+ C100);
			Console.WriteLine("Billetes de 50 : " + C50);
			Console.WriteLine("Billetes de 20 : " + C20);
			Console.WriteLine("Billetes de 10 : " + C10);
			Console.WriteLine("Billetes de 5 : " + C5);
			Console.WriteLine("Monedas de 1 : " + C1);
			Console.WriteLine("Monedas de 0,50 : " + D50);
			Console.WriteLine("Monedas de 0,10 : " + D10);
			Console.WriteLine("Monedas de 0,01 : " + D01);
		}
	}
}