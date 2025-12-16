#? stdlib
`.build_vignette_index` <- function (vigns) 
{
    stopifnot(inherits(vigns, "pkgVignettes"))
    files <- vigns$docs
    names <- vigns$names
    dir <- vigns$dir
    sources <- vigns$sources
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    nvigns <- length(files)
    if (nvigns == 0L) {
        out <- data.frame(File = character(), Title = character(), 
            PDF = character(), R = character(), stringsAsFactors = FALSE)
        out$Depends <- list()
        out$Keywords <- list()
        return(out)
    }
    if (any(dups <- duplicated(names))) {
        dupname <- names[dups][1L]
        dup <- basename(files[dups][1L])
        orig <- basename(files[names == dupname][1L])
        stop(gettextf("In '%s' vignettes '%s' and '%s' have the same vignette name", 
            basename(dirname(dir)), orig, dup), domain = NA)
    }
    contents <- vector("list", length = nvigns * 5L)
    dim(contents) <- c(nvigns, 5L)
    for (i in seq_along(files)) contents[i, ] <- vignetteInfo(files[i])
    colnames(contents) <- c("File", "Title", "Depends", "Keywords", 
        "Engine")
    outputs <- vigns$outputs
    outputs <- if (!is.null(outputs)) 
        basename(outputs)
    else character(nvigns)
    out <- data.frame(File = unlist(contents[, "File"]), Title = unlist(contents[, 
        "Title"]), PDF = outputs, R = "", row.names = NULL, stringsAsFactors = FALSE)
    for (i in seq_along(sources)) if (length(s <- sources[[i]])) 
        out$R[which(names(sources)[i] == files)] <- basename(s[1L])
    out$Depends <- contents[, "Depends"]
    out$Keywords <- contents[, "Keywords"]
    stopifnot(NROW(out) == nvigns)
    out
}
