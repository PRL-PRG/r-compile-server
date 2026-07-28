#? stdlib
`gregexec` <- function (pattern, text, ignore.case = FALSE, perl = FALSE, fixed = FALSE, 
    useBytes = FALSE) 
{
    if (is.factor(text) && length(levels(text)) < length(text)) {
        out <- gregexec(pattern, c(levels(text), NA_character_), 
            ignore.case, perl, fixed, useBytes)
        outna <- out[length(out)]
        out <- out[text]
        out[is.na(text)] <- outna
        return(out)
    }
    dat <- gregexpr(pattern = pattern, text = text, ignore.case = ignore.case, 
        fixed = fixed, useBytes = useBytes, perl = perl)
    if (perl && !fixed) {
        capt.attr <- c("capture.start", "capture.length", "capture.names")
        process <- function(x) {
            if (anyNA(x) || any(x < 0)) 
                y <- x
            else {
                y <- t(cbind(x, attr(x, "capture.start")))
                attributes(y)[names(attributes(x))] <- attributes(x)
                ml <- t(cbind(attr(x, "match.length"), attr(x, 
                  "capture.length")))
                nm <- attr(x, "capture.names")
                dimnames(ml) <- dimnames(y) <- if (any(nzchar(nm))) 
                  list(c("", nm), NULL)
                attr(y, "match.length") <- ml
                y
            }
            attributes(y)[capt.attr] <- NULL
            y
        }
        lapply(dat, process)
    }
    else {
        m1 <- lapply(regmatches(text, dat), regexec, pattern = pattern, 
            ignore.case = ignore.case, perl = perl, fixed = fixed, 
            useBytes = useBytes)
        mlen <- lengths(m1)
        res <- vector("list", length(m1))
        im <- mlen > 0
        res[!im] <- dat[!im]
        res[im] <- Map(function(outer, inner) {
            tmp <- do.call(cbind, inner)
            attributes(tmp)[names(attributes(inner))] <- attributes(inner)
            attr(tmp, "match.length") <- do.call(cbind, lapply(inner, 
                attr, "match.length"))
            attr(tmp, "useBytes") <- attr(outer, "useBytes")
            attr(tmp, "index.type") <- attr(outer, "index.type")
            tmp + rep(outer - 1L, each = nrow(tmp))
        }, dat[im], m1[im])
        res
    }
}
