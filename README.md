# Lab03
Jacob Silva
Lab3
Cosc 2030

2) Overflow can be detected in this process by looking for the sum= a negative value. The value of n that produces overflow is
n=256.

3) Using type long
65000= 2112532500
65500= 2145157750
65555= -2146205506 Therefore overflow detected
65540=  -2147188726 Therefore overflow detected
65530 =  2147123215
65535= 2147450880
65536=  -2147450880 Overflow detected
Upper Limit is n=65536.

4) Testing for overflow on factiorial function that utilizes long and float:
100=inf // inf is used to signify overflow in this function
99=inf
50=inf
40=inf
30=2.65253e+32
35=inf
34= 2.95233e+38
Therefore the value in which overflow is caused in this function is n=35.

5) Using type double instead of float:
100= 9.33262e+157
200=inf
190=inf
180=inf
175=inf
170=7.25742e+306
171=inf
Therefore overflow is caused at n=171.

6) The expected value if n=2 and the computations are exact is 0. With the ratio stored as a float, the value returned if n=2 is .5
But when n=2 and the value is stored as a double the function returns the correct result of 0.

7) The numeric error occurs in the for() statement. The code is supposed to stop when it is less than 4.4 yet it still add .2 to
i resulting in the last i value=4.4

When i is changed to a double, the loop runs correctly having the last i value as 4.2. Never going over 4.4.
