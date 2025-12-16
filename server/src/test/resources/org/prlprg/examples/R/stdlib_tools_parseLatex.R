#? stdlib
`parseLatex` <- function (text, filename = deparse1(substitute(text)), verbose = FALSE, 
    verbatim = c("verbatim", "verbatim*", "Sinput", "Soutput"), 
    verb = "\\Sexpr") 
{
    srcfile <- srcfilecopy(filename, text, file.mtime(filename))
    text <- paste(text, collapse = "\n")
    .External2(C_parseLatex, text, srcfile, verbose, as.character(verbatim), 
        as.character(verb))
}

# Examples\donttest{
latex <- parseLatex("fran\\c{c}ais")
deparseLatex(latexToUtf8(latex))
}
