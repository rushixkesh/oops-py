temp=float(input("Enter the temperature\n"))

if temp<-273.15:

print("the temperature is invalid") 

elif temp==-273.51:

print("the temperature is absolute 0") 

elif(temp>-273.51 and temp<0):

print("the temperature is below freezing.") 

elif temp==0:

print("Temperature is at freezing point.") 

elif(temp>0 and temp<100):

print("the temperature is in the normal range.") 

elif temp==100:

print("temperature is at the boiling point.") 

elif temp>100:

print(" the temperature is above the boiling point.")
