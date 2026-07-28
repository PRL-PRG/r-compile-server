#? stdlib
`.bibentry_expand_crossrefs` <- function (x, more = list()) 
{
    y <- if (length(more)) 
        do.call(c, c(list(x), more))
    else x
    x <- unclass(x)
    y <- unclass(y)
    crossrefs <- lapply(x, `[[`, "crossref")
    pc <- which(lengths(crossrefs) > 0L)
    if (length(pc)) {
        pk <- match(unlist(crossrefs[pc]), .bibentry_get_key(y))
        ok <- !is.na(pk)
        x[pc[ok]] <- Map(function(u, v) {
            add <- setdiff(names(v), names(u))
            u[add] <- v[add]
            if (!is.na(match(tolower(attr(u, "bibtype")), c("incollection", 
                "inproceedings"))) && is.null(u$booktitle)) 
                u$booktitle <- v$title
            u
        }, x[pc[ok]], y[pk[ok]])
        status <- lapply(x[pc], function(e) tryCatch(.bibentry_check_bibentry1(e, 
            TRUE), error = identity))
        bad <- which(vapply(status, inherits, NA, "error"))
        if (length(bad)) {
            for (b in bad) {
                warning(gettextf("Dropping invalid entry %d:\n%s", 
                  pc[b], conditionMessage(status[[b]])))
            }
            x[pc[bad]] <- NULL
        }
    }
    .bibentry(x)
}
