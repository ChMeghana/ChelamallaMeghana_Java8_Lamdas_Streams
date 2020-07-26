package com.lamdas.com.lamdas;

public class IsPalindrome {	
	public static boolean check(String str) {
		return str.equals(new StringBuilder(str).reverse().toString());
	}
}
