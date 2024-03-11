#!/usr/bin/node
const arg = process.argv[2];
const number = parseInt(arg);
if (!isNaN(number) && Number.isInteger(number))
{
	console.log("My number: ", number);
} else{
	console.log("Not a number");
}
