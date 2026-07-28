#? stdlib
`.process_package_files_for_repository_db` <- function (files, type, fields, verbose, validate = FALSE) 
{
    files <- normalizePath(files, mustWork = TRUE)
    fields <- unique(c(.get_standard_repository_db_fields(type), 
        fields))
    filetbs <- basename(files)
    packages <- sapply(strsplit(filetbs, "_", fixed = TRUE), 
        `[`, 1L)
    db <- vector(length(files), mode = "list")
    names(db) <- filetbs
    op <- options(warn = -1)
    on.exit(options(op))
    if (verbose) 
        message("Processing packages:")
    if (type == "win.binary") {
        for (i in seq_along(files)) {
            if (verbose) 
                message(paste0("  ", files[i]))
            con <- unz(files[i], file.path(packages[i], "DESCRIPTION"))
            temp <- tryCatch(read.dcf(con, fields = fields)[1L, 
                ], error = identity)
            if (inherits(temp, "error")) {
                close(con)
                next
            }
            db[[i]] <- temp
            close(con)
        }
    }
    else {
        cwd <- getwd()
        if (is.null(cwd)) 
            stop("current working directory cannot be ascertained")
        td <- tempfile("PACKAGES")
        if (!dir.create(td)) 
            stop("unable to create ", td)
        on.exit(unlink(td, recursive = TRUE), add = TRUE)
        setwd(td)
        for (i in seq_along(files)) {
            if (verbose) 
                message(paste0("  ", files[i]))
            p <- file.path(packages[i], "DESCRIPTION")
            temp <- try(utils::untar(files[i], files = p))
            if (!inherits(temp, "try-error")) {
                temp <- tryCatch(read.dcf(p, fields = fields)[1L, 
                  ], error = identity)
                if (!inherits(temp, "error")) {
                  if (validate) {
                    ok <- .check_package_description(db = temp[!is.na(temp)])
                    if (any(as.integer(lengths(ok)) > 0L)) {
                      message(paste(gettextf("Invalid DESCRIPTION file for package %s", 
                        sQuote(basename(dirname(p)))), paste(format(ok), 
                        collapse = "\n\n"), sep = "\n\n"), domain = NA)
                      next
                    }
                  }
                  if ("NeedsCompilation" %in% fields && is.na(temp["NeedsCompilation"])) {
                    l <- utils::untar(files[i], list = TRUE)
                    temp["NeedsCompilation"] <- if (any(l == 
                      file.path(packages[i], "src/"))) 
                      "yes"
                    else "no"
                  }
                  temp["MD5sum"] <- md5sum(files[i])
                  db[[i]] <- temp
                }
                else {
                  message(gettextf("reading DESCRIPTION for package %s failed with message:\n  %s", 
                    sQuote(basename(dirname(p))), conditionMessage(temp)), 
                    domain = NA)
                }
            }
            unlink(packages[i], recursive = TRUE)
        }
        setwd(cwd)
    }
    if (verbose) 
        message("done")
    db
}
