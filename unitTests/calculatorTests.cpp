// calculatorTests.cpp : Defines the entry point for the console application.
//

#include "Qlabel.h"
#include "Display.h"
#include "Operations.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Mathf.h"


TEST_CASE("Mathf") {
	SECTION("checkAdd"){
		REQUIRE(Mathf::add(3,5)==8);
		REQUIRE(Mathf::add(100,5)==105);
		bool err=false;
		try{
			Mathf::add(2147483640,200);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error scitani"));
		}
	}
	SECTION("checkSubtract"){
		REQUIRE(Mathf::subtract(3,5)==-2);
		REQUIRE(Mathf::subtract(100,5)==95);
		bool err=false;
		try{
			Mathf::subtract(-2147483640,200);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error odcitani"));
		}
	}
	SECTION("checkMultipli"){
		REQUIRE(Mathf::multipli(3,5)==15);
		REQUIRE(Mathf::multipli(100,5)==500);

		bool err=false;
		try{
			Mathf::multipli(-2147483640,200);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error nasobeni"));
		}
		
	}
	SECTION("checkDivide"){
		REQUIRE(Mathf::divide(3,5)==(3/5));
		REQUIRE(Mathf::divide(100,5)==20);
		REQUIRE(Mathf::divide(3,5)==0);
		bool err=false;
		try{
			Mathf::divide(100,0);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error deleni"));
		}
	}
	SECTION("checkFactorial"){
		REQUIRE(Mathf::factorial(3)==6);
		REQUIRE(Mathf::factorial(0)==1);
		bool err=false;
		try{
			Mathf::factorial(-2);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error factorial"));
		}
		
	}
	SECTION("checkPower"){
		REQUIRE(Mathf::power(2,2)==4);
		REQUIRE(Mathf::power(2,8)==256);
		bool err=false;
		try{
			Mathf::power(1000,1000000);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error mocnina"));
		}
	}
	SECTION("checkSqrt"){
		REQUIRE(Mathf::sqrt(9)==3);
		REQUIRE(Mathf::sqrt(81)==9);
		bool err=false;
		try{
			Mathf::sqrt(-100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("error odmocnina"));
		}
	}
}