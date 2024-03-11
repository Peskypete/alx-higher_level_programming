#!/usr/bin/node
const number = parseInt(process.argv[2]);
if (!isNaN(number) && Number.isInteger(number))
{
	for (let i = 0; i < number; i++)
	{
		let row = '';
		for (let k = 0; k < number; k++)
		{
			row += 'X';
		}
		console.log(row);
	}
} else {
	console.log("Missing size");
}
