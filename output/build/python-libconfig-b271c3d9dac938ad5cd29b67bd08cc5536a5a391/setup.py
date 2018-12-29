# -*- coding: utf-8 -*-

from setuptools import setup, find_packages, Extension
import sys, os

boostlib = "boost_python3"
if sys.version_info < (3, 0):
    boostlib = "boost_python"

setup(
    name				= 'pylibconfig',
    description			= "libconfig bindings for Python",
    version				= "0.0.1",
    author				= "Sergey S. Gogin",
    author_email		= "d-x@bk.ru",
	maintainer			= "cnangel",
	maintainer_email	= "cnangel@gmail.com",
    keywords			= "libconfig libconfig++ boost python config configuration",
    test_suite			= "tests",
	license				= "bsd",
	url					= "",
    ext_modules			= [
        Extension(
            "pylibconfig",
            ["src/pylibconfig.cc"],
            libraries=[boostlib, "config++"]
            #include_dirs=includes,
            #extra_link_args=lflags
                 )
                ]
     )
