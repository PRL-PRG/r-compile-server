#? stdlib
`.check_S3_methods_needing_delayed_registration` <- function (package, lib.loc = NULL) 
{
    mat <- matrix(character(), 0L, 3L, dimnames = list(NULL, 
        c("Package", "Generic", "Method")))
    out <- list(mat = mat, bad = character())
    class(out) <- "check_S3_methods_needing_delayed_registration"
    if (length(package) != 1L) 
        stop("argument 'package' must be of length 1")
    if (package == "base") 
        return()
    dir <- find.package(package, lib.loc)
    if (!dir.exists(file.path(dir, "R"))) 
        return()
    db <- .read_description(file.path(dir, "DESCRIPTION"))
    suggests <- unname(.get_requires_from_package_db(db, "Suggests"))
    if (!length(suggests)) 
        return()
    reg <- parseNamespaceFile(package, dirname(dir))$S3methods
    reg <- reg[!is.na(reg[, 4L]), , drop = FALSE]
    if (length(reg)) 
        out$reg <- cbind(Package = reg[, 4L], Generic = reg[, 
            1L], Class = reg[, 2L], Method = reg[, 3L])
    .load_namespace_quietly(package, dirname(dir))
    code_env <- asNamespace(package)
    ok <- vapply(suggests, requireNamespace, quietly = TRUE, 
        FUN.VALUE = NA)
    out$bad <- suggests[!ok]
    suggests <- suggests[ok]
    generics <- lapply(suggests, .get_S3_generics_in_ns_exports)
    packages <- rep.int(suggests, lengths(generics))
    generics <- unlist(generics, use.names = FALSE)
    code_env <- .package_env(package)
    objects_in_code <- sort(names(code_env))
    functions_in_code <- Filter(function(f) is.function(code_env[[f]]), 
        objects_in_code)
    ind <- (generics %notin% c(Filter(function(f) .is_S3_generic(f, 
        code_env), functions_in_code), .get_S3_generics_in_env(parent.env(code_env)), 
        .get_S3_generics_in_base()))
    if (!all(ind)) {
        generics <- generics[ind]
        packages <- packages[ind]
    }
    methods_stop_list <- nonS3methods(basename(dir))
    methods <- lapply(generics, function(g) {
        i <- startsWith(functions_in_code, paste0(g, "."))
        setdiff(functions_in_code[i], methods_stop_list)
    })
    len <- lengths(methods)
    ind <- (len > 0L)
    if (!any(ind)) 
        return(out)
    len <- len[ind]
    out$mat <- cbind(Package = rep.int(packages[ind], len), Generic = rep.int(generics[ind], 
        len), Method = unlist(methods[ind], use.names = FALSE))
    out
}
