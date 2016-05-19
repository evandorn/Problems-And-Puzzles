"""
SoE.py - A program to find all prime numbers less than 100000 using the Sieve of Eratosthenes algorithm
"""

"""
Returns a list of all primes < 100001.
"""

nums = [True for x in xrange(100001)]
primes = []

for i in xrange(2, 100001):
	if nums[i]:
		primes.append(i)
    	for j in xrange(2*i, 100001, i):
    		nums[j] = False

print primes
