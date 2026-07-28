#? stdlib
`factor.scope` <- function (factor, scope) 
{
    drop <- scope$drop
    add <- scope$add
    if (length(factor) && !is.null(drop)) {
        nmdrop <- colnames(drop)
        facs <- factor
        if (length(drop)) {
            nmfac <- colnames(factor)
            nmfac0 <- sapply(strsplit(nmfac, ":", fixed = TRUE), 
                function(x) paste(sort(x), collapse = ":"))
            nmdrop0 <- sapply(strsplit(nmdrop, ":", fixed = TRUE), 
                function(x) paste(sort(x), collapse = ":"))
            where <- match(nmdrop0, nmfac0, 0L)
            if (any(!where)) 
                stop(sprintf(ngettext(sum(where == 0), "lower scope has term %s not included in model", 
                  "lower scope has terms %s not included in model"), 
                  paste(sQuote(nmdrop[where == 0]), collapse = ", ")), 
                  domain = NA)
            facs <- factor[, -where, drop = FALSE]
            nmdrop <- nmfac[-where]
        }
        else nmdrop <- colnames(factor)
        if (ncol(facs) > 1) {
            keep <- rep.int(TRUE, ncol(facs))
            f <- crossprod(facs > 0)
            for (i in seq(keep)) keep[i] <- max(f[i, -i]) != 
                f[i, i]
            nmdrop <- nmdrop[keep]
        }
    }
    else nmdrop <- character()
    if (!length(add)) 
        nmadd <- character()
    else {
        nmfac <- colnames(factor)
        nmadd <- colnames(add)
        if (!is.null(nmfac)) {
            nmfac0 <- sapply(strsplit(nmfac, ":", fixed = TRUE), 
                function(x) paste(sort(x), collapse = ":"))
            nmadd0 <- sapply(strsplit(nmadd, ":", fixed = TRUE), 
                function(x) paste(sort(x), collapse = ":"))
            where <- match(nmfac0, nmadd0, 0L)
            if (any(!where)) 
                stop(sprintf(ngettext(sum(where == 0), "upper scope has term %s not included in model", 
                  "upper scope has terms %s not included in model"), 
                  paste(sQuote(nmdrop[where == 0]), collapse = ", ")), 
                  domain = NA)
            nmadd <- nmadd[-where]
            add <- add[, -where, drop = FALSE]
        }
        if (ncol(add) > 1) {
            keep <- rep.int(TRUE, ncol(add))
            f <- crossprod(add > 0)
            for (i in seq(keep)) keep[-i] <- keep[-i] & (f[i, 
                -i] < f[i, i])
            nmadd <- nmadd[keep]
        }
    }
    list(drop = nmdrop, add = nmadd)
}

# Examples
add.scope( ~ a + b + c + a:b,  ~ (a + b + c)^3)
# [1] "a:c" "b:c"
drop.scope( ~ a + b + c + a:b)
# [1] "c"   "a:b"

