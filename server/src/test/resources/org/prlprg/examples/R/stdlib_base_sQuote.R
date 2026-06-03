#? stdlib
`sQuote` <- function (x, q = getOption("useFancyQuotes")) 
{
    if (!length(x)) 
        return(character())
    before <- after <- "'"
    if (!is.null(q)) {
        if (isTRUE(q)) {
            li <- l10n_info()
            if (li$"UTF-8") 
                q <- "UTF-8"
            if (!is.null(li$codepage) && li$codepage > 0L) {
                if (li$codepage >= 1250L && li$codepage <= 1258L || 
                  li$codepage == 874L) {
                  before <- rawToChar(as.raw(145))
                  after <- rawToChar(as.raw(146))
                }
                else {
                  z <- iconv(c("‘", "’"), "UTF-8", "")
                  before <- z[1L]
                  after <- z[2L]
                }
            }
        }
        if (identical(q, "TeX")) {
            before <- "`"
            after <- "'"
        }
        if (identical(q, "UTF-8")) {
            before <- "‘"
            after <- "’"
        }
        if (is.character(q) && length(q) >= 4L) {
            before <- q[1L]
            after <- q[2L]
        }
    }
    paste0(before, x, after)
}

# Examples
op <- options("useFancyQuotes")
paste("argument", sQuote("x"), "must be non-zero")
options(useFancyQuotes = FALSE)
cat("\ndistinguish plain", sQuote("single"), "and",
    dQuote("double"), "quotes\n")
options(useFancyQuotes = TRUE)
cat("\ndistinguish fancy", sQuote("single"), "and",
    dQuote("double"), "quotes\n")
options(useFancyQuotes = "TeX")
cat("\ndistinguish TeX", sQuote("single"), "and",
    dQuote("double"), "quotes\n")
if(l10n_info()$`Latin-1`) {
    options(useFancyQuotes = c("\xab", "\xbb", "\xbf", "?"))
    cat("\n", sQuote("guillemet"), "and",
        dQuote("Spanish question"), "styles\n")
} else if(l10n_info()$`UTF-8`) {
    options(useFancyQuotes = c("\xc2\xab", "\xc2\xbb", "\xc2\xbf", "?"))
    cat("\n", sQuote("guillemet"), "and",
        dQuote("Spanish question"), "styles\n")
}
options(op)

