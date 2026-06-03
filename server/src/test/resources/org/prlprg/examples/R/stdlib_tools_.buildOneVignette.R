#? stdlib
`.buildOneVignette` <- function (file, pkgdir, quiet = TRUE, have.makefile = FALSE, 
    name, enc, ser_engine) 
{
    op <- options(warn = 1)
    engine <- readRDS(ser_engine)
    loadVignetteBuilder(pkgdir)
    OK <- TRUE
    startdir <- getwd()
    output <- character()
    message(gettextf("--- re-building %s using %s", sQuote(file), 
        engine$name))
    tryCatch({
        engine$weave(file, quiet = quiet, encoding = enc)
        setwd(startdir)
        output <- find_vignette_product(name, by = "weave", engine = engine)
        if (!have.makefile && vignette_is_tex(output)) {
            texi2pdf(file = output, clean = FALSE, quiet = quiet)
            output <- find_vignette_product(name, by = "texi2pdf", 
                engine = engine)
        }
    }, error = function(e) {
        OK <<- FALSE
        message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s", 
            file, conditionMessage(e)))
    })
    if (OK) 
        message(gettextf("--- finished re-building %s\n", sQuote(file)))
    else {
        message(gettextf("--- failed re-building %s\n", sQuote(file)))
        q("no", status = 9L)
    }
    message("+-+", output)
    invisible(output)
}
