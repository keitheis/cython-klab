#!/usr/bin/env python
# -*- coding: utf-8 -*-

import hello

print hello.hello_def()
print hello.hello_def('Mosky')
print

# AttributeError
#print hello.hello_cdef()
#print hello.hello_cdef('Mosky')

import use_hello_in_pyx
