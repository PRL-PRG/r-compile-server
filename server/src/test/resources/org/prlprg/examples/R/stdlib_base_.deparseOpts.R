#? stdlib
`.deparseOpts` <- function (control) 
{
    if (!length(control)) 
        return(0)
    opts <- pmatch(as.character(control), ..deparseOpts)
    if (anyNA(opts)) 
        stop(sprintf(ngettext(as.integer(sum(is.na(opts))), "deparse option %s is not recognized", 
            "deparse options %s are not recognized"), paste(sQuote(control[is.na(opts)]), 
            collapse = ", ")), call. = FALSE, domain = NA)
    if (any(opts == 1L)) {
        if (any(opts == 13L)) 
            stop("\"all\" and \"exact\" are mutually exclusive")
        opts <- unique(c(opts[opts != 1L], 2:6, 8L, if (!any(opts == 
            10L)) 11L, 12L))
    }
    else if (any(opts == 13L)) {
        opts <- unique(c(opts[opts != 13L], 2:6, 8L, 10L, 12L))
    }
    if (10L %in% opts && 11L %in% opts) 
        stop("\"hexNumeric\" and \"digits17\" are mutually exclusive")
    sum(2^(opts - 2))
}
