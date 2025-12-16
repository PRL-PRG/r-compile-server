#? stdlib
`transform.bibentry` <- function (`_data`, ...) 
{
    tags <- unique(unlist(lapply(unclass(`_data`), names)))
    vals <- lapply(tags, function(e) eval(call("$", `_data`, 
        e)))
    names(vals) <- tags
    e <- eval(substitute(list(...)), vals, parent.frame())
    for (i in setdiff(names(e), c("mheader", "mfooter"))) {
        `_data` <- eval(call("$<-", `_data`, i, e[[i]]))
    }
    if ("mheader" %in% names(e)) 
        attr(`_data`, "mheader") <- e[["mheader"]]
    if ("mfooter" %in% names(e)) 
        attr(`_data`, "mfooter") <- e[["mfooter"]]
    return(`_data`)
}
