#! /bin/bash

pdflatex -shell-escape mpp1.tex && bibtex mpp1 && pdflatex -shell-escape mpp1.tex && pdflatex -shell-escape mpp1.tex
