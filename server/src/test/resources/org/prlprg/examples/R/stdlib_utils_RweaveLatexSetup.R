#? stdlib
`RweaveLatexSetup` <- function (file, syntax, output = NULL, quiet = FALSE, debug = FALSE, 
    stylepath, ...) 
{
    dots <- list(...)
    if (is.null(output)) {
        prefix.string <- basename(sub(syntax$extension, "", file))
        output <- paste0(prefix.string, ".tex")
    }
    else prefix.string <- basename(sub("\\.tex$", "", output))
    if (!quiet) 
        cat("Writing to file ", output, "\n", "Processing code chunks with options ...\n", 
            sep = "")
    encoding <- attr(file, "encoding")
    if (encoding %in% c("ASCII", "bytes")) 
        encoding <- ""
    output <- file(output, open = "w", encoding = encoding)
    if (missing(stylepath)) {
        p <- Sys.getenv("SWEAVE_STYLEPATH_DEFAULT")
        stylepath <- if (length(p) >= 1L && nzchar(p[1L])) 
            identical(p, "TRUE")
        else FALSE
    }
    if (stylepath) {
        styfile <- file.path(R.home("share"), "texmf", "tex", 
            "latex", "Sweave")
        if (.Platform$OS.type == "windows") 
            styfile <- chartr("\\", "/", styfile)
        if (length(grep(" ", styfile))) 
            warning(gettextf("path to %s contains spaces,\n", 
                sQuote(styfile)), gettext("this may cause problems when running LaTeX"), 
                domain = NA)
    }
    else styfile <- "Sweave"
    options <- list(prefix = TRUE, prefix.string = prefix.string, 
        engine = "R", print = FALSE, eval = TRUE, fig = FALSE, 
        pdf = TRUE, eps = FALSE, png = FALSE, jpeg = FALSE, grdevice = "", 
        width = 6, height = 6, resolution = 300, term = TRUE, 
        echo = TRUE, keep.source = TRUE, results = "verbatim", 
        split = FALSE, strip.white = "true", include = TRUE, 
        pdf.version = grDevices::pdf.options()$version, pdf.encoding = grDevices::pdf.options()$encoding, 
        pdf.compress = grDevices::pdf.options()$compress, expand = TRUE, 
        concordance = FALSE, figs.only = TRUE)
    options$.defaults <- options
    options[names(dots)] <- dots
    options <- RweaveLatexOptions(options)
    list(output = output, styfile = styfile, havesty = FALSE, 
        haveconcordance = FALSE, debug = debug, quiet = quiet, 
        syntax = syntax, options = options, chunkout = list(), 
        srclines = integer())
}
