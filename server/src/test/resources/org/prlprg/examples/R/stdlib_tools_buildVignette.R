#? stdlib
`buildVignette` <- function (file, dir = ".", weave = TRUE, latex = TRUE, tangle = TRUE, 
    quiet = TRUE, clean = TRUE, keep = character(), engine = NULL, 
    buildPkg = NULL, encoding = getVignetteEncoding(file), ...) 
{
    if (!file_test("-f", file)) 
        stop(gettextf("file '%s' not found", file), domain = NA)
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    if (!is.null(buildPkg)) 
        for (pkg in buildPkg) suppressPackageStartupMessages(loadNamespace(pkg))
    if (is.null(engine)) 
        engine <- getVignetteEngine(file)
    if (is.character(engine)) 
        engine <- vignetteEngine(engine, package = buildPkg)
    names <- sapply(engine$pattern, FUN = sub, "", file)
    name <- basename(names[(names != file)][1L])
    if (is.na(name)) 
        stop(gettextf("vignette filename '%s' does not match any of the '%s' filename patterns", 
            file, paste(engine$package, engine$name, sep = "::")), 
            domain = NA)
    if (encoding == "non-ASCII") 
        stop(gettextf("Vignette '%s' is non-ASCII but has no declared encoding", 
            name))
    file <- file_path_as_absolute(file)
    olddir <- setwd(dir)
    if (!is.null(olddir)) 
        on.exit(setwd(olddir))
    if (is.na(clean) || clean) 
        origfiles <- list.files(all.files = TRUE)
    tdir <- getwd()
    output <- NULL
    final <- if (weave) {
        engine$weave(file, quiet = quiet, encoding = encoding, 
            ...)
        setwd(tdir)
        output <- find_vignette_product(name, by = "weave", engine = engine)
        if (latex && vignette_is_tex(output)) {
            texi2pdf(file = output, clean = FALSE, quiet = quiet)
            find_vignette_product(name, by = "texi2pdf", engine = engine)
        }
        else output
    }
    sources <- if (tangle) {
        engine$tangle(file, quiet = quiet, encoding = encoding, 
            ...)
        setwd(tdir)
        find_vignette_product(name, by = "tangle", main = FALSE, 
            engine = engine)
    }
    keep <- c(sources, final, keep)
    if (is.na(clean)) {
        keep <- c(keep, output)
        clean <- TRUE
    }
    if (clean) {
        f <- setdiff(list.files(all.files = TRUE, no.. = TRUE), 
            c(keep, origfiles))
        unlink(f, recursive = TRUE)
    }
    unique(keep)
}
