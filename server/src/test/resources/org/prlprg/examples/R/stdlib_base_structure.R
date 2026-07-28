#? stdlib
`structure` <- function (.Data, ...) 
{
    if (is.null(.Data)) 
        warning("Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.\n  Consider 'structure(list(), *)' instead.")
    attrib <- list(...)
    if (length(attrib)) {
        specials <- c(".Dim", ".Dimnames", ".Names", ".Tsp", 
            ".Label")
        attrnames <- names(attrib)
        m <- match(attrnames, specials)
        ok <- !is.na(m)
        if (any(ok)) {
            replace <- c("dim", "dimnames", "names", "tsp", "levels")
            names(attrib)[ok] <- replace[m[ok]]
        }
        if (any(attrib[["class", exact = TRUE]] == "factor") && 
            typeof(.Data) == "double") 
            storage.mode(.Data) <- "integer"
        attributes(.Data) <- c(attributes(.Data), attrib)
    }
    .Data
}

# Examples
structure(1:6, dim = 2:3)

