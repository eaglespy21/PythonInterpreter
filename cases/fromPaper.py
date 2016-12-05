x = 7
def f():
  x = 99
  x += 1
  print x
print x
f()
x = 7
def f():
  x =99
  x +=1
  print x
  return x
f()
print x
x = 9
def f():
  x = 17
  print x
  global x 
  x += 1
f()
print x
