#? stdlib
`.check_bogus_return` <- function (package, dir, lib.loc = NULL) 
{
    bad_closures <- character()
    find_bad_closures <- function(env) {
        x <- lapply(as.list(env, all.names = TRUE, sorted = TRUE), 
            function(v) {
                if (typeof(v) == "closure") 
                  codetools::findGlobals(v, merge = FALSE)$variables
            })
        names(x)[vapply(x, function(s) any(s %in% "return"), 
            NA)]
    }
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        if (package %notin% .get_standard_package_names()$base) {
            .load_namespace_quietly(package, dirname(dir))
            code_env <- asNamespace(package)
            bad_closures <- find_bad_closures(code_env)
        }
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (dir.exists(code_dir)) {
            code_env <- new.env(hash = TRUE)
            dfile <- file.path(dir, "DESCRIPTION")
            meta <- if (file_test("-f", dfile)) 
                .read_description(dfile)
            else character()
            .source_assignments_in_code_dir(code_dir, code_env, 
                meta)
            bad_closures <- find_bad_closures(code_env)
        }
    }
    out <- list(bad_closures = bad_closures)
    class(out) <- "check_bogus_return"
    out
}
