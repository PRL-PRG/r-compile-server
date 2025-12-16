#? stdlib
`.Sweave` <- function (args = NULL, no.q = interactive()) 
{
    options(warn = 1)
    if (is.null(args)) {
        args <- commandArgs(TRUE)
        args <- paste(args, collapse = " ")
        args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    }
    Usage <- function() {
        cat("Usage: R CMD Sweave [options] file", "", "A front-end for Sweave and other vignette engines, via buildVignette()", 
            "", "Options:", "  -h, --help      print this help message and exit", 
            "  -v, --version   print version info and exit", 
            "  --driver=name   use named Sweave driver", "  --engine=pkg::engine  use named vignette engine", 
            "  --encoding=enc  default encoding 'enc' for file", 
            "  --clean         corresponds to --clean=default", 
            "  --clean=        remove some of the files created in the working directory:", 
            "                  \"default\" removes intermediate files;", 
            "                  \"keepOuts\" keeps e.g. *.tex even when PDF is produced", 
            "  --options=      comma-separated list of Sweave/engine options", 
            "  --pdf           convert to PDF document", "  --compact=      try to compact PDF document:", 
            "                  \"no\" (default), \"qpdf\", \"gs\", \"gs+qpdf\", \"both\"", 
            "  --compact       same as --compact=qpdf", "", "Report bugs at <https://bugs.R-project.org>.", 
            sep = "\n")
    }
    do_exit <- if (no.q) 
        function(status = 0L) (if (status) 
            stop
        else message)(".Sweave() exit status ", status)
    else function(status = 0L) q("no", status = status, runLast = FALSE)
    if (!length(args)) {
        Usage()
        do_exit(1L)
    }
    file <- character()
    driver <- encoding <- options <- ""
    engine <- NULL
    toPDF <- FALSE
    compact <- Sys.getenv("_R_SWEAVE_COMPACT_PDF_", "no")
    clean <- FALSE
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            do_exit()
        }
        else if (a %in% c("-v", "--version")) {
            cat("Sweave front-end: ", R.version[["major"]], ".", 
                R.version[["minor"]], " (r", R.version[["svn rev"]], 
                ")\n", sep = "")
            cat("", tools:::.R_copyright_msg(2006), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            do_exit()
        }
        else if (substr(a, 1, 9) == "--driver=") {
            driver <- substr(a, 10, 1000)
        }
        else if (substr(a, 1, 9) == "--engine=") {
            engine <- substr(a, 10, 1000)
        }
        else if (substr(a, 1, 11) == "--encoding=") {
            encoding <- substr(a, 12, 1000)
        }
        else if (a == "--clean") {
            clean <- TRUE
        }
        else if (substr(a, 1, 8) == "--clean=") {
            clean. <- substr(a, 9, 1000)
            clean <- switch(clean., default = TRUE, keepOuts = NA, 
                message(gettextf("Warning: unknown option '--clean='%s", 
                  clean.), domain = NA))
        }
        else if (substr(a, 1, 10) == "--options=") {
            options <- substr(a, 11, 1000)
        }
        else if (a == "--pdf") {
            toPDF <- TRUE
        }
        else if (substr(a, 1, 10) == "--compact=") {
            compact <- substr(a, 11, 1000)
        }
        else if (a == "--compact") {
            compact <- "qpdf"
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
    args <- list(file = file, tangle = FALSE, latex = toPDF, 
        engine = engine, clean = clean)
    if (nzchar(driver)) 
        args <- c(args, driver = driver)
    args <- c(args, encoding = encoding)
    if (nzchar(options)) {
        opts <- eval(str2expression(paste0("list(", options, 
            ")")))
        args <- c(args, opts)
    }
    output <- do.call(tools::buildVignette, args)
    message("Output file:  ", output)
    if (toPDF && compact != "no" && length(output) == 1 && grepl(".pdf$", 
        output, ignore.case = TRUE)) {
        message("Compacting PDF document")
        if (compact %in% c("gs", "gs+qpdf", "both")) {
            gs_cmd <- tools::find_gs_cmd(Sys.getenv("R_GSCMD", 
                ""))
            gs_quality <- "ebook"
        }
        else {
            gs_cmd <- ""
            gs_quality <- "none"
        }
        qpdf <- if (compact %in% c("qpdf", "gs+qpdf", "both")) 
            Sys.which(Sys.getenv("R_QPDF", "qpdf"))
        else ""
        res <- tools::compactPDF(output, qpdf = qpdf, gs_cmd = gs_cmd, 
            gs_quality = gs_quality)
        res <- format(res, diff = 1e+05)
        if (length(res)) 
            message(paste(format(res), collapse = "\n"))
    }
    do_exit()
}
