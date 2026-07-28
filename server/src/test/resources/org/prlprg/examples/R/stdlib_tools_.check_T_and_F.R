#? stdlib
`.check_T_and_F` <- function (package, dir, lib.loc = NULL) 
{
    check_examples <- isTRUE(as.logical(Sys.getenv("_R_CHECK_RD_EXAMPLES_T_AND_F_")))
    bad_closures <- character()
    bad_examples <- character()
    find_bad_closures <- function(env) {
        x <- lapply(as.list(env, all.names = TRUE, sorted = TRUE), 
            function(v) {
                if (typeof(v) == "closure") 
                  codetools::findGlobals(v)
            })
        names(x)[vapply(x, function(s) any(s %in% c("T", "F")), 
            NA)]
    }
    find_bad_examples <- function(txts) {
        env <- new.env(hash = TRUE)
        x <- lapply(txts, function(txt) {
            tryCatch({
                eval(str2expression(paste("FOO <- function() {", 
                  paste(txt, collapse = "\n"), "}", collapse = "\n")), 
                  env)
                find_bad_closures(env)
            }, error = function(e) character())
        })
        names(txts)[lengths(x) > 0L]
    }
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        if (check_examples) 
            example_texts <- .get_example_texts_from_example_dir(file.path(dir, 
                "R-ex"))
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (!packageHasNamespace(basename(dir), dirname(dir)) && 
            dir.exists(code_dir)) {
            code_env <- new.env(hash = TRUE)
            dfile <- file.path(dir, "DESCRIPTION")
            meta <- if (file_test("-f", dfile)) 
                .read_description(dfile)
            else character()
            .source_assignments_in_code_dir(code_dir, code_env, 
                meta)
            bad_closures <- find_bad_closures(code_env)
        }
        if (check_examples) 
            example_texts <- .get_example_texts_from_source_dir(dir)
    }
    if (check_examples) 
        bad_examples <- find_bad_examples(example_texts)
    out <- list(bad_closures = bad_closures, bad_examples = bad_examples)
    class(out) <- "check_T_and_F"
    out
}
