#? stdlib
`.get_namespace_S3_methods_with_homes` <- function (package, lib.loc = NULL) 
{
    path <- system.file(package = package, lib.loc = lib.loc)
    if (!nzchar(path)) 
        return(NULL)
    if (package == "base") {
        len <- nrow(.S3_methods_table)
        return(list2DF(list(generic = .S3_methods_table[, 1L], 
            home = rep_len("base", len), class = .S3_methods_table[, 
                2L], delayed = rep_len(FALSE, len))))
    }
    lib.loc <- dirname(path)
    nsinfo <- parseNamespaceFile(package, lib.loc)
    S3methods <- nsinfo$S3methods
    if (!length(S3methods)) 
        return(NULL)
    tab <- NULL
    ind <- is.na(S3methods[, 4L])
    if (!all(ind)) {
        pos <- which(!ind)
        tab <- list2DF(list(generic = S3methods[pos, 1L], home = S3methods[pos, 
            4L], class = S3methods[pos, 2L], delayed = rep_len(TRUE, 
            length(pos))))
        S3methods <- S3methods[ind, , drop = FALSE]
    }
    generic <- S3methods[, 1L]
    nsenv <- loadNamespace(package, lib.loc)
    generics <- unique(generic)
    homes <- character(length(generics))
    ind <- is.na(match(generics, .get_S3_group_generics()))
    homes[ind] <- unlist(lapply(generics[ind], function(f) {
        f <- get(f, nsenv)
        getNamespaceName(topenv(environment(f)))
    }), use.names = FALSE)
    homes[!ind] <- "base"
    rbind(list2DF(list(generic = generic, home = homes[match(generic, 
        generics)], class = S3methods[, 2L], delayed = rep_len(FALSE, 
        length(generic)))), tab)
}
