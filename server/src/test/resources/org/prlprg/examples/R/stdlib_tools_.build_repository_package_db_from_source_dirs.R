#? stdlib
`.build_repository_package_db_from_source_dirs` <- function (dir, fields = NULL, verbose = getOption("verbose"), 
    validate = FALSE) 
{
    dir <- file_path_as_absolute(dir)
    fields <- unique(c(.get_standard_repository_db_fields(), 
        fields))
    paths <- list.files(dir, full.names = TRUE)
    paths <- paths[dir.exists(paths) & file_test("-f", file.path(paths, 
        "DESCRIPTION"))]
    db <- vector(length(paths), mode = "list")
    if (verbose) 
        message("Processing packages:")
    for (i in seq_along(paths)) {
        if (verbose) 
            message(paste0("  ", basename(paths[i])))
        temp <- tryCatch(read.dcf(file.path(paths[i], "DESCRIPTION"), 
            fields = fields)[1L, ], error = identity)
        if (!inherits(temp, "error")) {
            if (validate) {
                ok <- .check_package_description(db = temp[!is.na(temp)])
                if (any(as.integer(lengths(ok)) > 0L)) {
                  warning(paste(gettextf("Invalid DESCRIPTION file for package %s", 
                    sQuote(basename(paths[i]))), paste(format(ok), 
                    collapse = "\n\n"), sep = "\n\n"), domain = NA, 
                    call. = FALSE)
                  next
                }
            }
            if (is.na(temp["NeedsCompilation"])) {
                temp["NeedsCompilation"] <- if (dir.exists(file.path(paths[i], 
                  "src"))) 
                  "yes"
                else "no"
            }
            db[[i]] <- temp
        }
        else {
            warning(gettextf("reading DESCRIPTION for package %s failed with message:\n  %s", 
                sQuote(basename(paths[i])), conditionMessage(temp)), 
                domain = NA)
        }
    }
    if (verbose) 
        message("done")
    names(db) <- basename(paths)
    db
}
