var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let R = parseFloat(lines.shift());
let volume = 4/3 * 3.14159 * R * R * R;

console.log("VOLUME = " + volume.toFixed(3));
