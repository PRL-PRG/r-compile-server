#? stdlib
`checkVignettes` <- function (package, dir, lib.loc = NULL, tangle = TRUE, weave = TRUE, 
    latex = FALSE, workdir = c("tmp", "src", "cur"), keepfiles = FALSE) 
{
    vigns <- pkgVignettes(package = package, dir = dir, lib.loc = lib.loc)
    if (is.null(vigns)) 
        return(NULL)
    workdir <- match.arg(workdir)
    wd <- getwd()
    if (is.null(wd)) 
        stop("current working directory cannot be ascertained")
    if (workdir == "tmp") {
        tmpd <- tempfile("Sweave")
        if (!dir.create(tmpd)) 
            stop(gettextf("unable to create temp directory %s ", 
                sQuote(tmpd)), domain = NA)
        setwd(tmpd)
    }
    else {
        keepfiles <- TRUE
        if (workdir == "src") 
            setwd(vigns$dir)
    }
    on.exit({
        setwd(wd)
        if (!keepfiles) unlink(tmpd, recursive = TRUE)
    })
    file.create(".check.timestamp")
    result <- list(tangle = list(), weave = list(), source = list(), 
        latex = list())
    loadVignetteBuilder(vigns$pkgdir)
    startdir <- getwd()
    for (i in seq_along(vigns$docs)) {
        path <- vigns$docs[i]
        file <- basename(path)
        name <- vigns$names[i]
        engine <- vignetteEngine(vigns$engines[i])
        enc <- vigns$encodings[i]
        if (enc == "non-ASCII") 
            stop(gettextf("Vignette '%s' is non-ASCII but has no declared encoding", 
                name), domain = NA)
        if (tangle) {
            message("  Running ", sQuote(file))
            .eval_with_capture({
                result$tangle[[file]] <- tryCatch({
                  engine$tangle(path, quiet = TRUE, encoding = enc)
                  setwd(startdir)
                  find_vignette_product(name, by = "tangle", 
                    main = FALSE, engine = engine)
                }, error = identity)
            })
        }
        if (weave) {
            setwd(startdir)
            .eval_with_capture({
                result$weave[[file]] <- tryCatch({
                  engine$weave(path, quiet = TRUE, encoding = enc)
                  setwd(startdir)
                  find_vignette_product(name, by = "weave", engine = engine)
                }, error = identity)
            })
        }
        setwd(startdir)
    }
    for (name in c("weave", "tangle")) {
        resultsT <- result[[name]]
        if (length(resultsT) <= 1L) 
            next
        for (i in 1L:(length(resultsT) - 1L)) {
            outputsI <- resultsT[[i]]
            if (inherits(outputsI, "error")) 
                next
            outputsI <- normalizePath(outputsI)
            for (j in (i + 1L):length(resultsT)) {
                outputsJ <- resultsT[[j]]
                if (inherits(outputsJ, "error")) 
                  next
                outputsJ <- normalizePath(outputsJ)
                bad <- intersect(outputsJ, outputsI)
                if (length(bad) > 0L) {
                  stop(gettextf("Vignette %s overwrites the following %s output by vignette %s: %s", 
                    sQuote(basename(names(resultsT)[j])), sQuote(name), 
                    sQuote(basename(names(resultsT)[i])), paste(basename(bad), 
                      collapse = ", ")), domain = NA)
                }
            }
        }
    }
    if (tangle) {
        cwd <- getwd()
        if (is.null(cwd)) 
            stop("current working directory cannot be ascertained")
        for (i in seq_along(result$tangle)) {
            sources <- result$tangle[[i]]
            if (inherits(sources, "error")) 
                next
            sources <- sources[file_test("-nt", sources, ".check.timestamp")]
            for (file in sources) {
                .eval_with_capture({
                  result$source[[file]] <- tryCatch({
                    source(file)
                  }, error = identity)
                })
                setwd(startdir)
            }
        }
    }
    if (weave && latex) {
        if ("Makefile" %notin% list.files(vigns$dir)) {
            for (i in seq_along(result$weave)) {
                file <- names(result$weave)[i]
                output <- result$weave[[i]]
                if (inherits(output, "error")) 
                  next
                if (!vignette_is_tex(output)) 
                  next
                .eval_with_capture({
                  result$latex[[file]] <- tryCatch({
                    texi2pdf(file = output, clean = FALSE, quiet = TRUE, 
                      texinputs = vigns$dir)
                    find_vignette_product(file_path_sans_ext(output), 
                      by = "texi2pdf", engine = engine)
                  }, error = identity)
                })
            }
        }
    }
    for (name in c("tangle", "weave", "source", "latex")) {
        resultsT <- result[[name]]
        resultsT <- lapply(resultsT, FUN = function(res) {
            if (inherits(res, "error")) 
                conditionMessage(res)
            else NULL
        })
        resultsT <- resultsT[!vapply(resultsT, is.null, NA)]
        result[[name]] <- resultsT
    }
    file.remove(".check.timestamp")
    class(result) <- "checkVignettes"
    result
}
