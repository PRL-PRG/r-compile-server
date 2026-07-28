#? stdlib
`offline_help_helper` <- function (texfile, type, texinputs = NULL) 
{
    tf <- tempfile("tex", tmpdir = ".", fileext = ".tex")
    on.exit(unlink(tf))
    file.copy(texfile, tf)
    tools::texi2pdf(tf, clean = TRUE, texinputs = texinputs)
    ofile <- sub("tex$", "pdf", tf)
    ofile2 <- sub("tex$", "pdf", texfile)
    if (!file.exists(ofile)) 
        stop(gettextf("creation of %s failed", sQuote(ofile2)), 
            domain = NA)
    if (file.copy(ofile, ofile2, overwrite = TRUE)) {
        unlink(ofile)
        message(gettextf("Saving help page to %s", sQuote(basename(ofile2))), 
            domain = NA)
    }
    else {
        message(gettextf("Saving help page to %s", sQuote(ofile)), 
            domain = NA)
    }
    invisible()
}
