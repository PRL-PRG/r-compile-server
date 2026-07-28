#? stdlib
`rdfragment2text` <- function (rd, html = TRUE) 
{
    if (html) {
        s <- trimws(utils::capture.output(Rd2HTML(rd, fragment = TRUE)))
        i <- which(startsWith(s, "<p>") & !endsWith(s, "</p>"))
        if (length(i)) {
            z <- s[i]
            j <- which((lengths(gregexpr("</?p>", z))%%2L) > 
                0L)
            if (length(j)) 
                s[i[j]] <- paste0(z[j], "</p>")
        }
        paste(s, collapse = "\n")
    }
    else (trimws(paste(utils::capture.output(Rd2txt(rd, fragment = TRUE)), 
        collapse = "\n")))
}
