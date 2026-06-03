#? stdlib
`.pretty_format` <- function (x, collapse = " ", q = getOption("useFancyQuotes")) 
.strwrap22(sQuote(x, q = q), collapse = collapse)
