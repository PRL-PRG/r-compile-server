#? stdlib
`SweaveTeXFilter` <- function (ifile, encoding = "unknown") 
{
    if (inherits(ifile, "srcfile")) 
        ifile <- ifile$filename
    syntax <- utils:::SweaveGetSyntax(ifile)
    lines <- readLines(ifile, warn = FALSE)
    if (encoding != "unknown") {
        if (encoding == "UTF-8") 
            Encoding(lines) <- "UTF-8"
        else lines <- iconv(lines, encoding, "", sub = "byte")
    }
    TEXT <- 1L
    CODE <- 0L
    dpos <- grep(syntax$doc, lines)
    cpos <- grep(syntax$code, lines)
    recs <- list2DF(list(line = c(dpos, cpos), type = c(rep.int(TEXT, 
        length(dpos)), rep.int(CODE, length(cpos)))))
    recs <- recs[order(recs$line), ]
    last <- 0L
    state <- TEXT
    for (i in seq_len(nrow(recs))) {
        line <- recs$line[i]
        if (state == CODE) 
            lines[(last + 1L):line] <- ""
        else lines[line] <- ""
        state <- recs$type[i]
        last <- line
    }
    lines
}

# Examples
