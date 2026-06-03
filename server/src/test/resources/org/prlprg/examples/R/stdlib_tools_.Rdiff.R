#? stdlib
`.Rdiff` <- function (no.q = FALSE) 
{
    options(showErrorCalls = FALSE)
    Usage <- function() {
        cat("Usage: R CMD Rdiff [options] FROM-file TO-file EXITSTATUS", 
            "", "Diff R output files FROM-FILE and TO-FILE discarding the R startup message,", 
            "where FROM-FILE equal to '-' means stdin.", "", 
            "Options:", "  -e, --forEx    uses 'forEx = TRUE' in Rdiff()", 
            "  -h, --help     print this help message and exit", 
            "  -v, --version  print version info and exit", "", 
            "Report bugs at <https://bugs.R-project.org>.", sep = "\n")
    }
    do_exit <- if (no.q) 
        function(status = 0L) (if (status) 
            stop
        else message)(".Rdiff() exit status ", status)
    else function(status = 0L) q("no", status = status, runLast = FALSE)
    args <- commandArgs(TRUE)
    if (!length(args)) {
        Usage()
        do_exit(1L)
    }
    args <- paste(args, collapse = " ")
    args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    if (length(args) == 1L) {
        if (args[1L] %in% c("-h", "--help")) {
            Usage()
            do_exit(0)
        }
        if (args[1L] %in% c("-v", "--version")) {
            cat("R output diff: ", R.version[["major"]], ".", 
                R.version[["minor"]], " (r", R.version[["svn rev"]], 
                ")\n", sep = "")
            cat("", .R_copyright_msg(2000), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            do_exit(0)
        }
        Usage()
        do_exit(1L)
    }
    if (length(args) == 0L) {
        Usage()
        do_exit(1L)
    }
    forEx <- any(is.ex <- args %in% c("-e", "--forEx"))
    if (forEx) 
        args <- args[!is.ex]
    exitstatus <- as.integer(args[3L])
    if (is.na(exitstatus)) 
        exitstatus <- 0L
    left <- args[1L]
    if (left == "-") 
        left <- "stdin"
    status <- Rdiff(left, args[2L], useDiff = TRUE, forEx = forEx)
    if (status) 
        status <- exitstatus
    do_exit(status)
}
