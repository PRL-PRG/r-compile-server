#? stdlib
`encoded_text_to_latex` <- function (x, encoding = c("latin1", "latin2", "latin9", "UTF-8", 
    "utf8")) 
{
    encoding <- match.arg(encoding)
    do_latin1 <- function(x) {
        xx <- charToRaw(x)
        paste(latin1table[as.integer(xx)], collapse = "")
    }
    do_latin2 <- function(x) {
        xx <- charToRaw(x)
        paste(latin2table[as.integer(xx)], collapse = "")
    }
    do_latin9 <- function(x) {
        xx <- charToRaw(x)
        paste(latin9table[as.integer(xx)], collapse = "")
    }
    do_utf8 <- function(x) {
        xx <- utf8ToInt(x)
        y <- rep.int("?", length(xx))
        y[xx < 512] <- utf8table[xx[xx < 512]]
        y[xx == 710] <- "{\\textasciicircum}"
        y[xx == 711] <- "{\\textasciicaron}"
        y[xx == 714] <- "{\\textasciitilde}"
        y[xx == 728] <- "{\\textasciibreve}"
        y[xx == 729] <- "{\\textperiodcentered}"
        y[xx == 733] <- "{\\textacutedbl}"
        y[xx == 8204] <- "{\\textcompwordmark}"
        y[xx == 8216] <- "{\\textquoteleft}"
        y[xx == 8217] <- "{\\textquoteright}"
        y[xx == 8220] <- "{\\textquotedblleft}"
        y[xx == 8221] <- "{\\textquotedblright}"
        y[xx == 8224] <- "{\\textdagger}"
        y[xx == 8226] <- "{\\textbullet}"
        y[xx == 8230] <- "{\\textellipsis}"
        y[xx == 8364] <- "{\\texteuro}"
        paste(y, collapse = "")
    }
    as.vector(switch(encoding, latin1 = sapply(x, do_latin1), 
        latin2 = sapply(x, do_latin2), latin9 = sapply(x, do_latin9), 
        `UTF-8` = sapply(x, do_utf8), utf8 = sapply(x, do_utf8), 
        stop("unimplemented encoding")))
}

# Examples
x <- "fran\xE7ais"
encoded_text_to_latex(x, "latin1")

