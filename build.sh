#! /bin/bash

pdflatex -shell-escape -interaction=nonstopmode mpp.tex && bibtex mpp && pdflatex -shell-escape -interaction=nonstopmode mpp.tex && pdflatex -shell-escape -interaction=nonstopmode mpp.tex
