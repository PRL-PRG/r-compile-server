#? stdlib
`.NamespaceOrEnvironment` <- function (where) 
{
    value <- NULL
    if (is.environment(where)) 
        value <- where
    else if (is.character(where) && nzchar(where)) {
        ns <- .getNamespace(where)
        if (isNamespace(ns)) 
            value <- ns
        else if (where %in% search()) 
            value <- as.environment(where)
        else {
            where <- paste0("package:", where)
            if (where %in% search()) 
                value <- as.environment(where)
        }
    }
    else if (is.numeric(where) && where %in% seq_along(search())) 
        value <- as.environment(where)
    value
}
