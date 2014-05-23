#!/usr/bin/env python
# -*- coding: utf-8 -*-

from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
from Cython.Build import cythonize

setup(
    name = 'cython-lab',
    cmdclass = {'build_ext': build_ext},
    ext_modules = cythonize('*.pyx') + [
        Extension("bs", ["badsearch/bs.pyx",
                         "badsearch/search.c"])
    ]
)
