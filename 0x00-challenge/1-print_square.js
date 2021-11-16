#!/usr/bin/node

if (process.argv.length <= 2) {
    process.stderr.write('Something is missing\n');
    process.stderr.write('Use: ./1-print_square.js <width>\n');
    process.stderr.write('Exercise: ./1-print_square.js 8\n');
    process.exit(1);
}

const width = parseInt(process.argv[2]);

for (let i = 0; i < width; i++) {
    for (let j = 0; j < width; j++) {
        process.stdout.write('#');
    }
    process.stdout.write('\n');
}