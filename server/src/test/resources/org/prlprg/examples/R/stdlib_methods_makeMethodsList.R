#? stdlib
`makeMethodsList` <- function (object, level = 1) 
{
    .MlistDefunct("makeMethodsList()")
    mnames <- allNames(object)
    if (.noMlists()) {
        keep <- mnames %in% c("", "ANY")
        mnames <- mnames[keep]
        object <- object[keep]
    }
    value <- new("MethodsList")
    i <- match("", mnames)
    if (!is.na(i)) {
        mnames[[i]] <- "ANY"
        names(object) <- mnames
    }
    if (anyDuplicated(mnames)) 
        stop(gettextf("duplicate element names in 'MethodsList' at level %d: %s", 
            level, paste("\"", unique(mnames[duplicated(mnames)]), 
                "\"", collapse = ", ")), domain = NA)
    for (i in seq_along(object)) {
        eli <- object[[i]]
        if (is.function(eli) || is(eli, "MethodsList")) {
        }
        else if (is(eli, "list") || is(eli, "named")) 
            object[[i]] <- Recall(eli, NULL, level + 1)
        else stop(gettextf("element %d at level %d (class %s) cannot be interpreted as a function or named list", 
            i, level, dQuote(class(eli))), domain = NA)
    }
    slot(value, "methods") <- object
    value
}
