import math
import unittest
import random


#Function wallis

def wallis(n):
    pi = 1
    while n:
        pi *= (4*n**2)/(4*n**2-1)
        n = n-1
    return 2*pi 


class TestWallis(unittest.TestCase):
    def test_low_iters(self):
        for i in range(0, 5):
@@ -13,6 +25,22 @@ def test_high_iters(self):
            self.assertTrue(abs(pi - math.pi) < 0.01, msg=f"Estimate with even {i} iterations is {pi} which is not accurate enough.\n")


# monte_carlo function

def monte_carlo(i):
    n = i
    j = 0
    while n:
        x = random.random()
        y = random.random()
        dist = (x**2+y**2)**0.5
        if dist < 1:
            j = j+1
        n -= 1
    pi = 4*(j/i)
    float wallis_pi(int n) 
{
float ans=1.0;
for(int i=1;i<=n;i++) 
{float nr= 4*i*i;

ans= ans*(nr/(nr-1));

} 

return ans*2; 
}            
    return pi


class TestMC(unittest.TestCase):
    def test_randomness(self):
        pi0 = monte_carlo(15000)
