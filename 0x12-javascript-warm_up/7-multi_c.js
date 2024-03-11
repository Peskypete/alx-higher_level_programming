#!/usr/bin/node
const number = parseInt(process.argv[2]);
const message = "C is fun";
if (!isNaN(number) && Number.isInteger(number))
{
	for (let i = 0; i < number; i++)
	{
		console.log(message);
	}
}else
{
	console.log("Missing number of occurrences");
}
