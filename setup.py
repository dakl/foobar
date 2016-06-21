#!/usr/bin/env python

import sys
import os
try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup

here = os.path.abspath(os.path.dirname(__file__))
README = open(os.path.join(here, 'README.md')).read()

setup(name='foobar',
      version='0.0.1',
      description='',
      long_description=README,
      author='',
      author_email='',
      url='',
      py_modules=['foobar'],
      scripts=['foobar.py'],
      license='',
#      install_requires=['other_package_name'],
     )
