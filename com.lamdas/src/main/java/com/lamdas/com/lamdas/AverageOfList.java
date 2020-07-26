package com.lamdas.com.lamdas;


import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

public class AverageOfList {

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<Integer>();
		
		for(int i=1;i<=10;i++) {
			list.add(i);
		}
		
		Object o = getAverage(list);
		Optional<Object> p =Optional.ofNullable(o);
		p.ifPresent(System.out::println);

	}

	private static Double getAverage(List<Integer> list) {
		 Integer sum = 0;
		 
		 for(Integer num:list) {
			 sum += num;
		 }
		 
		 return 1.0*sum/list.size();
	}

}