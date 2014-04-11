#! /bin/bash

pdflatex -shell-escape -interaction=nonstopmode mpp2.tex && bibtex mpp2 && pdflatex -shell-escape -interaction=nonstopmode mpp2.tex && pdflatex -shell-escape -interaction=nonstopmode mpp2.tex
