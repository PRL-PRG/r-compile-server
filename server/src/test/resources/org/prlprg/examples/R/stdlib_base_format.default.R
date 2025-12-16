#? stdlib
`format.default` <- function (x, trim = FALSE, digits = NULL, nsmall = 0L, justify = c("left", 
    "right", "centre", "none"), width = NULL, na.encode = TRUE, 
    scientific = NA, big.mark = "", big.interval = 3L, small.mark = "", 
    small.interval = 5L, decimal.mark = getOption("OutDec"), 
    zero.print = NULL, drop0trailing = FALSE, ...) 
{
    justify <- match.arg(justify)
    if (is.list(x)) {
        if (missing(trim)) 
            trim <- TRUE
        if (missing(justify)) 
            justify <- "none"
        res <- lapply(X = x, FUN = function(xx, ...) format.default(unlist(xx), 
            ...), trim = trim, digits = digits, nsmall = nsmall, 
            justify = justify, width = width, na.encode = na.encode, 
            scientific = scientific, big.mark = big.mark, big.interval = big.interval, 
            small.mark = small.mark, small.interval = small.interval, 
            decimal.mark = decimal.mark, zero.print = zero.print, 
            drop0trailing = drop0trailing, ...)
        vapply(res, paste, "", collapse = ", ")
    }
    else {
        switch(mode(x), `NULL` = "NULL", character = {
            adj <- match(justify, c("left", "right", "centre", 
                "none")) - 1L
            .Internal(format(x, trim, digits, nsmall, width, 
                adj, na.encode, scientific, NA_character_))
        }, call = , expression = , `function` = , `(` = deparse(x, 
            backtick = TRUE), name = deparse(x, backtick = FALSE), 
            raw = as.character(x), S4 = {
                cld <- methods::getClassDef(cl <- class(x))
                pkg <- attr(cl, "package")
                paste0("<S4 class ", sQuote(cl), if (!is.null(pkg)) paste0(" [package ", 
                  dQuote(pkg), "]"), if (!is.null(cld) && !is.null(sls <- cld@slots)) paste(" with", 
                  length(sls), if (length(sls) == 1L) "slot" else "slots"), 
                  ">")
            }, numeric = , logical = , complex = , externalptr = , 
            environment = prettyNum(.Internal(format(x, trim, 
                digits, nsmall, width, 3L, na.encode, scientific, 
                decimal.mark)), big.mark = big.mark, big.interval = big.interval, 
                small.mark = small.mark, small.interval = small.interval, 
                decimal.mark = decimal.mark, input.d.mark = decimal.mark, 
                zero.print = zero.print, drop0trailing = drop0trailing, 
                is.cmplx = is.complex(x), preserve.width = if (trim) "individual" else "common"), 
            stop(gettextf("Found no format() method for class \"%s\"", 
                class(x)), domain = NA))
    }
}
