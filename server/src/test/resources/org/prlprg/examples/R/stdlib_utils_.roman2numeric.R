#? stdlib
`.roman2numeric` <- function (x) 
{
    out <- integer(length(x))
    out[ina <- is.na(x) | !nzchar(x)] <- NA
    if (any(ind <- !ina)) {
        y <- toupper(x[ind])
        y <- gsub("CM", "DCCCC", y)
        y <- gsub("CD", "CCCC", y)
        y <- gsub("XC", "LXXXX", y)
        y <- gsub("XL", "XXXX", y)
        y <- gsub("IX", "VIIII", y)
        y <- gsub("IV", "IIII", y)
        ok <- grepl("^M{,3}D?C{,4}L?X{,4}V?I{,4}$", y)
        if (any(!ok)) {
            warning(sprintf(ngettext(sum(!ok), "invalid roman numeral: %s", 
                "invalid roman numerals: %s"), paste(x[ind][!ok], 
                collapse = " ")), domain = NA)
            out[ind][!ok] <- NA
        }
        out[ind][ok] <- vapply(strsplit(y[ok], ""), function(z) as.integer(sum(.romans[match(z, 
            names(.romans))])), integer(1L))
    }
    out
}
