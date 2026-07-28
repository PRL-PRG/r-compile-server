#? stdlib
`inferProperties` <- function (props, what) 
{
    .validPropNames <- function(propNames) {
        n <- length(props)
        if (!n) 
            return(character())
        else if (is.null(propNames)) 
            stop(gettextf("No %s names supplied", what), domain = NA, 
                call. = FALSE)
        else if (!all(nzchar(propNames))) 
            stop(gettextf("All %s names must be nonempty in:\n(%s)", 
                what, paste(sQuote(propNames), collapse = ", ")), 
                domain = NA, call. = FALSE)
        else if (any(duplicated(propNames))) 
            stop(gettextf("All %s names must be distinct in:\n(%s)", 
                what, paste(sQuote(propNames), collapse = ", ")), 
                domain = NA, call. = FALSE)
        propNames
    }
    if (is.character(props)) {
        propNames <- names(props)
        if (is.null(propNames)) {
            propNames <- .validPropNames(props)
            props <- as.list(rep("ANY", length(props)))
            names(props) <- propNames
        }
        else {
            .validPropNames(propNames)
            props <- as.list(props)
        }
    }
    else if (is.list(props)) {
        if (length(props) > 0) 
            .validPropNames(names(props))
    }
    else stop(gettextf("argument %s must be a list or a character vector; got an object of class %s", 
        dQuote(what), dQuote(class(fields))), domain = NA)
    props
}
