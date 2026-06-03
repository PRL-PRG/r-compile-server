#? stdlib
`.install_package_vignettes` <- function (dir, outDir, keep.source = TRUE) 
{
    dir <- file_path_as_absolute(dir)
    vigns <- pkgVignettes(dir = dir)
    if (is.null(vigns) || !length(vigns$docs)) 
        return(invisible())
    outDir <- file_path_as_absolute(outDir)
    outVignetteDir <- file.path(outDir, "doc")
    if (!dir.exists(outVignetteDir) && !dir.create(outVignetteDir)) 
        stop(gettextf("cannot open directory '%s'", outVignetteDir), 
            domain = NA)
    vignettePDFs <- file.path(outVignetteDir, paste0(vigns$names, 
        ".pdf"))
    upToDate <- file_test("-nt", vignettePDFs, vigns$docs)
    cwd <- getwd()
    if (is.null(cwd)) 
        stop("current working directory cannot be ascertained")
    buildDir <- file.path(cwd, ".vignettes")
    if (!dir.exists(buildDir) && !dir.create(buildDir)) 
        stop(gettextf("cannot create directory '%s'", buildDir), 
            domain = NA)
    on.exit(setwd(cwd))
    setwd(buildDir)
    loadVignetteBuilder(vigns$pkgdir)
    for (i in seq_along(vigns$docs)[!upToDate]) {
        file <- vigns$docs[i]
        name <- vigns$names[i]
        engine <- vignetteEngine(vigns$engines[i])
        message(gettextf("processing %s", sQuote(basename(file))), 
            domain = NA)
        output <- tryCatch({
            engine$weave(file, pdf = TRUE, eps = FALSE, quiet = TRUE, 
                keep.source = keep.source, stylepath = FALSE)
            setwd(buildDir)
            find_vignette_product(name, by = "weave", engine = engine)
        }, error = function(e) {
            stop(gettextf("running %s on vignette '%s' failed with message:\n%s", 
                engine[["name"]], file, conditionMessage(e)), 
                domain = NA, call. = FALSE)
        })
        if (vignette_is_tex(output)) {
            tryCatch({
                texi2pdf(file = output, quiet = TRUE, texinputs = vigns$dir)
                output <- find_vignette_product(name, by = "texi2pdf", 
                  engine = engine)
            }, error = function(e) {
                stop(gettextf("compiling TeX file %s failed with message:\n%s", 
                  sQuote(output), conditionMessage(e)), domain = NA, 
                  call. = FALSE)
            })
        }
        if (!file.copy(output, outVignetteDir, overwrite = TRUE)) 
            stop(gettextf("cannot copy '%s' to '%s'", output, 
                outVignetteDir), domain = NA)
    }
    if (any(!upToDate)) 
        compactPDF(outVignetteDir, gs_quality = "ebook")
    setwd(cwd)
    unlink(buildDir, recursive = TRUE)
    .install_package_vignettes2(dir, outDir, tangle = TRUE)
    invisible()
}
