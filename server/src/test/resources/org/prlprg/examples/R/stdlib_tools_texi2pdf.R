#? stdlib
`texi2pdf` <- function (file, clean = FALSE, quiet = TRUE, texi2dvi = getOption("texi2dvi"), 
    texinputs = NULL, index = TRUE) 
texi2dvi(file = file, pdf = TRUE, clean = clean, quiet = quiet, 
    texi2dvi = texi2dvi, texinputs = texinputs, index = index)
