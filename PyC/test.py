from ctypes import *
import os


if os.name == 'posix': # on linux 
	lib = cdll.LoadLibrary("./lib.so")
elif os.name == 'nt': # on windows
	lib = cdll.LoadLibrary("lib.dll")

lib.test_print()
print(lib.add(1, 2))

# Calling function with a structure 
class PyStruct(Structure):
	# fields are defined by tuple with (fieldname, c_type)
	__fields__ = [("str",c_char_p),
				  ("num",c_int)]

p = PyStruct()
p.str = "This is a test"
p.num = 42
lib.show_struct(byref(p))