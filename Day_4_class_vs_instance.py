#Day 4 Class vs Instance
class Person:
    def __init__(self,initialAge):
        # Add some more code to run some checks on initialAge
        self.Age=initialAge
    def amIOld(self):
        if (self.Age>=18):
                print("You are old.")
         
        else:
            if ((self.Age>=13) & (self.Age<18)):
                print("You are a teenager.")
            
            else:
                if ((self.Age<13) & (self.Age>=0)):
                    print("You are young.")
        
                else:
                    if (self.Age <0):
                        print("Age is not valid, setting age to 0.")
                        self.Age=0
                        print("You are young.")
        # Do some computations in here and print out the correct statement to the console
    def yearPasses(self):
        # Increment the age of the person in here 
        self.Age=self.Age+1
        