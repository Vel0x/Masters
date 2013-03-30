#! /bin/bash

pdflatex -shell-escape -interaction=nonstopmode mpp1.tex && bibtex mpp1 && pdflatex -shell-escape -interaction=nonstopmode mpp1.tex && pdflatex -shell-escape -interaction=nonstopmode mpp1.tex
