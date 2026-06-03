#? stdlib
`regexec` <- function (pattern, text, ignore.case = FALSE, perl = FALSE, fixed = FALSE, 
    useBytes = FALSE) 
{
    if (is.factor(text) && length(levels(text)) < length(text)) {
        out <- regexec(pattern, c(levels(text), NA_character_), 
            ignore.case, perl, fixed, useBytes)
        outna <- out[length(out)]
        out <- out[text]
        out[is.na(text)] <- outna
        return(out)
    }
    if (!is.character(text)) 
        text <- as.character(text)
    if (!perl || fixed) {
        if (perl) 
            warning(gettextf("argument '%s' will be ignored", 
                "perl = TRUE"), domain = NA)
        return(.Internal(regexec(as.character(pattern), text, 
            ignore.case, fixed, useBytes)))
    }
    m <- regexpr(pattern, text, ignore.case = ignore.case, useBytes = useBytes, 
        perl = TRUE)
    nm <- attr(m, "capture.names")
    nm <- if (any(nzchar(nm))) 
        c("", nm)
    match_data_from_pos_and_len <- function(pos, len, nm = NULL) {
        attr(pos, "match.length") <- len
        names(pos) <- nm
        pos
    }
    y <- vector("list", length(text))
    y[is.na(m)] <- list(match_data_from_pos_and_len(NA_integer_, 
        NA_integer_))
    ind <- !is.na(m) & (m == -1L)
    if (any(ind)) {
        y[ind] <- list(match_data_from_pos_and_len(-1L, -1L))
    }
    ind <- !is.na(m) & !ind
    if (any(ind)) {
        pos <- cbind(m[ind], attr(m, "capture.start")[ind, , 
            drop = FALSE])
        len <- cbind(attr(m, "match.length")[ind], attr(m, "capture.length")[ind, 
            , drop = FALSE])
        y[ind] <- Map(match_data_from_pos_and_len, split(pos, 
            row(pos)), split(len, row(len)), list(nm))
    }
    if (identical(attr(m, "useBytes"), TRUE)) 
        y <- lapply(y, `attr<-`, "useBytes", TRUE)
    lapply(y, `attr<-`, "index.type", attr(m, "index.type"))
}
