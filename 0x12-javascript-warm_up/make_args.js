#!/usr/bin/node
console.log('Command-line arguments:', process.argv);

// Accessing individual arguments
console.log('Path to Node.js executable:', process.argv[0]);
console.log('Path to the script being executed:', process.argv[1]);
console.log(process.argv.length);
