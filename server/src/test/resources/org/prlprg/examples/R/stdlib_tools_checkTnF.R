#? stdlib
`checkTnF` <- function (package, dir, file, lib.loc = NULL) 
{
    code_files <- docs_files <- character()
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        if (file.exists(file.path(dir, "R", "all.rda"))) {
            warning("cannot check R code installed as image")
        }
        code_file <- file.path(dir, "R", package)
        if (file.exists(code_file)) 
            code_files <- code_file
        example_dir <- file.path(dir, "R-ex")
        if (dir.exists(example_dir)) {
            code_files <- c(code_files, list_files_with_exts(example_dir, 
                "R"))
        }
    }
    else if (!missing(dir)) {
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (dir.exists(code_dir)) 
            code_files <- list_files_with_type(code_dir, "code")
        docs_dir <- file.path(dir, "man")
        if (dir.exists(docs_dir)) 
            docs_files <- list_files_with_type(docs_dir, "docs")
    }
    else if (!missing(file)) {
        if (!file_test("-f", file)) 
            stop(gettextf("file '%s' does not exist", file), 
                domain = NA)
        else code_files <- file
    }
    else stop("you must specify 'package', 'dir' or 'file'")
    find_TnF_in_code <- function(file, txt) {
        matches <- list()
        TnF <- c("T", "F")
        find_bad_exprs <- function(e, p) {
            if (is.name(e) && (as.character(e) %in% TnF) && !is.null(p)) {
                matches <<- c(matches, list(p))
            }
            else if (is.recursive(e)) {
                for (i in seq_along(e)) Recall(e[[i]], e)
            }
        }
        exprs <- if (missing(txt)) 
            tryCatch(parse(file = file, n = -1L), error = function(e) stop(gettextf("parse error in file '%s':\n%s", 
                file, .massage_file_parse_error_message(conditionMessage(e))), 
                domain = NA, call. = FALSE))
        else tryCatch(str2expression(txt), error = function(e) stop(gettextf("parse error in examples from file '%s':\n%s", 
            file, conditionMessage(e)), domain = NA, call. = FALSE))
        for (i in seq_along(exprs)) find_bad_exprs(exprs[[i]], 
            NULL)
        matches
    }
    bad_exprs <- list()
    for (file in code_files) {
        exprs <- find_TnF_in_code(file)
        if (length(exprs)) {
            exprs <- list(exprs)
            names(exprs) <- file
            bad_exprs <- c(bad_exprs, exprs)
        }
    }
    for (file in docs_files) {
        Rd <- prepare_Rd(file, defines = .Platform$OS.type)
        txt <- .Rd_get_example_code(Rd)
        exprs <- find_TnF_in_code(file, txt)
        if (length(exprs)) {
            exprs <- list(exprs)
            names(exprs) <- file
            bad_exprs <- c(bad_exprs, exprs)
        }
    }
    class(bad_exprs) <- "checkTnF"
    bad_exprs
}
