#? stdlib
`..Rd2pdf` <- function (args = NULL, quit = TRUE) 
{
    do_cleanup <- function(quiet = FALSE) {
        if (clean) {
            setwd(startdir)
            unlink(build_dir, recursive = TRUE)
        }
        else if (!quiet) {
            cat("You may want to clean up by 'rm -Rf ", build_dir, 
                "'\n", sep = "")
        }
    }
    Usage <- function() {
        cat("Usage: R CMD Rd2pdf [options] files", "", "Generate PDF output from the Rd sources specified by files, by", 
            "either giving the paths to the files, or the path to a directory with", 
            "the sources of a package, or an installed package.", 
            "", "Unless specified via option '--output', the basename of the output file", 
            "equals the basename of argument 'files' if this specifies a package", 
            "or a single file, and 'Rd2' otherwise.", "", "The Rd sources are assumed to be ASCII unless they contain \\encoding", 
            "declarations (which take priority) or --encoding is supplied or if using", 
            "package sources, if the package DESCRIPTION file has an Encoding field.", 
            "The output encoding defaults to 'UTF-8'.", "", "Files are listed in the order given: for a package they are in alphabetic", 
            "order of the \\name sections.", "", "Options:", 
            "  -h, --help\t\tprint short help message and exit", 
            "  -v, --version\t\tprint version info and exit", 
            "  -q, --quiet\t\tno output unless errors", "      --no-clean\tdo not remove created temporary files", 
            "      --no-preview\tdo not preview generated PDF file", 
            "      --encoding=enc    use 'enc' as the default input encoding", 
            "      --outputEncoding=outenc", "                        use 'outenc' as the default output encoding", 
            "      --os=NAME\t\tuse OS subdir 'NAME' (unix or windows)", 
            "      --OS=NAME\t\tthe same as '--os'", "  -o, --output=FILE\twrite output to FILE", 
            "      --force\t\toverwrite output file if it exists", 
            "      --title=NAME\tuse NAME as the title of the document", 
            "      --no-index\tdo not index output", "      --no-description\tdo not typeset the description of a package", 
            "      --internals\ttypeset 'internal' documentation (usually skipped)", 
            "      --build-dir=DIR\tuse DIR as the working directory", 
            "      --RdMacros=pkglist", "             \t\tpackages from which to get Rd macros", 
            "", "The output papersize is set by the environment variable R_PAPERSIZE.", 
            "The PDF previewer is set by the environment variable R_PDFVIEWER.", 
            "", "Report bugs at <https://bugs.R-project.org>.", 
            sep = "\n")
    }
    options(showErrorCalls = FALSE, warn = 1)
    if (is.null(args)) {
        args <- commandArgs(TRUE)
        args <- paste(args, collapse = " ")
        args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    }
    startdir <- getwd()
    if (is.null(startdir)) 
        stop("current working directory cannot be ascertained")
    build_dir <- paste0(".Rd2pdf", Sys.getpid())
    title <- ""
    quiet <- FALSE
    clean <- TRUE
    only_meta <- FALSE
    out_ext <- "pdf"
    output <- ""
    enc <- "unknown"
    outenc <- "UTF-8"
    index <- TRUE
    description <- TRUE
    internals <- FALSE
    files <- character()
    dir <- ""
    force <- FALSE
    pkglist <- NULL
    WINDOWS <- .Platform$OS.type == "windows"
    preview <- Sys.getenv("R_PDFVIEWER", if (WINDOWS) 
        "open"
    else "false")
    OSdir <- if (WINDOWS) 
        "windows"
    else "unix"
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            q("no", runLast = FALSE)
        }
        else if (a %in% c("-v", "--version")) {
            cat("Rd2pdf: ", R.version[["major"]], ".", R.version[["minor"]], 
                " (r", R.version[["svn rev"]], ")\n", sep = "")
            cat("", .R_copyright_msg(2000), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            q("no", runLast = FALSE)
        }
        else if (a == "--batch") {
        }
        else if (a %in% c("-q", "--quiet")) {
            quiet <- TRUE
        }
        else if (a == "--no-clean") {
            clean <- FALSE
        }
        else if (a == "--no-preview") {
            preview <- "false"
        }
        else if (a == "--pdf") {
        }
        else if (substr(a, 1, 8) == "--title=") {
            title <- substr(a, 9, 1000)
        }
        else if (a == "-o") {
            if (length(args) >= 2L) {
                output <- args[2L]
                args <- args[-1L]
            }
            else stop("-o option without value", call. = FALSE)
        }
        else if (substr(a, 1, 9) == "--output=") {
            output <- substr(a, 10, 1000)
        }
        else if (a == "--force") {
            force <- TRUE
        }
        else if (a == "--only-meta") {
            only_meta <- TRUE
        }
        else if (substr(a, 1, 5) %in% c("--os=", "--OS=")) {
            OSdir <- substr(a, 6, 1000)
        }
        else if (substr(a, 1, 11) == "--encoding=") {
            enc <- substr(a, 12, 1000)
        }
        else if (substr(a, 1, 17) == "--outputEncoding=") {
            outenc <- substr(a, 18, 1000)
        }
        else if (substr(a, 1, 12) == "--build-dir=") {
            build_dir <- substr(a, 13, 1000)
        }
        else if (a == "--no-index") {
            index <- FALSE
        }
        else if (a == "--no-description") {
            description <- FALSE
        }
        else if (a == "--internals") {
            internals <- TRUE
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
    if (!length(files)) {
        message("no inputs")
        q("no", status = 1L, runLast = FALSE)
    }
    if (WINDOWS) 
        files[1L] <- sub("[\\/]$", "", files[1L])
    if (dir.exists(files[1L])) {
        if (file.exists(file.path(files[1L], "DESCRIPTION"))) {
            if (!quiet) 
                cat("Hmm ... looks like a package\n")
            dir <- files[1L]
            if (!nzchar(output)) 
                output <- paste(basename(dir), out_ext, sep = ".")
        }
        else if (file.exists(f <- file.path(files[1L], "DESCRIPTION.in")) && 
            any(grepl("^Priority: *base", readLines(f)))) {
            if (!quiet) 
                cat("Hmm ... looks like a package from the R distribution\n")
            dir <- files[1L]
            if (!nzchar(output)) 
                output <- paste(basename(dir), out_ext, sep = ".")
            if (index && basename(dir) == "base") {
                index <- FALSE
                if (!quiet) 
                  cat("_not_ indexing 'base' package\n")
            }
        }
        else {
            dir <- if (dir.exists(d <- file.path(files[1L], "man"))) 
                d
            else files[1L]
        }
    }
    else {
        description <- FALSE
        if (length(files) == 1L && !nzchar(output)) 
            output <- paste(sub("[.][Rr]d$", "", basename(files)), 
                out_ext, sep = ".")
    }
    if (!nzchar(dir)) 
        dir <- paste(files, collapse = " ")
    if (!nzchar(output)) 
        output <- paste0("Rd2.", out_ext)
    if (file.exists(output) && !force) {
        cat("file", sQuote(output), "exists; please remove it first\n")
        q("no", status = 1L, runLast = FALSE)
    }
    if (dir.exists(build_dir) && unlink(build_dir, recursive = TRUE)) {
        cat("cannot write to build dir\n")
        q("no", status = 2L, runLast = FALSE)
    }
    dir.create(build_dir, FALSE)
    res <- try(.Rd2pdf(files[1L], file.path(build_dir, "Rd2.tex"), 
        title, quiet, description, only_meta, enc, outenc, dir, 
        OSdir, internals, index, pkglist))
    if (inherits(res, "try-error")) 
        q("no", status = 11L, runLast = FALSE)
    if (!quiet) 
        cat("Creating", out_ext, "output from LaTeX ...\n")
    setwd(build_dir)
    res <- try(texi2pdf("Rd2.tex", quiet = quiet, index = index))
    if (inherits(res, "try-error")) {
        res <- try(texi2pdf("Rd2.tex", quiet = quiet, index = index))
        if (inherits(res, "try-error")) {
            message("Error in running tools::texi2pdf()")
            do_cleanup()
            q("no", status = 1L, runLast = FALSE)
        }
    }
    setwd(startdir)
    if (!quiet) 
        cat("Saving output to", sQuote(output), "...\n")
    file.copy(file.path(build_dir, paste0("Rd2.", out_ext)), 
        output, overwrite = force)
    if (!quiet) 
        cat("Done\n")
    do_cleanup(quiet)
    if (preview != "false") 
        system(paste(preview, output))
    if (quit) 
        q("no", runLast = FALSE)
}
