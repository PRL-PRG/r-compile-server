#? stdlib
`.run_one_vignette` <- function (vig_name, docDir, encoding = "", pkgdir) 
{
    td <- tempfile()
    dir.create(td)
    file.copy(docDir, td, recursive = TRUE)
    setwd(file.path(td, basename(docDir)))
    subdir <- gsub(pkgdir, "", docDir, fixed = TRUE)
    vigns <- pkgVignettes(dir = pkgdir, subdirs = subdir)
    if (is.null(vigns)) {
        cat("\n  When running vignette ", sQuote(vig_name), ":\n", 
            sep = "")
        stop("No vignettes available", call. = FALSE, domain = NA)
    }
    i <- which(basename(vigns$docs) == vig_name)
    if (length(i) == 0L) {
        cat("\n  When running vignette ", sQuote(vig_name), ":\n", 
            sep = "")
        stop("No such vignette ", sQuote(vig_name), call. = FALSE, 
            domain = NA)
    }
    stopifnot(length(i) == 1L)
    loadVignetteBuilder(pkgdir)
    file <- basename(vigns$docs[i])
    name <- vigns$names[i]
    engine <- vignetteEngine(vigns$engines[i])
    output <- tryCatch({
        engine$tangle(file, quiet = TRUE, encoding = encoding)
        find_vignette_product(name, by = "tangle", engine = engine)
    }, error = function(e) {
        cat("\n  When tangling ", sQuote(file), ":\n", sep = "")
        stop(conditionMessage(e), call. = FALSE, domain = NA)
    })
    if (length(output) == 1L) {
        tryCatch({
            source(output, echo = TRUE)
        }, error = function(e) {
            cat("\n  When sourcing ", sQuote(output), ":\n", 
                sep = "")
            stop(conditionMessage(e), call. = FALSE, domain = NA)
        })
    }
    cat("\n *** Run successfully completed ***\n")
}
