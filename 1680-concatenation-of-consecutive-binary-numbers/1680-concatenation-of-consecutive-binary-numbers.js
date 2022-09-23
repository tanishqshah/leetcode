var concatenatedBinary = function(n) {
	let sum = 1; // to store the result
	let base = 4; // the number of bits current value is to be shifted
	for(let i=2; i<=n; i++){
		if(i===base) base*=2; // if i reaches the base, double it
		sum = (sum*base + i)%1000000007; 
		// binary of 1 '001' becomes 4 when shifted left twice '100'
		// this is essentially what we do here as we keep on concatinating binaries
		// example, for 3 we have '1' + '10' + '11' = '11011' => 27
		// which can be seen as 10000 + 01000 + 00011 = 1*(2^4) + 2*(2^3) + 3*(2^0)
		// or simply ((1*4) + 2)*4 + 3;
	}
	return sum;
};