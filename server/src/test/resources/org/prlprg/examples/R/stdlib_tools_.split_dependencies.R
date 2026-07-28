#? stdlib
`.split_dependencies` <- function (x) 
{
    if (!length(x)) 
        return(list())
    x <- unlist(strsplit(x, ","))
    x <- sub("[[:space:]]+$", "", x)
    x <- unique(sub("^[[:space:]]*(.*)", "\\1", x))
    names(x) <- sub("^([[:alnum:].]+).*$", "\\1", x)
    lapply(x, .split_op_version)
}
