#? stdlib
`dQuote` <- function (x, q = getOption("useFancyQuotes")) 
{
    if (!length(x)) 
        return(character())
    before <- after <- "\""
    if (!is.null(q)) {
        if (isTRUE(q)) {
            li <- l10n_info()
            if (li$"UTF-8") 
                q <- "UTF-8"
            if (!is.null(li$codepage) && li$codepage > 0L) {
                if (li$codepage >= 1250L && li$codepage <= 1258L || 
                  li$codepage == 874L) {
                  before <- rawToChar(as.raw(147))
                  after <- rawToChar(as.raw(148))
                }
                else {
                  z <- iconv(c("“", "”"), "UTF-8", "")
                  before <- z[1L]
                  after <- z[2L]
                }
            }
        }
        if (identical(q, "TeX")) {
            before <- "``"
            after <- "''"
        }
        if (identical(q, "UTF-8")) {
            before <- "“"
            after <- "”"
        }
        if (is.character(q) && length(q) >= 4L) {
            before <- q[3L]
            after <- q[4L]
        }
    }
    paste0(before, x, after)
}
