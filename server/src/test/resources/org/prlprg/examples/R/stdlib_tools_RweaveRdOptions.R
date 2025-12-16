#? stdlib
`RweaveRdOptions` <- function (options) 
{
    c2l <- function(x) {
        if (is.null(x)) 
            return(FALSE)
        else return(as.logical(toupper(as.character(x))))
    }
    NUMOPTS <- c("width", "height")
    NOLOGOPTS <- c(NUMOPTS, "results", "stage", "strip.white")
    for (opt in names(options)) {
        if (opt %notin% NOLOGOPTS) {
            if (!is.logical(oldval <- options[[opt]])) {
                options[[opt]] <- c2l(oldval)
            }
            if (is.na(options[[opt]])) 
                stop(gettextf("invalid value for '%s' : %s", 
                  opt, oldval), domain = NA)
        }
        else if (opt %in% NUMOPTS) {
            options[[opt]] <- as.numeric(options[[opt]])
        }
    }
    if (!is.null(options$results)) 
        options$results <- match.arg(tolower(options$results), 
            c("text", "verbatim", "rd", "hide"))
    if (!is.null(options$stage)) 
        options$stage <- match.arg(tolower(options$stage), c("build", 
            "install", "render"))
    if (!is.null(options$strip.white)) 
        options$strip.white <- tolower(options$strip.white)
    options
}
