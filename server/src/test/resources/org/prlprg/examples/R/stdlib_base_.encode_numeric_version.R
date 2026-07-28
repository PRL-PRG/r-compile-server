#? stdlib
`.encode_numeric_version` <- function (x) 
{
    strlpad <- function(x, char, width) paste0(strrep(char, width - 
        nchar(x)), x)
    strrpad <- function(x, char, width) paste0(x, strrep(char, 
        width - nchar(x)))
    if (!is.numeric_version(x)) 
        stop("wrong class")
    classes <- class(x)
    nms <- names(x)
    x <- unclass(x)
    lens <- lengths(x)
    y <- lapply(x, function(e) sprintf("%o", e))
    width <- max(nchar(unlist(y)), 0L)
    y <- vapply(y, function(e) paste(strlpad(e, "0", width), 
        collapse = ""), "")
    y <- strrpad(y, "0", max(nchar(y), 0L))
    structure(ifelse(lens > 0L, y, NA_character_), width = width, 
        lens = lens, .classes = classes, names = nms)
}
