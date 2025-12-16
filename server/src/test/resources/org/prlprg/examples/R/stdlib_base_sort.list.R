#? stdlib
`sort.list` <- function (x, partial = NULL, na.last = TRUE, decreasing = FALSE, 
    method = c("auto", "shell", "quick", "radix")) 
{
    decreasing <- as.logical(decreasing)
    if (is.null(partial) && is.numeric(x) && !is.object(x) && 
        length(x) > 0) {
        if (.Internal(sorted_fpass(x, decreasing, na.last))) 
            return(seq_along(x))
    }
    method <- match.arg(method)
    if (method == "auto" && (is.numeric(x) || is.factor(x) || 
        is.logical(x) || (is.object(x) && !is.atomic(x))) && 
        is.integer(length(x))) 
        method <- "radix"
    if (!is.null(partial)) 
        .NotYetUsed("partial != NULL")
    if (method == "quick") {
        if (is.factor(x)) 
            x <- as.integer(x)
        if (is.numeric(x)) 
            return(sort(x, na.last = na.last, decreasing = decreasing, 
                method = "quick", index.return = TRUE)$ix)
        else stop("method = \"quick\" is only for numeric 'x'")
    }
    if (is.na(na.last)) {
        x <- x[!is.na(x)]
        na.last <- TRUE
    }
    if (method == "radix") {
        return(order(x, na.last = na.last, decreasing = decreasing, 
            method = "radix"))
    }
    if (!is.atomic(x)) 
        stop("'x' must be atomic for 'sort.list', method \"shell\" and \"quick\"\nHave you called 'sort' on a list?")
    .Internal(order(na.last, decreasing, x))
}
