#? stdlib
`RweaveLatexOptions` <- function (options) 
{
    defaults <- options[[".defaults"]]
    c2l <- function(x) if (is.null(x)) 
        FALSE
    else suppressWarnings(as.logical(x))
    NUMOPTS <- c("width", "height", "resolution")
    CHAROPTS <- c("results", "prefix.string", "engine", "label", 
        "strip.white", "pdf.version", "pdf.encoding", "grdevice")
    for (opt in names(options)) {
        if (opt == ".defaults") 
            next
        oldval <- options[[opt]]
        defval <- defaults[[opt]]
        if (opt %in% CHAROPTS || is.character(defval)) {
        }
        else if (is.logical(defval)) 
            options[[opt]] <- c2l(oldval)
        else if (opt %in% NUMOPTS || is.numeric(defval)) 
            options[[opt]] <- as.numeric(oldval)
        else if (!is.na(newval <- c2l(oldval))) 
            options[[opt]] <- newval
        else if (!is.na(newval <- suppressWarnings(as.numeric(oldval)))) 
            options[[opt]] <- newval
        if (is.na(options[[opt]])) 
            stop(gettextf("invalid value for %s : %s", sQuote(opt), 
                oldval), domain = NA)
    }
    if (!is.null(options$results)) {
        res <- as.character(options$results)
        if (tolower(res) != res) 
            warning("value of 'results' option should be lowercase", 
                call. = FALSE)
        options$results <- tolower(res)
    }
    options$results <- match.arg(options$results, c("verbatim", 
        "tex", "hide"))
    if (!is.null(options$strip.white)) {
        res <- as.character(options$strip.white)
        if (tolower(res) != res) 
            warning("value of 'strip.white' option should be lowercase", 
                call. = FALSE)
        options$strip.white <- tolower(res)
    }
    options$strip.white <- match.arg(options$strip.white, c("true", 
        "false", "all"))
    options
}
