#? stdlib
`get_all_vars` <- function (formula, data = NULL, ...) 
{
    if (missing(formula)) {
        if (!missing(data) && inherits(data, "data.frame") && 
            length(attr(data, "terms"))) 
            return(data)
        formula <- as.formula(data)
    }
    else if (missing(data) && inherits(formula, "data.frame")) {
        if (length(attr(formula, "terms"))) 
            return(formula)
        data <- formula
        formula <- as.formula(data)
    }
    formula <- as.formula(formula)
    if (missing(data)) 
        data <- environment(formula)
    else if (!is.data.frame(data) && !is.environment(data) && 
        !is.null(attr(data, "class"))) 
        data <- as.data.frame(data)
    else if (is.array(data)) 
        stop("'data' must be a data.frame, not a matrix or an array")
    if (!is.data.frame(data) && !is.environment(data) && !is.list(data) && 
        !is.null(data)) 
        stop("'data' must be a data.frame, environment, or list")
    if (!inherits(formula, "terms")) 
        formula <- terms(formula, data = data)
    env <- environment(formula)
    rownames <- .row_names_info(data, 0L)
    varnames <- all.vars(formula)
    variables <- lapply(lapply(varnames, as.name), eval, data, 
        env)
    if (is.null(rownames) && (resp <- attr(formula, "response")) > 
        0) {
        lhs <- variables[[resp]]
        rownames <- if (!is.null(d <- dim(lhs)) && length(d) == 
            2L) {
            if (is.data.frame(lhs)) 
                .row_names_info(lhs, 0L)
            else rownames(lhs)
        }
        else names(lhs)
    }
    extras <- substitute(list(...))
    extranames <- names(extras[-1L])
    extras <- eval(extras, data, env)
    x <- c(variables, extras)
    if (anyM <- any(isM <- vapply(x, function(o) is.matrix(o) && 
        !inherits(o, "AsIs"), NA))) 
        x[isM] <- lapply(x[isM], I)
    nms.x <- c(varnames, extranames)
    if (any(vapply(x, is.data.frame, NA))) 
        nms.x <- unlist(lapply(seq_along(x), function(i) if (is.list(x[[i]])) 
            names(x[[i]])
        else nms.x[[i]]))
    x <- as.data.frame(x, optional = TRUE)
    names(x) <- nms.x
    if (anyM) 
        x[isM] <- lapply(x[isM], function(o) `class<-`(o, class(o)[class(o) != 
            "AsIs"]))
    attr(x, "row.names") <- rownames %||% .set_row_names(max(vapply(x, 
        NROW, integer(1))))
    x
}
