#? stdlib
`aspell` <- function (files, filter, control = list(), encoding = "unknown", 
    program = NULL, dictionaries = character()) 
{
    program <- aspell_find_program(program)
    if (is.na(program)) 
        stop("No suitable spell-checker program found")
    if (inherits(files, "Rd")) 
        files <- list(files)
    files_are_names <- is.character(files)
    filter_args <- list()
    if (missing(filter) || is.null(filter)) {
        filter <- if (!files_are_names) {
            function(ifile, encoding) {
                if (inherits(ifile, "srcfile")) 
                  readLines(ifile$filename, encoding = encoding, 
                    warn = FALSE)
                else if (inherits(ifile, "connection")) 
                  readLines(ifile, encoding = encoding, warn = FALSE)
                else {
                  as.character(ifile)
                }
            }
        }
        else NULL
    }
    else if (is.character(filter)) {
        filter_name <- filter[1L]
        filter <- aspell_filter_db[[filter_name]]
        if (is.null(filter)) 
            warning(gettextf("Filter '%s' is not available.", 
                filter_name), domain = NA)
    }
    else if (is.list(filter)) {
        filter_name <- filter[[1L]][1L]
        filter_args <- filter[-1L]
        filter <- aspell_filter_db[[filter_name]]
        if (is.null(filter)) 
            warning(gettextf("Filter '%s' is not available.", 
                filter_name), domain = NA)
    }
    else if (!is.function(filter)) 
        stop("Invalid 'filter' argument.")
    encoding <- rep_len(encoding, length(files))
    verbose <- getOption("verbose")
    db <- data.frame(Original = character(), File = character(), 
        Line = integer(), Column = integer(), stringsAsFactors = FALSE)
    db$Suggestions <- list()
    tfile <- tempfile("aspell")
    on.exit(unlink(tfile))
    if (length(dictionaries)) {
        paths <- aspell_find_dictionaries(dictionaries)
        ind <- paths == ""
        if (any(ind)) {
            warning(gettextf("The following dictionaries were not found:\n%s", 
                paste(sprintf("  %s", dictionaries[ind]), collapse = "\n")), 
                domain = NA)
            paths <- paths[!ind]
        }
        if (length(paths)) {
            words <- unlist(lapply(paths, readRDS), use.names = FALSE)
            personal <- tempfile("aspell_personal")
            on.exit(unlink(personal), add = TRUE)
            aspell_write_personal_dictionary_file(words, personal, 
                program = program)
            control <- c(control, "-p", shQuote(personal))
        }
    }
    control <- as.character(control)
    fnames <- names(files)
    files <- as.list(files)
    for (i in seq_along(files)) {
        file <- files[[i]]
        if (files_are_names) 
            fname <- file
        else {
            fname <- if (inherits(file, "srcfile")) 
                file$filename
            else attr(attr(file, "srcref"), "srcfile")$filename
            if (is.null(fname)) 
                fname <- fnames[i]
            if (is.null(fname)) 
                fname <- "<unknown>"
        }
        enc <- encoding[i]
        if (verbose) 
            message(gettextf("Processing file %s", fname), domain = NA)
        lines <- if (is.null(filter)) 
            readLines(file, encoding = enc, warn = FALSE)
        else {
            do.call(filter, c(list(file, encoding = enc), filter_args))
        }
        control <- c(control, attr(lines, "control"))
        writeLines(paste0("^", lines), tfile)
        out <- tools:::.system_with_capture(program, c("-a", 
            control), stdin = tfile)
        if (out$status != 0L) 
            stop(gettextf("Running aspell failed with diagnostics:\n%s", 
                paste(out$stderr, collapse = "\n")), domain = NA)
        lines <- out$stdout[-1L]
        pos <- cumsum(lines == "") + 1L
        if (any(ind <- startsWith(lines, "&"))) {
            info <- strsplit(lines[ind], ": ", fixed = TRUE)
            one <- strsplit(sapply(info, `[`, 1L), " ", fixed = TRUE)
            two <- strsplit(sapply(info, `[`, 2L), ", ", fixed = TRUE)
            db1 <- list2DF(list(Original = vapply(one, `[`, "", 
                2L), File = rep_len(fname, length(one)), Line = pos[ind], 
                Column = as.integer(vapply(one, `[`, "", 4L)), 
                Suggestions = two))
            db <- rbind(db, db1)
        }
        if (any(ind <- startsWith(lines, "#"))) {
            one <- strsplit(lines[ind], " ", fixed = TRUE)
            db1 <- list2DF(list(Original = vapply(one, `[`, "", 
                2L), File = rep_len(fname, length(one)), Line = pos[ind], 
                Column = as.integer(vapply(one, `[`, "", 3L)), 
                Suggestions = vector("list", length(one))))
            db <- rbind(db, db1)
        }
    }
    class(db) <- c("aspell", "data.frame")
    db
}

# Examples


## List the available R system dictionaries.
Sys.glob(file.path(R.home("share"), "dictionaries", "*.rds"))

