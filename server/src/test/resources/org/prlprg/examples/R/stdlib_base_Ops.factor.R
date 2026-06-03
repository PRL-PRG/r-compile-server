#? stdlib
`Ops.factor` <- function (e1, e2) 
{
    ok <- switch(.Generic, `==` = , `!=` = TRUE, FALSE)
    if (!ok) {
        warning(gettextf("%s not meaningful for factors", sQuote(.Generic)))
        return(rep.int(NA, max(length(e1), if (!missing(e2)) length(e2))))
    }
    noNA.levels <- function(f) {
        r <- levels(f)
        if (any(ina <- is.na(r))) {
            n <- "  NA "
            while (n %in% r) n <- paste(n, ".")
            r[ina] <- n
        }
        r
    }
    if (nzchar(.Method[1L])) {
        if (!anyNA(levels(e1)) && is.character(e2) && length(e2) == 
            1L) {
            if (.Generic == "==") {
                leq <- (levels(e1) == e2)
                return(leq[e1])
            }
            else {
                leq <- (levels(e1) != e2)
                return(leq[e1])
            }
        }
        l1 <- noNA.levels(e1)
        e1 <- l1[e1]
    }
    if (nzchar(.Method[2L])) {
        if (!anyNA(levels(e2)) && is.character(e1) && length(e1) == 
            1L) {
            if (.Generic == "==") {
                leq <- (levels(e2) == e1)
                return(leq[e2])
            }
            else {
                leq <- (levels(e2) != e1)
                return(leq[e2])
            }
        }
        l2 <- noNA.levels(e2)
        e2 <- l2[e2]
    }
    if (all(nzchar(.Method)) && (length(l1) != length(l2) || 
        !all(sort.int(l2) == sort.int(l1)))) 
        stop("level sets of factors are different")
    value <- NextMethod(.Generic)
    nas <- is.na(e1) | is.na(e2)
    value[nas] <- NA
    value
}
