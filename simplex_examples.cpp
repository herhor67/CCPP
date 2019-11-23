Simplex prev(3, 7);
	{
		//elem(y, x, wartosc);
		prev.elem(1, 1, 1);	 prev.elem(1, 2, -1);	 prev.elem(1, 3, 1);	 prev.elem(1, 6, 1);
		prev.elem(2, 1, 1);	 prev.elem(2, 2, 2);	 prev.elem(2, 4, 1);
		prev.elem(3, 1, 1);	 prev.elem(3, 2, 1);	 prev.elem(3, 5, 1);	 prev.elem(3, 7, 1);

		//value (y, wartosc);
		prev.val(1, 1);
		prev.val(2, 6);
		prev.val(3, 2);

		//coeff(x, wartosc);
		prev.coeff(1, 2); prev.coeff(3, -1); prev.coeff(5, -1);

		// fVal (wartosc)
		prev.fVal = 3;
	}
