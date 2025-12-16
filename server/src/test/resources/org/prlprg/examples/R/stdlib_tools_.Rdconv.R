#? stdlib
`.Rdconv` <- function (args = NULL) 
{
    Usage <- function() {
        cat("Usage: R CMD Rdconv [options] FILE", "", "Convert R documentation in FILE to other formats such as plain text,", 
            "HTML or LaTeX.", "", "Options:", "  -h, --help\t\tprint short help message and exit", 
            "  -v, --version\t\tprint version info and exit", 
            "  -t, --type=TYPE\tconvert to format TYPE", "  --encoding=enc        use 'enc' as the output encoding", 
            "  --package=pkg         use 'pkg' as the package name", 
            "  -o, --output=OUT\tuse 'OUT' as the output file", 
            "      --os=NAME\t\tassume OS 'NAME' (unix or windows)", 
            "      --OS=NAME\t\tthe same as '--os'", "  --RdMacros=pkglist", 
            "             \t\tpackages from which to get Rd macros", 
            "", "Possible format specifications are 'txt' (plain text), 'html', 'latex',", 
            "and 'example' (extract R code in the examples).", 
            "", "The default is to send output to stdout, which is also given by '-o -'.", 
            "Using '-o \"\"' will choose an output filename by removing a '.Rd'", 
            "extension from FILE and adding a suitable extension.", 
            "", "Report bugs at <https://bugs.R-project.org>.", 
            sep = "\n")
    }
    options(showErrorCalls = FALSE, warn = 1)
    files <- character(0L)
    type <- "unknown"
    enc <- ""
    pkg <- ""
    out <- NULL
    os <- ""
    pkglist <- NULL
    if (is.null(args)) {
        args <- commandArgs(TRUE)
        args <- paste(args, collapse = " ")
        args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    }
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            q("no", runLast = FALSE)
        }
        else if (a %in% c("-v", "--version")) {
            cat("Rdconv: ", R.version[["major"]], ".", R.version[["minor"]], 
                " (r", R.version[["svn rev"]], ")\n", sep = "")
            cat("", .R_copyright_msg(1997), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            q("no", runLast = FALSE)
        }
        else if (a == "-t") {
            if (length(args) >= 2L) {
                type <- args[2L]
                args <- args[-1L]
            }
            else stop("-t option without value", call. = FALSE)
        }
        else if (substr(a, 1, 7) == "--type=") {
            type <- substr(a, 8, 1000)
        }
        else if (substr(a, 1, 11) == "--encoding=") {
            enc <- substr(a, 12, 1000)
        }
        else if (substr(a, 1, 10) == "--package=") {
            pkg <- substr(a, 11, 1000)
        }
        else if (a == "-o") {
            if (length(args) >= 2L) {
                out <- args[2L]
                args <- args[-1L]
            }
            else stop("-o option without value", call. = FALSE)
        }
        else if (substr(a, 1, 9) == "--output=") {
            out <- substr(a, 10, 1000)
        }
        else if (substr(a, 1, 5) %in% c("--os=", "--OS=")) {
            os <- substr(a, 6, 1000)
        }
        else if (substr(a, 1, 11) == "--RdMacros=") {
            pkglist <- substr(a, 12, 1000)
        }
        else if (startsWith(a, "-")) {
            message("Warning: unknown option ", sQuote(a))
        }
        else files <- c(files, a)
        args <- args[-1L]
    }
    if (length(files) != 1L) 
        stop("exactly one Rd file must be specified", call. = FALSE)
    if (is.character(out) && !nzchar(out)) {
        bf <- sub("\\.[Rr]d$", "", file)
        exts <- c(txt = ".txt", html = ".html", latex = ".tex", 
            exmaple = ".R")
        out <- paste0(bf, exts[type])
    }
    else if (is.null(out)) 
        out <- ""
    if (!nzchar(os)) 
        os <- .Platform$OS.type
    macros <- initialRdMacros(pkglist = pkglist)
    switch(type, txt = {
        Rd2txt(files, out, package = pkg, defines = os, outputEncoding = enc, 
            stages = c("build", "install", "render"), macros = macros)
    }, html = {
        if (!nzchar(enc)) enc <- "UTF-8"
        Rd2HTML(files, out, package = pkg, defines = os, outputEncoding = enc, 
            no_links = TRUE, stages = c("build", "install", "render"), 
            macros = macros)
    }, latex = {
        if (!nzchar(enc)) enc <- "UTF-8"
        Rd2latex(files, out, defines = os, outputEncoding = enc, 
            stages = c("build", "install", "render"), macros = macros)
    }, example = {
        if (!nzchar(enc)) enc <- "UTF-8"
        Rd2ex(files, out, defines = os, outputEncoding = enc, 
            stages = c("build", "install", "render"), macros = macros)
    }, unknown = stop("no 'type' specified", call. = FALSE), 
        stop("'type' must be one of 'txt', 'html', 'latex' or 'example'", 
            call. = FALSE))
    invisible()
}
