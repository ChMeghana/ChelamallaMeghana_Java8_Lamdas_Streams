package com.lamdas.com.lamdas;

import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;
public class StartsWithA
{
	public static List<String> filterStrings(List<String> list)
	{
		return list.stream()
				  .filter(str -> str.startsWith("a"))
				  .filter(str -> str.length() == 3)
				  .collect(Collectors.toList());
	}
	public static void main(String args[])
	{
		try (Scanner sc = new Scanner(System.in)) 
		{
			List<String> list = Arrays.asList("apple","ape","pip","try","aaa");
			System.out.println("Strings starting with the letter 'a' and having exactly 3 letters are: ");
			filterStrings(list).forEach(System.out::println);
		}
    }
}