#? stdlib
`.Stangle` <- function (args = NULL, no.q = interactive()) 
{
    options(warn = 1)
    if (is.null(args)) {
        args <- commandArgs(TRUE)
        args <- paste(args, collapse = " ")
        args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    }
    Usage <- function() {
        cat("Usage: R CMD Stangle file", "", "A front-end for Stangle and other vignette engines", 
            "", "Options:", "  -h, --help     print this help message and exit", 
            "  -v, --version  print version info and exit", "  --engine=pkg::engine  use named vignette engine", 
            "  --encoding=enc  assume encoding 'enc' for file", 
            "  --options=      comma-separated list of Stangle options", 
            "", "Report bugs at <https://bugs.R-project.org>.", 
            sep = "\n")
    }
    do_exit <- if (no.q) 
        function(status = 0L) (if (status) 
            stop
        else message)(".Stangle() exit status ", status)
    else function(status = 0L) q("no", status = status, runLast = FALSE)
    if (!length(args)) {
        Usage()
        do_exit(1L)
    }
    file <- character()
    encoding <- options <- ""
    engine <- NULL
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            do_exit()
        }
        else if (a %in% c("-v", "--version")) {
            cat("Stangle front-end: ", R.version[["major"]], 
                ".", R.version[["minor"]], " (r", R.version[["svn rev"]], 
                ")\n", sep = "")
            cat("", tools:::.R_copyright_msg(2006), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            do_exit()
        }
        else if (substr(a, 1, 9) == "--engine=") {
            engine <- substr(a, 10, 1000)
        }
        else if (substr(a, 1, 11) == "--encoding=") {
            encoding <- substr(a, 12, 1000)
        }
        else if (substr(a, 1, 10) == "--options=") {
            options <- substr(a, 11, 1000)
        }
        else if (startsWith(a, "-")) {
            message(gettextf("Warning: unknown option %s", sQuote(a)), 
                domain = NA)
        }
        else file <- c(file, a)
        args <- args[-1L]
    }
    if (length(file) != 1L) {
        Usage()
        do_exit(1L)
    }
    args <- list(file = file, tangle = TRUE, weave = FALSE, engine = engine, 
        encoding = encoding)
    if (nzchar(options)) {
        opts <- eval(str2expression(paste0("list(", options, 
            ")")))
        args <- c(args, opts)
    }
    output <- do.call(tools::buildVignette, args)
    message(ngettext(length(output), "Output/used file:  ", "Output/used files:  "), 
        paste(output, collapse = ", "), domain = NA)
    do_exit()
}
