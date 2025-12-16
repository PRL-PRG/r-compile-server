#? stdlib
`.install_package_vignettes2` <- function (dir, outDir, encoding = "", tangle = FALSE) 
{
    dir <- file_path_as_absolute(dir)
    subdirs <- c("vignettes", file.path("inst", "doc"))
    ok <- dir.exists(file.path(dir, subdirs))
    if (!any(ok)) 
        return(invisible())
    subdir <- subdirs[ok][1L]
    vignetteDir <- file.path(dir, subdir)
    outDir <- file_path_as_absolute(outDir)
    packageName <- basename(outDir)
    outVignetteDir <- file.path(outDir, "doc")
    if (!dir.exists(outVignetteDir)) 
        return(invisible())
    hasHtmlIndex <- file_test("-f", file.path(vignetteDir, "index.html"))
    htmlIndex <- file.path(outDir, "doc", "index.html")
    vigns <- pkgVignettes(dir = dir, subdirs = subdir, check = TRUE)
    if (length(vigns$docs) == 0L) {
        files <- list.files(vignetteDir, all.files = TRUE, no.. = TRUE)
        if ((length(files) > 0L) && !hasHtmlIndex) 
            .writeVignetteHtmlIndex(packageName, htmlIndex)
        return(invisible())
    }
    if (subdir == "vignettes") {
        file.copy(vigns$docs, outVignetteDir)
    }
    vigns <- tryCatch({
        pkgVignettes(dir = outDir, subdirs = "doc", output = TRUE, 
            source = TRUE)
    }, error = function(ex) {
        pkgVignettes(dir = outDir, subdirs = "doc")
    })
    vignetteIndex <- .build_vignette_index(vigns)
    if (tangle && NROW(vignetteIndex) > 0L) {
        cwd <- getwd()
        if (is.null(cwd)) 
            stop("current working directory cannot be ascertained")
        setwd(outVignetteDir)
        loadVignetteBuilder(dir, mustwork = FALSE)
        for (i in seq_along(vigns$docs)) {
            file <- vigns$docs[i]
            if (!is.null(vigns$sources) && !is.null(vigns$sources[file][[1]])) 
                next
            file <- basename(file)
            enc <- vigns$encodings[i]
            cat("  ", sQuote(basename(file)), if (nzchar(enc)) 
                paste("using", sQuote(enc)), "\n")
            engine <- try(vignetteEngine(vigns$engines[i]), silent = TRUE)
            if (!inherits(engine, "try-error")) 
                engine$tangle(file, quiet = TRUE, encoding = enc)
            setwd(outVignetteDir)
        }
        setwd(cwd)
        vigns <- pkgVignettes(dir = outDir, subdirs = "doc", 
            source = TRUE)
        sources <- unlist(vigns$sources)
        for (i in seq_along(sources)) {
            file <- sources[i]
            if (!file_test("-f", file)) 
                next
            bfr <- readLines(file, warn = FALSE)
            if (all(grepl("(^###|^[[:space:]]*$)", bfr, useBytes = TRUE))) 
                unlink(file)
        }
        vigns <- pkgVignettes(dir = outDir, subdirs = "doc", 
            source = TRUE)
        sources <- character(length(vigns$docs))
        for (i in seq_along(vigns$docs)) {
            name <- vigns$names[i]
            source <- find_vignette_product(name, by = "tangle", 
                main = TRUE, dir = vigns$dir, engine = engine)
            if (length(source) > 0L) 
                sources[i] <- basename(source)
        }
        vignetteIndex$R <- sources
    }
    if (!hasHtmlIndex) 
        .writeVignetteHtmlIndex(packageName, htmlIndex, vignetteIndex)
    saveRDS(vignetteIndex, file = file.path(outDir, "Meta", "vignette.rds"))
    invisible()
}
