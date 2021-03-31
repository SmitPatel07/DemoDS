# A function that returns the length of the value:
def myFunc(e):
  return len(e)

cars = ['Jeep', 'Minicooper', 'Kia', 'Tesla']
cars.sort(key=myFunc)
print(cars)

numbers = [11,22,33,12,13,14]

#ascending sorting.
numbers.sort()
print(numbers)

#descending sorting.
numbers.sort(reverse=True)
print(numbers)
